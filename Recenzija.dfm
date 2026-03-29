object FormRecenzija: TFormRecenzija
  Left = 0
  Top = 0
  Caption = 'FormRecenzija'
  ClientHeight = 921
  ClientWidth = 1339
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object GroupBoxRecenzija: TGroupBox
    Left = 128
    Top = 96
    Width = 1041
    Height = 689
    TabOrder = 0
    object Label1: TLabel
      Left = 384
      Top = 273
      Width = 88
      Height = 15
      Caption = 'Datum recenzije:'
    end
    object Label2: TLabel
      Left = 435
      Top = 307
      Width = 37
      Height = 15
      Caption = 'FilmID:'
    end
    object Label3: TLabel
      Left = 416
      Top = 347
      Width = 56
      Height = 15
      Caption = 'KorisnikID:'
    end
    object ButtonSpremi: TButton
      Left = 272
      Top = 528
      Width = 225
      Height = 94
      Caption = 'Spremi'
      TabOrder = 0
      OnClick = ButtonSpremiClick
    end
    object ButtonOdustani: TButton
      Left = 528
      Top = 528
      Width = 225
      Height = 94
      Caption = 'Odustani'
      TabOrder = 1
      OnClick = ButtonOdustaniClick
    end
    object memTekst: TMemo
      Left = 272
      Top = 40
      Width = 481
      Height = 97
      Lines.Strings = (
        'memTekst')
      TabOrder = 2
    end
    object spnOcjena: TSpinButton
      Left = 288
      Top = 184
      Width = 473
      Height = 25
      DownGlyph.Data = {
        0E010000424D0E01000000000000360000002800000009000000060000000100
        200000000000D800000000000000000000000000000000000000008080000080
        8000008080000080800000808000008080000080800000808000008080000080
        8000008080000080800000808000000000000080800000808000008080000080
        8000008080000080800000808000000000000000000000000000008080000080
        8000008080000080800000808000000000000000000000000000000000000000
        0000008080000080800000808000000000000000000000000000000000000000
        0000000000000000000000808000008080000080800000808000008080000080
        800000808000008080000080800000808000}
      TabOrder = 3
      UpGlyph.Data = {
        0E010000424D0E01000000000000360000002800000009000000060000000100
        200000000000D800000000000000000000000000000000000000008080000080
        8000008080000080800000808000008080000080800000808000008080000080
        8000000000000000000000000000000000000000000000000000000000000080
        8000008080000080800000000000000000000000000000000000000000000080
        8000008080000080800000808000008080000000000000000000000000000080
        8000008080000080800000808000008080000080800000808000000000000080
        8000008080000080800000808000008080000080800000808000008080000080
        800000808000008080000080800000808000}
    end
    object dtpDatum: TDateTimePicker
      Left = 495
      Top = 265
      Width = 186
      Height = 23
      Date = 46109.000000000000000000
      Time = 0.531559131944959500
      TabOrder = 4
    end
    object edtFilmID: TEdit
      Left = 495
      Top = 304
      Width = 186
      Height = 23
      TabOrder = 5
    end
    object edtKorisnikID: TEdit
      Left = 495
      Top = 344
      Width = 186
      Height = 23
      TabOrder = 6
    end
  end
end
