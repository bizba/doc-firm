//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// IDE-managed Components
        TGroupBox *GroupBox1;
        TPanel *Panel1;
        TGroupBox *GroupBox2;
        TPanel *Panel2;
        TGroupBox *GroupBox3;
        TPanel *Panel3;
        TGroupBox *GroupBox4;
        TPanel *Panel4;
        TGroupBox *GroupBox5;
        TGroupBox *GroupBox6;
        TPanel *Panel5;
        TGroupBox *GroupBox7;
        TPanel *Panel6;
        TPanel *Panel7;
        void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm4(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
