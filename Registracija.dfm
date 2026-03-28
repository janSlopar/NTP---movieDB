object FormRegistracija: TFormRegistracija
  Left = 0
  Top = 0
  Caption = 'Registracija'
  ClientHeight = 943
  ClientWidth = 1496
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object GroupBox1: TGroupBox
    Left = 440
    Top = 248
    Width = 537
    Height = 345
    Caption = 'GroupBox1'
    TabOrder = 0
    object Label1: TLabel
      Left = 32
      Top = 73
      Width = 23
      Height = 15
      Caption = 'Ime:'
    end
    object Label2: TLabel
      Left = 32
      Top = 104
      Width = 45
      Height = 15
      Caption = 'Prezime:'
    end
    object Label3: TLabel
      Left = 32
      Top = 144
      Width = 81
      Height = 15
      Caption = 'Korisni'#269'ko ime:'
    end
    object Label4: TLabel
      Left = 32
      Top = 184
      Width = 37
      Height = 15
      Caption = 'e-mail:'
    end
    object Label5: TLabel
      Left = 32
      Top = 224
      Width = 40
      Height = 15
      Caption = 'lozinka:'
    end
    object EditIme: TEdit
      Left = 192
      Top = 70
      Width = 121
      Height = 23
      TabOrder = 0
    end
    object Edit1: TEdit
      Left = 192
      Top = 104
      Width = 121
      Height = 23
      TabOrder = 1
    end
    object EditKorIme: TEdit
      Left = 192
      Top = 144
      Width = 121
      Height = 23
      TabOrder = 2
    end
    object EditEmail: TEdit
      Left = 192
      Top = 184
      Width = 121
      Height = 23
      TabOrder = 3
    end
    object EditLozinka: TEdit
      Left = 192
      Top = 224
      Width = 121
      Height = 23
      TabOrder = 4
    end
    object ButtonRegistriraj: TButton
      Left = 32
      Top = 288
      Width = 465
      Height = 25
      Caption = 'Registriraj se!'
      TabOrder = 5
      OnClick = ButtonRegistrirajClick
    end
  end
end
