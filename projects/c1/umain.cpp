//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "umain.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TfrmMain *frmMain;
//---------------------------------------------------------------------------
__fastcall TfrmMain::TfrmMain(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TfrmMain::btnOkClick(TObject *Sender)
{
	String name = edtName->Text;
	auto msg = "Hello " + name;
	mmOutput->Lines->Add(msg);
}
//---------------------------------------------------------------------------
