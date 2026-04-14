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
	TButton *ButtonSpremiRecenziju;
	TButton *ButtonOdustani;
	TMemo *memTekst;
	TDateTimePicker *dtpDatum;
	TLabel *Label1;
	TEdit *edtFilm;
	TLabel *Label2;
	TTrackBar *TrackBarOcjena;
	TLabel *Label4;
	TLabel *LabelOcjena;
	TLabel *LabelOcjena2;
	TLabel *LabelOcjena3;
	TLabel *LabelOcjena4;
	TLabel *LabelOcjena5;
	TLabel *LabelOcjena6;
	TLabel *LabelOcjena7;
	TLabel *LabelOcjena8;
	TLabel *LabelOcjena9;
	TLabel *LabelOcjena10;
	void __fastcall ButtonSpremiRecenzijuClick(TObject *Sender);
	void __fastcall ButtonOdustaniClick(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormRecenzija(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormRecenzija *FormRecenzija;
//---------------------------------------------------------------------------
#endif
