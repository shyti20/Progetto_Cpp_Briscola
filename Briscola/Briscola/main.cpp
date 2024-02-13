#include "MyForm.h"
#include "napoletano.h"

using namespace System;
using namespace System::Windows::Forms;

void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Briscola::MyForm form;
	Application::Run(% form);
	Napoletano prova;
	prova.inizializza();
}