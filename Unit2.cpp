//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button2Click(TObject *Sender)
{
  Form2->Close();        
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button1Click(TObject *Sender)
{
  Form1->from="where manager='"+Edit1->Text+"'";
  Form1->IBQuery1->Close();
  Form1->IBQuery1->SQL->Clear();
  Form1->IBQuery1->SQL->Add(Form1->select1+Form1->select2+"from MAIN "+Form1->from);
  Form1->IBQuery1->Open();

  Form1->IBQuery1->First();
  Form1->s=0;

    while(!Form1->IBQuery1->Eof)
      {
        Form1->s=Form1->s+Form1->IBQuery1->FieldByName("summ")->AsInteger;
        Form1->IBQuery1->Next();

      };

  Form1->StatusBar1->Panels->Items[1]->Text=Form1->s;
  Form1->IBQuery1->First();

  Form2->Close();
}
//---------------------------------------------------------------------------
 