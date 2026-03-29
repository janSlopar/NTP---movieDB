//---------------------------------------------------------------------------

#ifndef StiloviH
#define StiloviH

#include <Vcl.Forms.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Samples.Spin.hpp>

// Boje (BGR format!)
#define BOJA_POZADINA     (TColor)0x1A1A1A   // forma pozadina
#define BOJA_INPUT        (TColor)0x2C2C2C   // edit, memo pozadina
#define BOJA_GRUPBOX      (TColor)0x242424   // groupbox pozadina
#define BOJA_AKCIJA       (TColor)0x0A32FA   // RT crvena #FA320A
#define BOJA_TEKST        (TColor)0xFFFFFF   // bijeli tekst
#define BOJA_LABEL        (TColor)0xAAAAAA   // sivi label
#define BOJA_BORDER       (TColor)0x444444   // rubovi
#define BOJA_BTN_SEKUNDAR (TColor)0x3A3A3A   // tamni gumb

void PrimijeniStil(TForm *forma);
//---------------------------------------------------------------------------
#endif
