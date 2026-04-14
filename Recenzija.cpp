//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Recenzija.h"
#include "DataTypes.h"
#include <registry.hpp>
#include <System.IOUtils.hpp>
#include <System.JSON.Readers.hpp>
#include <System.JSON.Writers.hpp>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormRecenzija *FormRecenzija;
//---------------------------------------------------------------------------
__fastcall TFormRecenzija::TFormRecenzija(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormRecenzija::ButtonSpremiRecenzijuClick(TObject *Sender)
{
    if (memTekst->Lines->Text.Trim().IsEmpty()) {
        ShowMessage("Tekst recenzije ne smije biti prazan!");
        return;
    }

    String putanja = TPath::Combine(ExtractFilePath(Application->ExeName), "..\\..\\recenzija.json");

    try {
        TJSONArray *jsonArray = new TJSONArray();

        // Ako file postoji → učitaj i parsiraj
        if (TFile::Exists(putanja)) {
            TStringList *sl = new TStringList();
            sl->LoadFromFile(putanja, TEncoding::UTF8);
            String sadrzaj = sl->Text.Trim();
            delete sl;

            if (!sadrzaj.IsEmpty()) {
                TJSONValue *parsiran = TJSONObject::ParseJSONValue(sadrzaj);

                if (parsiran && parsiran->ClassNameIs("TJSONArray")) {
                    TJSONArray *postojeciArray = static_cast<TJSONArray*>(parsiran);

                    // (opcionalno) provjera duplikata: isti film + isti tekst
                    for (int i = 0; i < postojeciArray->Count; i++) {
                        TJSONObject *obj = static_cast<TJSONObject*>(postojeciArray->Items[i]);

                        if (obj->GetValue("film")->Value() == edtFilm->Text &&
                            obj->GetValue("tekst")->Value() == memTekst->Lines->Text.Trim()) {

                            ShowMessage("Recenzija već postoji!");
                            delete jsonArray;
                            delete parsiran;
                            return;
                        }
                    }

                    delete jsonArray;
                    jsonArray = postojeciArray;
                } else {
                    delete parsiran;
                }
            }
        }

        // Nova recenzija
        TJSONObject *rec = new TJSONObject();
        rec->AddPair("film", edtFilm->Text);
        rec->AddPair("ocjena", new TJSONNumber(TrackBarOcjena->Position));
        rec->AddPair("tekst", memTekst->Lines->Text.Trim());
        rec->AddPair("datum", FormatDateTime("yyyy-mm-dd", dtpDatum->Date));

        jsonArray->AddElement(rec);

        // Spremanje u UTF-8
        String jsonString = jsonArray->ToString();

        TFileStream *fs = new TFileStream(putanja, fmCreate);
        TBytes bytes = TEncoding::UTF8->GetBytes(jsonString);
        fs->WriteBuffer(&bytes[0], bytes.Length);
        delete fs;

        delete jsonArray;

        ShowMessage("Recenzija uspješno spremljena!");
        ModalResult = mrOk;

        // Reset forme
        memTekst->Clear();
        dtpDatum->Date = Now();
        edtFilm->Clear();

    } catch (Exception &e) {
        ShowMessage(e.Message);
}

	/*

    ADOQuery1->SQL->Text =
    "INSERT INTO Recenzije (IDRecenzije, Tekst, Ocjena, Datum, FilmID, KorisnikID) "
    "VALUES (:id, :tekst, :ocjena, :datum, :filmid, :korisnikid)";

	ADOQuery1->Parameters->ParamByName("id")->Value       = idRecenzije;
	ADOQuery1->Parameters->ParamByName("tekst")->Value    = tekst;
	ADOQuery1->Parameters->ParamByName("ocjena")->Value   = ocjena;
	ADOQuery1->Parameters->ParamByName("datum")->Value    = datum;
	ADOQuery1->Parameters->ParamByName("filmid")->Value   = filmID;
	ADOQuery1->Parameters->ParamByName("korisnikid")->Value = korisnikID;

	ADOQuery1->ExecSQL();

    */
}
//---------------------------------------------------------------------------
void __fastcall TFormRecenzija::ButtonOdustaniClick(TObject *Sender)
{
    memTekst->Clear();
    dtpDatum->Date = Now();
	edtFilm->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TFormRecenzija::FormCreate(TObject *Sender)
{
 	String path = TPath::Combine(TPath::GetDocumentsPath(), "postavke.ini");

	TIniFile* ini = new TIniFile(path);

	FormRecenzija->StyleName = ini->ReadString("Stilovi", "stil1", "Obsidian");
	StyleName = ini->ReadString("Stilovi", "stil1", "Obsidian");
	GroupBoxRecenzija->StyleName = ini->ReadString("Stilovi", "stil2", "Obsidian");

	delete ini;
}
//---------------------------------------------------------------------------


