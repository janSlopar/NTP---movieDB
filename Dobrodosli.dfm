object FormDobrodosli: TFormDobrodosli
  Left = 0
  Top = 0
  ClientHeight = 441
  ClientWidth = 624
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnCreate = FormCreate
  TextHeight = 15
  object LabelDobrodosli: TLabel
    Left = 224
    Top = 72
    Width = 128
    Height = 15
    Caption = 'Dobro dosli na IMiniDB !'
  end
  object Label1: TLabel
    Left = 280
    Top = 408
    Width = 48
    Height = 15
    Caption = 'v1.0 2026'
  end
  object ButtonRegistracijaForm: TButton
    Left = 240
    Top = 112
    Width = 97
    Height = 33
    Caption = 'Registriraj se!'
    TabOrder = 0
  end
  object ButtonPrijavaForm: TButton
    Left = 253
    Top = 159
    Width = 75
    Height = 25
    Caption = 'Prijavi se!'
    TabOrder = 1
  end
  object ButtonHRV: TButton
    Left = 528
    Top = 16
    Width = 75
    Height = 25
    Caption = 'Hrvatski'
    TabOrder = 2
    OnClick = ButtonHRVClick
  end
  object ButtonENG: TButton
    Left = 528
    Top = 47
    Width = 75
    Height = 25
    Caption = 'English'
    TabOrder = 3
    OnClick = ButtonENGClick
  end
end
