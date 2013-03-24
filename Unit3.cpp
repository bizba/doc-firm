//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;
//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button15Click(TObject *Sender)
{
 // AnsiString AiCoeff;

  AnsiString str,str1;
  int i;


  str1=Edit3->Text;
  for(i=1;i<str1.Length();i++)
   if (str1[i]==',')
       str1[i]='.';


  if (Form1->IBQuery1->Active==true) Form1->IBQuery1->Close();

      if (Form1->met==0)

         str="insert into MAIN (manager, firma, nakl, datasend, datapay, summ, srok) values ('"+Form1->manag+"', '"+Edit1->Text+"', '"+Edit2->Text+"', '"+DATASEND->Date.DateString()+"', '"+DATAPAY->Date.DateString()+"', '"+str1+"', '"+Edit4->Text+"');";

       else

          str="update MAIN set firma='"+Edit1->Text+"', nakl='"+Edit2->Text+"', datasend='"+DATASEND->Date.DateString()+"', datapay='"+DATAPAY->Date.DateString()+"', summ='"+str1+"', srok='"+Edit4->Text+"' where num="+num+";";

         IBSQL1->SQL->Clear();
         IBSQL1->SQL->Add(str);
         IBSQL1->ExecQuery();

   //      Screen->Cursor = crArrow;



         Form1->IBQuery1->Open();
         Form1->IBQuery1->First();
         Form1->s=0;

    while(!Form1->IBQuery1->Eof)
      {
        Form1->s=Form1->s+Form1->IBQuery1->FieldByName("summ")->AsFloat;
        Form1->IBQuery1->Next();

      };

    Form1->StatusBar1->Panels->Items[1]->Text=FloatToStr(Form1->s);
    Form1->IBQuery1->First();


         //Form1->IBQuery1->Last();
         //Form1->IBQuery1->First();

         Form3->Close();




   //   if(!IBQuery1->Eof & ZPID->Text!=IBQuery1->FieldByName("Z_PID")->Text)




}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button2Click(TObject *Sender)
{

//  Form1->IBQuery1->Open();
//  Form1->IBQuery1->Last();
//  Form1->IBQuery1->First();
  Form3->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm3::FormClose(TObject *Sender, TCloseAction &Action)
{

//  Form1->IBQuery1->Open();
//  Form1->IBQuery1->Last();
//  Form1->IBQuery1->First();

}
//---------------------------------------------------------------------------

void __fastcall TForm3::FormShow(TObject *Sender)
{
  AnsiString str;




  if(Form1->met==1)
  {
    num=Form1->DBGrid1->DataSource->DataSet->Fields->FieldByName("num")->AsString;
    str="select * from MAIN where NUM='"+num+"'";
    IBQuery1->SQL->Clear();
    IBQuery1->SQL->Add(str);
    IBQuery1->Open();

    Edit1->Text=IBQuery1->FieldByName("firma")->Text;
    Edit2->Text=IBQuery1->FieldByName("nakl")->Text;
    DATASEND->Date=IBQuery1->FieldByName("datasend")->Text;
    Edit3->Text=IBQuery1->FieldByName("summ")->Text;
    Edit4->Text=IBQuery1->FieldByName("srok")->Text;
    DATAPAY->Date=IBQuery1->FieldByName("DATAPAY")->Text;

    IBQuery1->Close();
  }


}

void __fastcall TForm3::FormCreate(TObject *Sender)
{
  DATASEND->Date=DateToStr(Date());
  DATAPAY->Date=DateToStr(Date());
}
//---------------------------------------------------------------------------

