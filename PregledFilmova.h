//---------------------------------------------------------------------------

#ifndef PregledFilmovaH
#define PregledFilmovaH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TFormSviFilmovi : public TForm
{
__published:	// IDE-managed Components
	TButton *ButtonDodajWatchlistu;
	TEdit *Edit1;
	TEdit *Edit2;
	TLabel *Label1;
	TLabel *Label2;
private:	// User declarations
public:		// User declarations
	__fastcall TFormSviFilmovi(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormSviFilmovi *FormSviFilmovi;
//---------------------------------------------------------------------------
#endif
