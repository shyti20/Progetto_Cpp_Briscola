#include "MyForm.h"
#include "carta.h"
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

void Briscola::MyForm::showCarte(Napoletano temp) {
	int n1 = this->imageList1->Images->IndexOfKey(gcnew String(temp.getCarta(0).getPath().c_str()));
	int n2 = this->imageList1->Images->IndexOfKey(gcnew String(temp.getCarta(1).getPath().c_str()));
	int n3 = this->imageList1->Images->IndexOfKey(gcnew String(temp.getCarta(2).getPath().c_str()));
	if (n1 == -1) {
		this->cartaPlayer1->BackgroundImage = imageList1->Images[0];
	}
	else {
		this->cartaPlayer1->BackgroundImage = imageList1->Images[2];
	}

	if (n2 == -1) {
		this->cartaPlayer2->BackgroundImage = imageList1->Images[0];
	}
	else {
		this->cartaPlayer2->BackgroundImage = imageList1->Images[2];
	}

	if (n3 == -1) {
		this->cartaPlayer3->BackgroundImage = imageList1->Images[0];
	}
	else {
		this->cartaPlayer3->BackgroundImage = imageList1->Images[2];
	}
	this->cartaPlayer1->Refresh();
	this->cartaPlayer2->Refresh();
	this->cartaPlayer3->Refresh();
}