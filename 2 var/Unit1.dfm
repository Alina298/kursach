object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 436
  ClientWidth = 636
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnDestroy = FormDestroy
  PixelsPerInch = 96
  TextHeight = 13
  object PageControl1: TPageControl
    Left = 0
    Top = 0
    Width = 628
    Height = 433
    ActivePage = TabSheet4
    TabOrder = 0
    object TabSheet1: TTabSheet
      Caption = 'TabSheet1'
      ExplicitWidth = 625
      object Button1: TButton
        Left = 88
        Top = 48
        Width = 75
        Height = 25
        Caption = #1057#1090#1077#1082
        TabOrder = 0
        OnClick = Button1Click
      end
      object Button2: TButton
        Left = 88
        Top = 104
        Width = 75
        Height = 25
        Caption = #1044#1077#1082
        TabOrder = 1
        OnClick = Button2Click
      end
      object Button5: TButton
        Left = 88
        Top = 168
        Width = 75
        Height = 25
        Caption = #1054#1095#1077#1088#1077#1076#1100
        TabOrder = 2
        OnClick = Button5Click
      end
    end
    object TabSheet2: TTabSheet
      Caption = 'TabSheet2'
      ImageIndex = 1
      ExplicitWidth = 625
      object Label1: TLabel
        Left = 208
        Top = 59
        Width = 52
        Height = 13
        Caption = #1048#1079#1074#1083#1077#1082#1083#1080':'
      end
      object Push: TButton
        Left = 15
        Top = 3
        Width = 75
        Height = 30
        Caption = 'Push'
        TabOrder = 0
        OnClick = PushClick
      end
      object Pop: TButton
        Left = 110
        Top = 3
        Width = 75
        Height = 30
        Caption = 'Pop'
        TabOrder = 1
        OnClick = PopClick
      end
      object Edit1: TEdit
        Left = 40
        Top = 56
        Width = 121
        Height = 21
        TabOrder = 2
        Text = 'Edit1'
      end
    end
    object TabSheet3: TTabSheet
      Caption = 'TabSheet3'
      ImageIndex = 2
      ExplicitWidth = 625
      object Label2: TLabel
        Left = 280
        Top = 64
        Width = 52
        Height = 13
        Caption = #1048#1079#1074#1083#1077#1082#1083#1080':'
      end
      object Button3: TButton
        Left = 16
        Top = 16
        Width = 75
        Height = 25
        Caption = 'PushLeft'
        TabOrder = 0
      end
      object Button4: TButton
        Left = 97
        Top = 16
        Width = 75
        Height = 25
        Caption = 'PopLeft'
        TabOrder = 1
      end
      object Button6: TButton
        Left = 232
        Top = 16
        Width = 75
        Height = 25
        Caption = 'PushRight'
        TabOrder = 2
      end
      object Button7: TButton
        Left = 313
        Top = 16
        Width = 75
        Height = 25
        Caption = 'PopRight'
        TabOrder = 3
      end
      object TEdit
        Left = 88
        Top = 64
        Width = 121
        Height = 21
        TabOrder = 4
      end
    end
    object TabSheet4: TTabSheet
      Caption = 'TabSheet4'
      ImageIndex = 3
      object PushTail: TButton
        Left = 32
        Top = 16
        Width = 75
        Height = 25
        Caption = 'PushTail'
        TabOrder = 0
      end
      object PopHead: TButton
        Left = 136
        Top = 16
        Width = 75
        Height = 25
        Caption = 'PopHead'
        TabOrder = 1
      end
      object Edit2: TEdit
        Left = 64
        Top = 56
        Width = 121
        Height = 21
        TabOrder = 2
        Text = 'Edit2'
      end
    end
  end
end
