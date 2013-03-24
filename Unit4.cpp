//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm4::FormShow(TObject *Sender)
{
  Panel1->Caption=Form1->IBQuery1->Fields->FieldByName("manager")->AsString;
  Panel2->Caption=Form1->IBQuery1->Fields->FieldByName("firma")->AsString;
  Panel3->Caption=Form1->IBQuery1->Fields->FieldByName("nakl")->AsString;
  Panel5->Caption=Form1->IBQuery1->Fields->FieldByName("summ")->AsString;
  Panel6->Caption=Form1->IBQuery1->Fields->FieldByName("srok")->AsString;
  Panel4->Caption=Form1->IBQuery1->Fields->FieldByName("DATASEND")->AsString;
  Panel7->Caption=Form1->IBQuery1->Fields->FieldByName("DATAPAY")->AsString;
}
//---------------------------------------------------------------------------
