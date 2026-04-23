//---------------------------------------------------------------------------

#include <vcl.h>
#include <IniFiles.hpp>
#include <System.IniFiles.hpp>
#pragma hdrstop

#include "Jezik_INI.h"
#include "Dobrodosli.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormDobrodosli *FormDobrodosli;
//---------------------------------------------------------------------------
__fastcall TFormDobrodosli::TFormDobrodosli(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TFormDobrodosli::ButtonHRVClick(TObject *Sender)
{
	String p = TPath::Combine(ExtractFilePath(Application->ExeName), "..\\..\\postavke.ini");
	TIniFile* ini = new TIniFile(p);

	ButtonRegistracijaForm->Caption = ini->ReadString("HR", "ButtonRegistriraj", "");
	ButtonPrijavaForm->Caption = ini->ReadString("HR", "ButtonPrijava", "");

	delete ini;
}
//---------------------------------------------------------------------------

void __fastcall TFormDobrodosli::ButtonENGClick(TObject *Sender)
{
    String p = TPath::Combine(ExtractFilePath(Application->ExeName), "..\\..\\postavke.ini");
	TIniFile* ini = new TIniFile(p);

	ButtonRegistracijaForm->Caption = ini->ReadString("ENG", "ButtonRegistriraj", "");
	ButtonPrijavaForm->Caption = ini->ReadString("ENG", "ButtonPrijava", "");

    delete ini;
}
//---------------------------------------------------------------------------

void __fastcall TFormDobrodosli::FormCreate(TObject *Sender)
{
    String p = TPath::Combine(ExtractFilePath(Application->ExeName), "..\\..\\postavke.ini");
	TIniFile* ini = new TIniFile(p);

	ButtonRegistracijaForm->StyleName = ini->ReadString("Stilovi", "stil2", "0");
	ButtonPrijavaForm->StyleName = ini->ReadString("Stilovi", "stil2", "0");
	ButtonHRV->StyleName = ini->ReadString("Stilovi", "stil2", "0");
    ButtonENG->StyleName = ini->ReadString("Stilovi", "stil2", "0");

    delete ini;
}
//---------------------------------------------------------------------------

