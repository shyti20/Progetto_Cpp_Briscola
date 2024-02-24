#include "MyForm.h"
#include <ctime>

using namespace System;
using namespace System::Windows::Forms;

void main()
{
	srand(time(NULL));
	
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Briscola::MyForm form;
	Application::Run(% form);
}