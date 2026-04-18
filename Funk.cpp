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
    int sirine[] = { 200, 60, 80, 150, 150, 250, 80, 80, 100 };
    int brojSirina = sizeof(sirine) / sizeof(sirine[0]);

    int maxCols = DBGridFilmoviBaza->Columns->Count;
    if (maxCols > brojSirina) maxCols = brojSirina;

    for (int i = 0; i < maxCols; i++)
		DBGridFilmoviBaza->Columns->Items[i]->Width = sirine[i];

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
