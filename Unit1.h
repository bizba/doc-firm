//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <DB.hpp>
#include <DBGrids.hpp>
#include <DBTables.hpp>
#include <Grids.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include <IBCustomDataSet.hpp>
#include <IBDatabase.hpp>
#include <IBDatabaseInfo.hpp>
#include <IBQuery.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TIBDatabase *IBDatabase1;
        TDBGrid *DBGrid1;
        TPanel *Panel1;
        TIBQuery *IBQuery1;
        TDataSource *DataSource1;
        TIBTransaction *IBTransaction1;
        TIBDatabaseInfo *IBDatabaseInfo1;
        TMainMenu *MainMenu1;
        TMenuItem *N17;
        TMenuItem *N18;
        TMenuItem *N19;
        TMenuItem *N23;
        TMenuItem *N24;
        TStatusBar *StatusBar1;
        TPopupMenu *PopupMenu1;
        TMenuItem *N25;
        TMenuItem *N26;
        TButton *Button1;
        TIBQuery *ExcelQuery;
        TMenuItem *N3;
        TMenuItem *N4;
        TMenuItem *N5;
        TMenuItem *N1;
        TIntegerField *IBQuery1NUM;
        TIBStringField *IBQuery1MANAGER;
        TIBStringField *IBQuery1FIRMA;
        TIBStringField *IBQuery1NAKL;
        TDateTimeField *IBQuery1DATASEND;
        TDateTimeField *IBQuery1DATAPAY;
        TFloatField *IBQuery1SUMM;
        TIntegerField *IBQuery1SROK;
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall FormShow(TObject *Sender);
        void __fastcall N15Click(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall N24Click(TObject *Sender);
        void __fastcall N34Click(TObject *Sender);
        void __fastcall N18Click(TObject *Sender);

        void __fastcall N25Click(TObject *Sender);
        void __fastcall N2Click(TObject *Sender);
        void __fastcall N26Click(TObject *Sender);
        void __fastcall gg1Click(TObject *Sender);
        void __fastcall chjcbnm1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall Button3Click(TObject *Sender);
        void __fastcall N5Click(TObject *Sender);
        void __fastcall N4Click(TObject *Sender);
        void __fastcall DBGrid1DblClick(TObject *Sender);
      
      


private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);

        AnsiString from , select1 , select2;
        AnsiString typ, manag;
        int met;
        double s;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
