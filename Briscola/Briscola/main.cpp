#include "MyForm.h"
#include "napoletano.h"
#include "realplayer.h"
#include "aiplayer.h"

using namespace System;
using namespace System::Windows::Forms;

void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Briscola::MyForm form;
	Application::Run(% form);
	Napoletano mazzo;
	RealPlayer p1;
	
	mazzo.inizializza();
}