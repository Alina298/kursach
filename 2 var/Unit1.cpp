//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Stack_Lst.h"
#include "Queue_Lst.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
Stack *stack;
TEdit *value[20];
int i;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormDestroy(TObject *Sender)
{
  delete stack;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
 stack=new Stack();
 Label1->Visible=False;
 PageControl1->ActivePageIndex=1;
 i=0;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::PushClick(TObject *Sender)
{
	Label1->Visible=False;
 if (i<0) i=0;
 if (i<15)
 {
  stack->push(StrToInt(Edit1->Text));
  value[i]=new TEdit(Form1);
  value[i]->Parent=PageControl1->ActivePage;
  value[i]->Text=Edit1->Text;
  value[i]->Font->Size=12;
  value[i]->Width=30;
  value[i]->Height=30;
  value[i]->Top=100;
   value[i]->Left=30;
  for(int j=i-1;j>=0;j--)
  {
   value[j]->Left+=40;
  }
  ++i;
 }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::PopClick(TObject *Sender)
{
   Label1->Visible=True;
 if (i>0)
 {
  //ShowMessage(IntToStr(stack->pop()));
  Label1->Caption="Извлекли:"+IntToStr(stack->pop());
  Label1->Refresh();
  value[i-1]->Free();
  PageControl1->Refresh();
  for(int j=i-2;j>=0;j--)
   value[j]->Left-=40;
  --i;
 }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
   PageControl1->ActivePageIndex=2;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{
  PageControl1->ActivePageIndex=3;
}
//---------------------------------------------------------------------------
