//---------------------------------------------------------------------------
#pragma hdrstop
#include "PregledFilmova.h"
#include "Funk.h"
#include "DataTypes.h"
#include "omiljeniFilmovi.h"
//---------------------------------------------------------------------------


void __fastcall TFormSviFilmovi::OsvjeziListu()
{
	_di_IXMLfilmoviType OFilmovi = Getfilmovi(XMLDocumentOmiljeniFilmovi);
	listViewOFilmovi->Items->Clear();

    for(int i = 0; i < OFilmovi->Count; i++){
        TListItem *item = listViewOFilmovi->Items->Add();
        item->Caption = OFilmovi->film[i]->naslov;
        item->SubItems->Add(IntToStr(OFilmovi->film[i]->godina));
        item->SubItems->Add(IntToStr(OFilmovi->film[i]->trajanje));
        item->SubItems->Add(OFilmovi->film[i]->opis);
    }
}

void __fastcall TFormSviFilmovi::OcistiPolja()
{
    EditNoviNaziv->Text = "";
    EditNovaGodina->Text = "";
    EditNovoTrajanje->Text = "";
    MemoOpisNovogFilma->Text = "";
}

void __fastcall TFormSviFilmovi::SirinaDBGrida()
{
    TDataSet* ds = DBGridFilmoviBaza->DataSource->DataSet;
    if (!ds || !ds->Active) return;

    struct Konfig { String polje; int sirina; bool vidljivo; };
    Konfig konfig[] = {
        { "naslov",     200, true  },
        { "godina",      60, true  },
        { "trajanje",    80, true  },
        { "zanr",       150, true  },
        { "redatelj",   150, true  },
        { "glumci",     250, true  },
        { "imdbRating",  80, true  },
        { "metascore",   80, true  },
        { "ratingRT",   100, true  },
        // stupci koje skrivamo:
        { "id",           0, false },
        { "imdbID",       0, false },
        { "posterUrl",    0, false },
        { "poster",       0, false },
        { "opis",         0, false },
        { "scenarist",    0, false },
        { "jezik",        0, false },
        { "drzava",       0, false },
        { "nagrade",      0, false },
        { "rated",        0, false },
        { "released",     0, false },
        { "tip",          0, false },
        { "boxOffice",    0, false },
        { "imdbVotes",    0, false }
    };

    int n = sizeof(konfig) / sizeof(konfig[0]);
    for (int i = 0; i < n; i++) {
        TField* f = ds->FindField(konfig[i].polje);
        if (!f) continue;
        f->Visible = konfig[i].vidljivo;
        if (konfig[i].vidljivo) {
            f->DisplayWidth = konfig[i].sirina / 7;
        }
    }
}

void __fastcall TFormSviFilmovi::StilizirajLabele(TLabel *lbl)
{
    lbl->Font->Size    = 16;
    lbl->Font->Style   = TFontStyles() << fsBold;
    lbl->Font->Color   = (TColor)0x00FFD700;
    lbl->Alignment     = taCenter;
    lbl->Transparent   = true;
}

void __fastcall TFormSviFilmovi::OsvjeziBrojFilmova()
{
    FDQueryBrojFilmova->Open();
    LabelUkupnoFilmova->Caption = "Ukupno: " +
        FDQueryBrojFilmova->Fields->Fields[0]->AsString;
    FDQueryBrojFilmova->Close();
}
//---------------------------------------------------------------------------
#pragma package(smart_init)
