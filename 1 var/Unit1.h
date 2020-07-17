//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TPageControl *Menu;
	TTabSheet *TabSheet1;
	TButton *Ñòåê;
	TButton *Äåê;
	TTabSheet *TabSheet2;
	TButton *Push;
	TEdit *Edit1;
	TButton *Pop;
	TTabSheet *TabSheet3;
	TEdit *Edit2;
	TButton *PushLeft;
	TButton *PopLeft;
	TButton *PushRight;
	TButton *PopRight;
	TTabSheet *TabSheet4;
	TButton *Button1;
	TButton *Button2;
	TButton *Button3;
	TEdit *Edit3;
	TLabel *Label1;
	void __fastcall PushClick(TObject *Sender);
	void __fastcall PopClick(TObject *Sender);
	void __fastcall ÑòåêClick(TObject *Sender);
	void __fastcall ÄåêClick(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
