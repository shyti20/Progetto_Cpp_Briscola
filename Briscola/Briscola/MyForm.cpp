#include "MyForm.h"
#include <iostream>

using namespace std;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

Briscola::MyForm::MyForm(void)
{
	InitializeComponent();
	//
	//TODO: Add the constructor code here
	//
}

Briscola::MyForm::~MyForm() {
	if (components)
	{
		delete components;
	}
}

void Briscola::MyForm::setCartaPlayer1(string path){

}

void Briscola::MyForm::setCartaPlayer2(string path) {

}

void Briscola::MyForm::setCartaPlayer3(string path) {

}