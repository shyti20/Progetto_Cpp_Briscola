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
	deck = new Napoletano();
	briscola = new Carta();
	p1 = new RealPlayer();
	p2 = new AiPlayer();
	turnoComputer = false;
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

Carta Briscola::MyForm::inizializzaGioco(Napoletano& mazzo, RealPlayer& p1, AiPlayer& p2) {
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
		(n == -1) ? this->BriscolaBox->BackgroundImage = imageList1->Images[0] : this->BriscolaBox->BackgroundImage = imageList1->Images[n];
		this->BriscolaBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
		this->BriscolaBox->BackgroundImage->RotateFlip(System::Drawing::RotateFlipType::Rotate270FlipNone);

		return briscola;
}
