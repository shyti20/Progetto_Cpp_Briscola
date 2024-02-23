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

void Briscola::MyForm::showCarte(Player &p) {
	Carta c1 = p.getMazzo().getCarta(1);
	Carta c2 = p.getMazzo().getCarta(2);
	Carta c3 = p.getMazzo().getCarta(3);
	
	int n1 = imageList1->Images->IndexOfKey(gcnew String(c1.getPath().c_str()));
	int n2 = imageList1->Images->IndexOfKey(gcnew String(c2.getPath().c_str()));
	int n3 = imageList1->Images->IndexOfKey(gcnew String(c3.getPath().c_str()));
	if (n1 == -1) {
		cartaPlayer1->BackgroundImage = imageList1->Images[0];
	}
	else {
		cartaPlayer1->BackgroundImage = imageList1->Images[n1];
	}

	if (n2 == -1) {
		cartaPlayer2->BackgroundImage = imageList1->Images[0];
	}
	else {
		cartaPlayer2->BackgroundImage = imageList1->Images[n2];
	}

	if (n3 == -1) {
		cartaPlayer3->BackgroundImage = imageList1->Images[0];
	}
	else {
		cartaPlayer3->BackgroundImage = imageList1->Images[n3];
	}
	
}