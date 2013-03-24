object Form1: TForm1
  Left = 484
  Top = 197
  Width = 1061
  Height = 455
  Caption = #1059#1095#1077#1090' '#1076#1086#1083#1078#1085#1080#1082#1086#1074
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  Position = poDesktopCenter
  Scaled = False
  OnClose = FormClose
  OnCreate = FormCreate
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object DBGrid1: TDBGrid
    Left = 0
    Top = 49
    Width = 1053
    Height = 336
    Align = alClient
    DataSource = DataSource1
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    PopupMenu = PopupMenu1
    ReadOnly = True
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
    OnDblClick = DBGrid1DblClick
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 1053
    Height = 49
    Align = alTop
    TabOrder = 1
    object Button1: TButton
      Left = 8
      Top = 8
      Width = 105
      Height = 33
      Caption = #1044#1086#1073#1072#1074#1080#1090#1100' '#1079#1072#1087#1080#1089#1100
      TabOrder = 0
      OnClick = N18Click
    end
  end
  object StatusBar1: TStatusBar
    Left = 0
    Top = 385
    Width = 1053
    Height = 24
    Panels = <
      item
        Width = 100
      end
      item
        Alignment = taCenter
        Width = 100
      end
      item
        Alignment = taCenter
        Width = 50
      end>
    SimplePanel = False
  end
  object IBDatabase1: TIBDatabase
    DatabaseName = 'D:\distrib\docfirm\DOC2.GDB'
    DefaultTransaction = IBTransaction1
    IdleTimer = 0
    SQLDialect = 1
    TraceFlags = []
    Left = 424
    Top = 208
  end
  object IBQuery1: TIBQuery
    Database = IBDatabase1
    Transaction = IBTransaction1
    BufferChunks = 1000
    CachedUpdates = True
    SQL.Strings = (
      
        'select  num, manager,  firma, nakl, datasend, datapay, summ, sro' +
        'k  from main')
    Left = 424
    Top = 240
    object IBQuery1NUM: TIntegerField
      DisplayLabel = #8470
      DisplayWidth = 6
      FieldName = 'NUM'
      Origin = 'MAIN.NUM'
      Required = True
    end
    object IBQuery1MANAGER: TIBStringField
      DisplayLabel = #1052#1077#1085#1077#1076#1078#1077#1088
      FieldName = 'MANAGER'
      Origin = 'MAIN.MANAGER'
      Size = 24
    end
    object IBQuery1FIRMA: TIBStringField
      DisplayLabel = #1060#1080#1088#1084#1072
      FieldName = 'FIRMA'
      Origin = 'MAIN.FIRMA'
      Size = 50
    end
    object IBQuery1NAKL: TIBStringField
      DisplayLabel = #1053#1072#1082#1083#1072#1076#1085#1072#1103
      DisplayWidth = 10
      FieldName = 'NAKL'
      Origin = 'MAIN.NAKL'
      Size = 50
    end
    object IBQuery1DATASEND: TDateTimeField
      DisplayLabel = #1044#1072#1090#1072' '#1086#1090#1075#1088#1091#1079#1082#1080
      FieldName = 'DATASEND'
      Origin = 'MAIN.DATASEND'
    end
    object IBQuery1DATAPAY: TDateTimeField
      DisplayLabel = #1044#1072#1090#1072' '#1086#1087#1083#1072#1090#1099
      FieldName = 'DATAPAY'
      Origin = 'MAIN.DATAPAY'
    end
    object IBQuery1SUMM: TFloatField
      DisplayLabel = #1057#1091#1084#1084#1072
      FieldName = 'SUMM'
      Origin = 'MAIN.SUMM'
    end
    object IBQuery1SROK: TIntegerField
      DisplayLabel = #1057#1088#1086#1082
      FieldName = 'SROK'
      Origin = 'MAIN.SROK'
    end
  end
  object DataSource1: TDataSource
    DataSet = IBQuery1
    Left = 464
    Top = 208
  end
  object IBTransaction1: TIBTransaction
    Active = False
    DefaultDatabase = IBDatabase1
    Params.Strings = (
      'read_committed'
      'rec_version'
      'nowait')
    AutoStopAction = saNone
    Left = 464
    Top = 240
  end
  object IBDatabaseInfo1: TIBDatabaseInfo
    Database = IBDatabase1
    Left = 392
    Top = 208
  end
  object MainMenu1: TMainMenu
    Left = 208
    Top = 176
    object N17: TMenuItem
      Caption = #1057#1077#1088#1074#1080#1089
      object N18: TMenuItem
        Caption = #1053#1086#1074#1072#1103' '#1079#1072#1087#1080#1089#1100
        ShortCut = 16462
        OnClick = N18Click
      end
      object N19: TMenuItem
        Caption = #1048#1079#1084#1077#1085#1080#1090#1100' '#1074#1099#1073#1088#1072#1085#1085#1091#1102' '#1079#1072#1087#1080#1089#1100
        OnClick = N26Click
      end
    end
    object N3: TMenuItem
      Caption = #1054#1090#1073#1086#1088
      object N5: TMenuItem
        Caption = #1054#1090#1073#1086#1088
        ShortCut = 16454
        OnClick = N5Click
      end
      object N4: TMenuItem
        Caption = #1057#1073#1088#1086#1089#1080#1090#1100' '#1086#1090#1073#1086#1088
        OnClick = N4Click
      end
    end
    object N23: TMenuItem
      Caption = #1042#1099#1093#1086#1076
      object N24: TMenuItem
        Caption = #1042#1099#1093#1086#1076
        ShortCut = 32883
        OnClick = N24Click
      end
    end
  end
  object PopupMenu1: TPopupMenu
    Left = 208
    Top = 208
    object N25: TMenuItem
      Caption = #1059#1076#1072#1083#1080#1090#1100' '#1079#1072#1087#1080#1089#1100
      OnClick = N25Click
    end
    object N26: TMenuItem
      Caption = #1048#1079#1084#1077#1085#1080#1090#1100' '#1079#1072#1087#1080#1089#1100
      OnClick = N26Click
    end
    object N1: TMenuItem
      Caption = #1044#1086#1073#1072#1074#1080#1090#1100' '#1079#1072#1087#1080#1089#1100
      OnClick = N18Click
    end
  end
  object ExcelQuery: TIBQuery
    Database = IBDatabase1
    Transaction = IBTransaction1
    BufferChunks = 1000
    CachedUpdates = False
    Left = 392
    Top = 240
  end
end
