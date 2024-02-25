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

void Briscola::MyForm::showCarte(Napoletano& temp) {
	int n1 = this->imageList1->Images->IndexOfKey(gcnew String(temp.getCarta(0).getPath().c_str()));
	int n2 = this->imageList1->Images->IndexOfKey(gcnew String(temp.getCarta(1).getPath().c_str()));
	int n3 = this->imageList1->Images->IndexOfKey(gcnew String(temp.getCarta(2).getPath().c_str()));
	Carta c1 = temp.getCarta(0);
	Carta c2 = temp.getCarta(1);
	Carta c3 = temp.getCarta(2);

	(n1 == -1) ? this->cartaPlayer1->BackgroundImage = imageList1->Images[0] : this->cartaPlayer1->BackgroundImage = imageList1->Images[n1];
	this->cartaPlayer1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
	(n2 == -1) ? this->cartaPlayer2->BackgroundImage = imageList1->Images[0] : this->cartaPlayer2->BackgroundImage = imageList1->Images[n2];
	this->cartaPlayer2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;

	(n3 == -1) ? this->cartaPlayer3->BackgroundImage = imageList1->Images[0] : this->cartaPlayer3->BackgroundImage = imageList1->Images[n3];
	this->cartaPlayer3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;

	this->cartaPlayer1->Refresh();
	this->cartaPlayer2->Refresh();
	this->cartaPlayer3->Refresh();
}

Carta Briscola::MyForm::inizializzaGioco(Napoletano& mazzo, Player& p1, Player& p2) {
	srand(time(NULL));
		mazzo.inizializza();
		for (int i = 0; i < 3; i++) {
			Carta& temp = (--mazzo);
			Carta carta = temp;
			p1.setCarta(carta);

			temp = (--mazzo);
			carta = temp;
			p2.setCarta(carta);
		}
		Carta& temp = (--mazzo);
		Carta briscola = temp;


		
		showCarte(p1.getMazzo());
		int n =  this->imageList1->Images->IndexOfKey(gcnew String(briscola.getPath().c_str()));
		(n == -1) ? this->Briscola->BackgroundImage = imageList1->Images[0] : this->Briscola->BackgroundImage = imageList1->Images[n];
		this->Briscola->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		this->Briscola->BackgroundImage->RotateFlip(System::Drawing::RotateFlipType::Rotate270FlipNone);

		return briscola;
}

void Briscola::MyForm::realVSReal(Napoletano& mazzo, Player& p1, Player& p2, Carta& briscola) {
	
}

void Briscola::MyForm::realVSAi(Napoletano& mazzo, Player& p1, Player& p2, Carta& briscola) {
	System::EventArgs^ eventArgs = gcnew EventArgs();
	

	
}