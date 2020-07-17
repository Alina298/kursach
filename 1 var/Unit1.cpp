//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;


//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}


//---------------------------------------------------------------------------
struct Stack {
int info;
TEdit *edit;
Stack *next;
};
struct Stack * cur = NULL;
struct Stack * top = NULL;

int left_pos = 30;

//---------------------------------------------------------------------------
void __fastcall TForm1::PushClick(TObject *Sender)
{
top = new Stack();
top->edit = new TEdit(Form1);
top->edit->Parent = Menu->ActivePage;
top->edit->Text=Edit1->Text;
top->edit->Width=30;
top->edit->Height=30;
top->edit->Font->Size=10;
top->edit->Top = 100;
top->edit->Left = left_pos;
top->next = cur;

cur = top;
left_pos += 40;

}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------
void __fastcall TForm1::PopClick(TObject *Sender)
{

if (top != NULL){
struct Stack * data = top->next;
top->edit->Free() ;
top = data;
cur = top;
left_pos -= 40;
Menu->Refresh();
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ÑòåêClick(TObject *Sender)
{

 Menu->ActivePageIndex=1;


}
//---------------------------------------------------------------------------

void __fastcall TForm1::ÄåêClick(TObject *Sender)
{
  Menu->ActivePageIndex=2;
}
//---------------------------------------------------------------------------



void __fastcall TForm1::Button1Click(TObject *Sender)
{
   Menu->ActivePageIndex=3;
}
//---------------------------------------------------------------------------







