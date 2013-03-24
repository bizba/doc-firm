//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include <IBSQL.hpp>
#include <DB.hpp>
#include <IBCustomDataSet.hpp>
#include <IBQuery.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
        TIBSQL *IBSQL1;
        TIBQuery *IBQuery1;
        TLabel *Label7;
        TPanel *Panel2;
        TPanel *Panel3;
        TButton *Button2;
        TButton *Button15;
        TLabel *Label1;
        TEdit *Edit1;
        TLabel *Label2;
        TEdit *Edit2;
        TLabel *Label3;
        TDateTimePicker *DATASEND;
        TLabel *Label4;
        TEdit *Edit3;
        TLabel *Label5;
        TEdit *Edit4;
        TLabel *Label6;
        TDateTimePicker *DATAPAY;
        void __fastcall Button15Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
        void __fastcall FormShow(TObject *Sender);
        void __fastcall FormCreate(TObject *Sender);

private:
         AnsiString num;
                // User declarations
public:		// User declarations
        __fastcall TForm3(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
