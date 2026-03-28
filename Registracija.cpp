//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Registracija.h"
#include "DataTypes.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormRegistracija *FormRegistracija;
//---------------------------------------------------------------------------
__fastcall TFormRegistracija::TFormRegistracija(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TFormRegistracija::ButtonRegistrirajClick(TObject *Sender)
{
	Korisnik K_test;

	K_test.setIme(EditIme->Text	);

	Application->MessageBoxW("klik Radi!", MB_OK|MB_ICONQUESTION);
	ShowMessage("Pozdrav, " + K_test.getIme() + "!");

}
//---------------------------------------------------------------------------

