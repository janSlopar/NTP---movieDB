//---------------------------------------------------------------------------

#pragma hdrstop

#include "Stilovi.h"

// poziv samo u registraciskoj formi
static void StilizirajLabel(TLabel *lbl)
{
    lbl->Font->Name  = "Arial";
    lbl->Font->Size  = 9;
    lbl->Font->Color = BOJA_LABEL;
    lbl->Font->Style = TFontStyles();
}

static void StilizirajEdit(TEdit *edit)
{
    edit->Color       = BOJA_INPUT;
    edit->Font->Name  = "Arial";
    edit->Font->Size  = 10;
    edit->Font->Color = BOJA_TEKST;
    edit->Font->Style = TFontStyles();
}

static void StilizirajMemo(TMemo *memo)
{
    memo->Color       = BOJA_INPUT;
    memo->Font->Name  = "Arial";
    memo->Font->Size  = 10;
    memo->Font->Color = BOJA_TEKST;
    memo->Font->Style = TFontStyles();
    memo->BorderStyle = bsSingle;
}

static void StilizirajButton(TButton *btn)
{
    if (btn->Tag == 1)
    {

        btn->Color            = BOJA_AKCIJA;
        btn->Font->Color      = BOJA_TEKST;
        btn->Font->Style      = TFontStyles() << fsBold;
        btn->ParentBackground = false;
        btn->ParentColor      = false;
    }
    else
    {

        btn->Color            = BOJA_BTN_SEKUNDAR;
        btn->Font->Color      = BOJA_TEKST;
        btn->Font->Style      = TFontStyles();
        btn->ParentBackground = false;
        btn->ParentColor      = false;
    }

    btn->Font->Name = "Arial";
    btn->Font->Size = 10;
}

static void StilizirajGroupBox(TGroupBox *grp)
{
    grp->Color       = BOJA_GRUPBOX;
    grp->Font->Name  = "Arial";
    grp->Font->Size  = 9;
    grp->Font->Color = BOJA_LABEL;
    grp->Font->Style = TFontStyles() << fsBold;
}

static void StilizirajSpinEdit(TSpinEdit *spin)
{
    spin->Color       = BOJA_INPUT;
    spin->Font->Name  = "Arial";
    spin->Font->Size  = 10;
    spin->Font->Color = BOJA_TEKST;
    spin->Font->Style = TFontStyles();
}

static void StilizirajDatePicker(TDateTimePicker *dtp)
{
    dtp->Color       = BOJA_INPUT;
    dtp->Font->Name  = "Arial";
    dtp->Font->Size  = 10;
    dtp->Font->Color = BOJA_TEKST;
    dtp->Font->Style = TFontStyles();
}

void PrimijeniStil(TForm *forma)
{
    forma->Color      = BOJA_POZADINA;
    forma->Font->Name = "Arial";
    forma->Font->Size = 10;
    forma->Font->Color = BOJA_TEKST;

      for (int i = 0; i < forma->ComponentCount; i++)
    {
        TComponent *comp = forma->Components[i];

        if      (TLabel           *c = dynamic_cast<TLabel*>          (comp)) stilLabel(c);
        else if (TEdit            *c = dynamic_cast<TEdit*>           (comp)) stilEdit(c);
        else if (TMemo            *c = dynamic_cast<TMemo*>           (comp)) stilMemo(c);
        else if (TGroupBox        *c = dynamic_cast<TGroupBox*>       (comp)) stilGroupBox(c);
        else if (TSpinEdit        *c = dynamic_cast<TSpinEdit*>       (comp)) stilSpinEdit(c);
        else if (TDateTimePicker  *c = dynamic_cast<TDateTimePicker*> (comp)) stilDatePicker(c);
        else if (TButton          *c = dynamic_cast<TButton*>         (comp)) stilButton(c);
    }
}
//---------------------------------------------------------------------------
#pragma package(smart_init)
