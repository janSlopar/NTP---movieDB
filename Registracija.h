//---------------------------------------------------------------------------

#ifndef RegistracijaH
#define RegistracijaH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TFormRegistracija : public TForm
{
__published:	// IDE-managed Components
	TGroupBox *GroupBox1;
	TLabel *Label1;
	TLabel *Label2;
	TEdit *EditIme;
	TEdit *Edit1;
	TLabel *Label3;
	TEdit *EditKorIme;
	TLabel *Label4;
	TEdit *EditEmail;
	TLabel *Label5;
	TEdit *EditLozinka;
	TButton *ButtonRegistriraj;
	void __fastcall ButtonRegistrirajClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormRegistracija(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormRegistracija *FormRegistracija;
//---------------------------------------------------------------------------
#endif
