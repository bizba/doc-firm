object Form3: TForm3
  Left = 408
  Top = 210
  BorderStyle = bsDialog
  ClientHeight = 283
  ClientWidth = 449
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  OnClose = FormClose
  OnCreate = FormCreate
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Label7: TLabel
    Left = 48
    Top = 200
    Width = 32
    Height = 13
    Caption = 'Label7'
  end
  object Panel2: TPanel
    Left = 0
    Top = 0
    Width = 449
    Height = 283
    Align = alClient
    TabOrder = 0
    object Label1: TLabel
      Left = 8
      Top = 24
      Width = 115
      Height = 13
      Caption = #1054#1056#1043#1040#1053#1048#1047#1040#1062#1048#1071'...........'
    end
    object Label2: TLabel
      Left = 8
      Top = 56
      Width = 117
      Height = 13
      Caption = #8470' '#1053#1040#1050#1051#1040#1044#1053#1054#1049'...........'
    end
    object Label3: TLabel
      Left = 8
      Top = 88
      Width = 115
      Height = 13
      Caption = #1044#1040#1058#1040' '#1054#1058#1043#1056#1059#1047#1050#1048'........'
    end
    object Label4: TLabel
      Left = 8
      Top = 120
      Width = 118
      Height = 13
      Caption = #1057#1059#1052#1052#1040'..........................'
    end
    object Label5: TLabel
      Left = 8
      Top = 152
      Width = 131
      Height = 13
      Caption = #1057#1056#1054#1050' '#1054#1058#1057#1056#1054#1063#1050#1048'.............'
    end
    object Label6: TLabel
      Left = 8
      Top = 184
      Width = 117
      Height = 13
      Caption = #1044#1040#1058#1040' '#1054#1055#1051#1040#1058#1067'............'
    end
    object Panel3: TPanel
      Left = 1
      Top = 239
      Width = 447
      Height = 43
      Align = alBottom
      TabOrder = 0
      object Button2: TButton
        Left = 232
        Top = 8
        Width = 75
        Height = 25
        Caption = #1054#1090#1084#1077#1085#1072
        TabOrder = 0
        OnClick = Button2Click
      end
      object Button15: TButton
        Left = 312
        Top = 8
        Width = 75
        Height = 25
        Caption = #1043#1086#1090#1086#1074#1086
        TabOrder = 1
        OnClick = Button15Click
      end
    end
    object Edit1: TEdit
      Left = 120
      Top = 16
      Width = 265
      Height = 21
      TabOrder = 1
    end
    object Edit2: TEdit
      Left = 120
      Top = 48
      Width = 121
      Height = 21
      TabOrder = 2
    end
    object DATASEND: TDateTimePicker
      Left = 120
      Top = 80
      Width = 186
      Height = 21
      CalAlignment = dtaLeft
      Date = 38595.6142379167
      Time = 38595.6142379167
      DateFormat = dfShort
      DateMode = dmComboBox
      Kind = dtkDate
      ParseInput = False
      TabOrder = 3
    end
    object Edit3: TEdit
      Left = 120
      Top = 112
      Width = 121
      Height = 21
      TabOrder = 4
    end
    object Edit4: TEdit
      Left = 120
      Top = 144
      Width = 121
      Height = 21
      TabOrder = 5
    end
    object DATAPAY: TDateTimePicker
      Left = 120
      Top = 176
      Width = 186
      Height = 21
      CalAlignment = dtaLeft
      Date = 38595.6151916898
      Time = 38595.6151916898
      DateFormat = dfShort
      DateMode = dmComboBox
      Kind = dtkDate
      ParseInput = False
      TabOrder = 6
    end
  end
  object IBSQL1: TIBSQL
    Database = Form1.IBDatabase1
    ParamCheck = True
    Transaction = Form1.IBTransaction1
    Left = 72
    Top = 248
  end
  object IBQuery1: TIBQuery
    Database = Form1.IBDatabase1
    Transaction = Form1.IBTransaction1
    BufferChunks = 1000
    CachedUpdates = False
    Left = 40
    Top = 248
  end
end
