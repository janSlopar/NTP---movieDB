//---------------------------------------------------------------------------

#ifndef RecenzijaH
#define RecenzijaH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Samples.Spin.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TFormRecenzija : public TForm
{
__published:	// IDE-managed Components
	TGroupBox *GroupBoxRecenzija;
	TButton *ButtonSpremi;
	TButton *ButtonOdustani;
	TMemo *memTekst;
	TSpinButton *spnOcjena;
	TDateTimePicker *dtpDatum;
	TLabel *Label1;
	TEdit *edtFilmID;
	TEdit *edtKorisnikID;
	TLabel *Label2;
	TLabel *Label3;
	void __fastcall ButtonSpremiClick(TObject *Sender);
	void __fastcall ButtonOdustaniClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormRecenzija(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormRecenzija *FormRecenzija;
//---------------------------------------------------------------------------
#endif
