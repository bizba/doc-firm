//---------------------------------------------------------------------------

#include <vcl.h>
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include <inifiles.hpp>



#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

TStringList *SystList = new TStringList;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
  AnsiString str;



}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormShow(TObject *Sender)
{
   // подключаем базу

   TIniFile *ini;
   ini = new TIniFile(".\\biz.ini");

    s=0;


   IBDatabase1->DatabaseName=ini->ReadString("server","name","\\combibone\d:\Project1\Progz\FINAL\KNPP.GDB");
   manag=ini->ReadString("server","user","SYSDBA");
   IBDatabase1->Params->Add("User_Name="+ini->ReadString("server","user","SYSDBA"));


  try
   {
     IBDatabase1->Open();

     Form1->IBQuery1->Open();
     Form1->IBQuery1->First();

    while(!IBQuery1->Eof)
      {
        s=s+IBQuery1->FieldByName("summ")->AsFloat;
        IBQuery1->Next();

      };

    StatusBar1->Panels->Items[1]->Text=FloatToStr(s);
    Form1->IBQuery1->First();

 }
  catch(...)
   {
        // если пароль не верный то выход
     ShowMessage("Не верный пароль или логин ");
     Application->Terminate();
   }


}
//---------------------------------------------------------------------------

void __fastcall TForm1::N15Click(TObject *Sender)
{
  //typ="ALL";
  Screen->Cursor = crSQLWait;

  from="";
  //StatusBar1->Panels->Items[2]->Text=" Все заказы ";

  IBQuery1->SQL->Clear();
  IBQuery1->SQL->Add(select1+select2+"from ZAKAZ"+from);
  IBQuery1->Open();
  IBQuery1->Last();
  IBQuery1->First();
  //ShowStolbec();
  Screen->Cursor = crArrow;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
   /* DateTimePicker1->Date=DateToStr(Date());
    DateTimePicker2->Date=DateToStr(Date());
     */


    from="";

    select1="select num, manager, firma, nakl, datasend, datapay, summ, srok ";
     select2="";
     IBQuery1->SQL->Clear();
     IBQuery1->SQL->Add(select1+select2+"from MAIN"+from);

    StatusBar1->Panels->Items[0]->Text="Общая сумма";

   //  flag=1;
  //   Screen->Cursor = crArrow;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
   if(IBDatabase1->Connected==true)
    IBDatabase1->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N24Click(TObject *Sender)
{
  IBDatabase1->Close();
  Form1->Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N34Click(TObject *Sender)
{
  TForm2 * fmForm2 = new TForm2(0);
  try
   {
     fmForm2->ShowModal();
   }
   __finally
    {


       

      	delete fmForm2;

    }



  // Form2->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N18Click(TObject *Sender)
{
  met=0;
  Form3->Show();


}
//---------------------------------------------------------------------------


void __fastcall TForm1::N25Click(TObject *Sender)
{


  // IBDatabaseInfo1->UserNames->
  if (manag == DBGrid1->DataSource->DataSet->Fields->FieldByName("manager")->AsString | manag =="KUPTSOV")
  {
        Form3->IBSQL1->SQL->Clear();
        Form3->IBSQL1->SQL->Add("delete from MAIN where MAIN.NUM='"+DBGrid1->DataSource->DataSet->Fields->FieldByName("num")->AsString+"'");
        Form3->IBSQL1->ExecQuery();

        Form1->IBQuery1->Close();
        IBQuery1->Open();
        IBQuery1->First();

        s=0;
        
         while(!IBQuery1->Eof)
           {
              s=s+IBQuery1->FieldByName("summ")->AsFloat;
              IBQuery1->Next();

            };

         StatusBar1->Panels->Items[1]->Text=FloatToStr(s);
         Form1->IBQuery1->First();
        

  }

  else
   {
     ShowMessage("!! У вас нет прав на удаление чужих заявок !!");
   }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N2Click(TObject *Sender)
{
  //модальная форма

 /* TForm4 * fmAboutBox = new TForm4(0);
  try
   {
     fmAboutBox->ShowModal();
   }
   __finally
    {
	delete fmAboutBox;
    }

    */
        AnsiString str;
  str="update ZAKAZ set met=0 where num="+DBGrid1->DataSource->DataSet->Fields->Fields[0]->AsString;+";";

  Form3->IBSQL1->SQL->Clear();
  Form3->IBSQL1->SQL->Add(str);
  Form3->IBSQL1->ExecQuery();

  IBQuery1->Close();
  IBQuery1->Open();
  IBQuery1->Last();
  IBQuery1->First();


}
//---------------------------------------------------------------------------



void __fastcall TForm1::N26Click(TObject *Sender)
{

  if (manag == DBGrid1->DataSource->DataSet->Fields->FieldByName("manager")->AsString | manag == "KUPTSOV")
  {

    met=1;
    Form3->Show();
   }
  else

     ShowMessage("!! У вас нет прав на изменение чужих заявок !!");


}
//---------------------------------------------------------------------------

/*

  AnsiString str;

  if (IBQuery1->FieldByName("MET")->Value==0)

      {
  str="update ZAKAZ set met=1 where num="+num+";";

  Form3->IBSQL1->SQL->Clear();
  Form3->BSQL1->SQL->Add(str);
  Form3->IBSQL1->ExecQuery();
}
//---------------------------------------------------------------------------
 */
void __fastcall TForm1::gg1Click(TObject *Sender)
{
       AnsiString str;
  str="update ZAKAZ set met=1 where num="+DBGrid1->DataSource->DataSet->Fields->Fields[0]->AsString;+";";

  Form3->IBSQL1->SQL->Clear();
  Form3->IBSQL1->SQL->Add(str);
  Form3->IBSQL1->ExecQuery();

  IBQuery1->Close();
  IBQuery1->Open();
  IBQuery1->Last();
  IBQuery1->First();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::chjcbnm1Click(TObject *Sender)
{
  AnsiString str;
  str="update ZAKAZ set met=2 where num="+DBGrid1->DataSource->DataSet->Fields->Fields[0]->AsString;+";";

  Form3->IBSQL1->SQL->Clear();
  Form3->IBSQL1->SQL->Add(str);
  Form3->IBSQL1->ExecQuery();

  IBQuery1->Close();
  IBQuery1->Open();
  IBQuery1->Last();
  IBQuery1->First();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{

  Form1->IBQuery1->Open();
//  Form5->QuickRep1->Preview();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
  Form2->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N5Click(TObject *Sender)
{
      Form2->Show();

}
//---------------------------------------------------------------------------


void __fastcall TForm1::N4Click(TObject *Sender)
{
     IBQuery1->Close();
     from="";

     // select1="select num, manager, firma, nakl, datasend, datapay, summ, srok ";
     // select2="";

     IBQuery1->SQL->Clear();
     IBQuery1->SQL->Add(select1+select2+"from MAIN"+from);
     IBQuery1->Open();

     Form1->IBQuery1->First();
     Form1->s=0;

     while(!Form1->IBQuery1->Eof)
      {
        Form1->s=Form1->s+Form1->IBQuery1->FieldByName("summ")->AsFloat;
        Form1->IBQuery1->Next();

      };

     Form1->StatusBar1->Panels->Items[1]->Text=FloatToStr(s);
     Form1->IBQuery1->First();
     

}
//---------------------------------------------------------------------------


void __fastcall TForm1::DBGrid1DblClick(TObject *Sender)
{
   //модальная форма

  TForm4 * fmAboutBox = new TForm4(0);
  try
   {
     fmAboutBox->ShowModal();
   }
   __finally
    {
	delete fmAboutBox;
    }

    
}
//---------------------------------------------------------------------------

