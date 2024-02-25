#include "MyForm.h"
#include <ctime>
#include <cstdlib>

using namespace System;
using namespace System::Windows::Forms;

void main()
{

	
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Briscola::MyForm form;
	Application::Run(% form);
}