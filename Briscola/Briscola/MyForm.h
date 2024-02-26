#ifndef MYFORM_H
#define MYFORM_H

#pragma once
#include <iostream>
#include "napoletano.h"
#include "realplayer.h"
#include "aiplayer.h"
#include "player.h"
#include <windows.h>

namespace Briscola {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void);
		void showCarte(Napoletano& temp);
		Carta inizializzaGioco(Napoletano& mazzo, RealPlayer& p1, AiPlayer& p2);
		~MyForm();
	private:
		//Variabile: serve a capire quale button e stato premuto se e uguale a 0 cartaPlayer1, 1 cartaPlayer2, 2 cartaPlayer3
		Napoletano* deck;
		Carta* briscola;
		RealPlayer* p1;
		AiPlayer* p2;
		bool turnoComputer;
		System::Windows::Forms::Button^ cartaPlayer1;
		System::Windows::Forms::Button^ cartaPlayer2;
		System::Windows::Forms::Button^ cartaPlayer3;
		System::Windows::Forms::PictureBox^ cartaBack1;
		System::Windows::Forms::PictureBox^ cartaBack2;
		System::Windows::Forms::PictureBox^ cartaBack3;


		System::Windows::Forms::Label^ turnoPlayer;
		System::Windows::Forms::PictureBox^ carteGiocate;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::Windows::Forms::PictureBox^ BriscolaBox;

	private: System::Windows::Forms::PictureBox^ mazzo;


	private:

		System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->cartaPlayer1 = (gcnew System::Windows::Forms::Button());
			this->cartaPlayer2 = (gcnew System::Windows::Forms::Button());
			this->cartaPlayer3 = (gcnew System::Windows::Forms::Button());
			this->cartaBack1 = (gcnew System::Windows::Forms::PictureBox());
			this->cartaBack2 = (gcnew System::Windows::Forms::PictureBox());
			this->cartaBack3 = (gcnew System::Windows::Forms::PictureBox());
			this->carteGiocate = (gcnew System::Windows::Forms::PictureBox());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->mazzo = (gcnew System::Windows::Forms::PictureBox());
			this->BriscolaBox = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cartaBack1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cartaBack2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cartaBack3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->carteGiocate))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mazzo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BriscolaBox))->BeginInit();
			this->SuspendLayout();
			// 
			// cartaPlayer1
			// 
			this->cartaPlayer1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cartaPlayer1.BackgroundImage")));
			this->cartaPlayer1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->cartaPlayer1->FlatAppearance->BorderColor = System::Drawing::Color::Green;
			this->cartaPlayer1->FlatAppearance->BorderSize = 0;
			this->cartaPlayer1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Yellow;
			this->cartaPlayer1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cartaPlayer1->ImageIndex = 6;
			this->cartaPlayer1->Location = System::Drawing::Point(203, 687);
			this->cartaPlayer1->Name = L"cartaPlayer1";
			this->cartaPlayer1->Size = System::Drawing::Size(127, 203);
			this->cartaPlayer1->TabIndex = 0;
			this->cartaPlayer1->UseVisualStyleBackColor = true;
			this->cartaPlayer1->Click += gcnew System::EventHandler(this, &MyForm::cartaPlayer1_Click);
			// 
			// cartaPlayer2
			// 
			this->cartaPlayer2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cartaPlayer2.BackgroundImage")));
			this->cartaPlayer2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->cartaPlayer2->FlatAppearance->BorderColor = System::Drawing::Color::Green;
			this->cartaPlayer2->FlatAppearance->BorderSize = 0;
			this->cartaPlayer2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Yellow;
			this->cartaPlayer2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cartaPlayer2->Location = System::Drawing::Point(377, 687);
			this->cartaPlayer2->Name = L"cartaPlayer2";
			this->cartaPlayer2->Size = System::Drawing::Size(127, 203);
			this->cartaPlayer2->TabIndex = 1;
			this->cartaPlayer2->UseVisualStyleBackColor = true;
			this->cartaPlayer2->Click += gcnew System::EventHandler(this, &MyForm::cartaPlayer2_Click);
			// 
			// cartaPlayer3
			// 
			this->cartaPlayer3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cartaPlayer3.BackgroundImage")));
			this->cartaPlayer3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->cartaPlayer3->FlatAppearance->BorderColor = System::Drawing::Color::Green;
			this->cartaPlayer3->FlatAppearance->BorderSize = 0;
			this->cartaPlayer3->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Yellow;
			this->cartaPlayer3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cartaPlayer3->Location = System::Drawing::Point(538, 687);
			this->cartaPlayer3->Name = L"cartaPlayer3";
			this->cartaPlayer3->Size = System::Drawing::Size(127, 203);
			this->cartaPlayer3->TabIndex = 2;
			this->cartaPlayer3->UseVisualStyleBackColor = true;
			this->cartaPlayer3->Click += gcnew System::EventHandler(this, &MyForm::cartaPlayer3_Click);
			// 
			// cartaBack1
			// 
			this->cartaBack1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cartaBack1.BackgroundImage")));
			this->cartaBack1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->cartaBack1->Location = System::Drawing::Point(203, 12);
			this->cartaBack1->Name = L"cartaBack1";
			this->cartaBack1->Size = System::Drawing::Size(127, 203);
			this->cartaBack1->TabIndex = 3;
			this->cartaBack1->TabStop = false;
			// 
			// cartaBack2
			// 
			this->cartaBack2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cartaBack2.BackgroundImage")));
			this->cartaBack2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->cartaBack2->Location = System::Drawing::Point(368, 12);
			this->cartaBack2->Name = L"cartaBack2";
			this->cartaBack2->Size = System::Drawing::Size(127, 203);
			this->cartaBack2->TabIndex = 4;
			this->cartaBack2->TabStop = false;
			// 
			// cartaBack3
			// 
			this->cartaBack3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cartaBack3.BackgroundImage")));
			this->cartaBack3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->cartaBack3->Location = System::Drawing::Point(538, 12);
			this->cartaBack3->Name = L"cartaBack3";
			this->cartaBack3->Size = System::Drawing::Size(127, 203);
			this->cartaBack3->TabIndex = 5;
			this->cartaBack3->TabStop = false;
			// 
			// carteGiocate
			// 
			this->carteGiocate->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"carteGiocate.InitialImage")));
			this->carteGiocate->Location = System::Drawing::Point(368, 339);
			this->carteGiocate->Name = L"carteGiocate";
			this->carteGiocate->Size = System::Drawing::Size(127, 203);
			this->carteGiocate->TabIndex = 10;
			this->carteGiocate->TabStop = false;
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"noCarta.png");
			this->imageList1->Images->SetKeyName(1, L"assoBastoni.png");
			this->imageList1->Images->SetKeyName(2, L"assoCoppe.png");
			this->imageList1->Images->SetKeyName(3, L"assoSpade.png");
			this->imageList1->Images->SetKeyName(4, L"assoDenari.png");
			this->imageList1->Images->SetKeyName(5, L"back.png");
			this->imageList1->Images->SetKeyName(6, L"cavalloBastoni.png");
			this->imageList1->Images->SetKeyName(7, L"cavalloCoppe.png");
			this->imageList1->Images->SetKeyName(8, L"cavalloDenari.png");
			this->imageList1->Images->SetKeyName(9, L"cavalloSpade.png");
			this->imageList1->Images->SetKeyName(10, L"cinqueBastoni.png");
			this->imageList1->Images->SetKeyName(11, L"cinqueCoppe.png");
			this->imageList1->Images->SetKeyName(12, L"cinqueDenari.png");
			this->imageList1->Images->SetKeyName(13, L"cinqueSpade.png");
			this->imageList1->Images->SetKeyName(14, L"dueBastoni.png");
			this->imageList1->Images->SetKeyName(15, L"dueCoppe.png");
			this->imageList1->Images->SetKeyName(16, L"dueDenari.png");
			this->imageList1->Images->SetKeyName(17, L"dueSpade.png");
			this->imageList1->Images->SetKeyName(18, L"fanteBastoni.png");
			this->imageList1->Images->SetKeyName(19, L"fanteCoppe.png");
			this->imageList1->Images->SetKeyName(20, L"fanteDenari.png");
			this->imageList1->Images->SetKeyName(21, L"fanteSpade.png");
			this->imageList1->Images->SetKeyName(22, L"quattroBastoni.png");
			this->imageList1->Images->SetKeyName(23, L"quattroCoppe.png");
			this->imageList1->Images->SetKeyName(24, L"quattroDenari.png");
			this->imageList1->Images->SetKeyName(25, L"quattroSpade.png");
			this->imageList1->Images->SetKeyName(26, L"reBastoni.png");
			this->imageList1->Images->SetKeyName(27, L"reCoppe.png");
			this->imageList1->Images->SetKeyName(28, L"reDenari.png");
			this->imageList1->Images->SetKeyName(29, L"reSpade.png");
			this->imageList1->Images->SetKeyName(30, L"seiBastoni.png");
			this->imageList1->Images->SetKeyName(31, L"seiCoppe.png");
			this->imageList1->Images->SetKeyName(32, L"seiDenari.png");
			this->imageList1->Images->SetKeyName(33, L"seiSpade.png");
			this->imageList1->Images->SetKeyName(34, L"setteBastoni.png");
			this->imageList1->Images->SetKeyName(35, L"setteCoppe.png");
			this->imageList1->Images->SetKeyName(36, L"setteDenari.png");
			this->imageList1->Images->SetKeyName(37, L"setteSpade.png");
			this->imageList1->Images->SetKeyName(38, L"treBastoni.png");
			this->imageList1->Images->SetKeyName(39, L"treCoppe.png");
			this->imageList1->Images->SetKeyName(40, L"treDenari.png");
			this->imageList1->Images->SetKeyName(41, L"treSpade.png");
			// 
			// mazzo
			// 
			this->mazzo->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mazzo.BackgroundImage")));
			this->mazzo->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->mazzo->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"mazzo.InitialImage")));
			this->mazzo->Location = System::Drawing::Point(652, 339);
			this->mazzo->Name = L"mazzo";
			this->mazzo->Size = System::Drawing::Size(127, 203);
			this->mazzo->TabIndex = 12;
			this->mazzo->TabStop = false;
			// 
			// BriscolaBox
			// 
			this->BriscolaBox->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BriscolaBox.InitialImage")));
			this->BriscolaBox->Location = System::Drawing::Point(538, 371);
			this->BriscolaBox->Name = L"BriscolaBox";
			this->BriscolaBox->Size = System::Drawing::Size(203, 127);
			this->BriscolaBox->TabIndex = 13;
			this->BriscolaBox->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::ForestGreen;
			this->ClientSize = System::Drawing::Size(855, 898);
			this->Controls->Add(this->mazzo);
			this->Controls->Add(this->BriscolaBox);
			this->Controls->Add(this->carteGiocate);
			this->Controls->Add(this->cartaBack3);
			this->Controls->Add(this->cartaBack2);
			this->Controls->Add(this->cartaBack1);
			this->Controls->Add(this->cartaPlayer3);
			this->Controls->Add(this->cartaPlayer2);
			this->Controls->Add(this->cartaPlayer1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Briscola by Franko & Diego";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cartaBack1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cartaBack2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cartaBack3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->carteGiocate))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->mazzo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BriscolaBox))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	public: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		*briscola = inizializzaGioco(*deck, *p1, *p2);



	}
	private: System::Void cartaPlayer1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (deck->getDim() > 1) {
			cartaPlayer1->Enabled = false;
			cartaPlayer2->Enabled = false;
			cartaPlayer3->Enabled = false;
			p1->giocaCarta(0);
			this->carteGiocate->BackgroundImage = imageList1->Images[imageList1->Images->IndexOfKey(gcnew String(p1->getCartaGiocata().getPath().c_str()))];
			showCarte(p1->getMazzo());
			this->carteGiocate->Refresh();
			Sleep(1000);
			if (!turnoComputer) {
				p2->giocaCarta(0);
				this->carteGiocate->BackgroundImage = imageList1->Images[imageList1->Images->IndexOfKey(gcnew String(p2->getCartaGiocata().getPath().c_str()))];
				this->carteGiocate->Refresh();
			}


			int i = 0;
			Carta scelta = p2->scegliCarta();
			for (i = 0; i < p2->getMazzo().getDim() && scelta != p2->getMazzo().getCarta(i); i++);
			Carta cartaVincente = p1->getCartaGiocata().confronta(p2->getCartaGiocata(), *briscola);
			if (cartaVincente != p1->getCartaGiocata()) {
				turnoComputer = true;
				p2->setPunteggio(p2->getPunteggio() + p2->getCartaGiocata().getPunteggio() + p1->getCartaGiocata().getPunteggio());
				Sleep(1000);
				p1->getMazzo().setCartaPos(--*deck, 0);
				p2->getMazzo().setCartaPos(--*deck, 0);
				this->carteGiocate->BackgroundImage = imageList1->Images[0];
				showCarte(p1->getMazzo());
				this->carteGiocate->Refresh();
				p2->giocaCarta(0);
				this->carteGiocate->BackgroundImage = imageList1->Images[imageList1->Images->IndexOfKey(gcnew String(p2->getCartaGiocata().getPath().c_str()))];
				this->carteGiocate->Refresh();
			}
			else {
				p1->setPunteggio(p1->getPunteggio() + p1->getCartaGiocata().getPunteggio() + p2->getCartaGiocata().getPunteggio());
				turnoComputer = false;
				Sleep(1000);
				p1->getMazzo().setCartaPos(--*deck, 0);
				p2->getMazzo().setCartaPos(--*deck, 0);
				this->carteGiocate->BackgroundImage = imageList1->Images[0];
				showCarte(p1->getMazzo());
				this->carteGiocate->Refresh();
			}

		}
		else if (p1->getMazzo().getDim() > 1) {
			p1->giocaCarta(0);
			p2->giocaCarta(0);
			int i = 0;
			Carta scelta = p2->scegliCarta();
			for (i = 0; i < p2->getMazzo().getDim() && scelta != p2->getMazzo().getCarta(i); i++);
			Carta cartaVincente = p1->getCartaGiocata().confronta(p2->getCartaGiocata(), *briscola);
			if (cartaVincente != p1->getCartaGiocata()) {
				p2->setPunteggio(p2->getPunteggio() + p2->getCartaGiocata().getPunteggio() + p1->getCartaGiocata().getPunteggio());
			}
			else {
				p1->setPunteggio(p1->getPunteggio() + p1->getCartaGiocata().getPunteggio() + p2->getCartaGiocata().getPunteggio());
			}
		}
		else {
			(p1->getPunteggio() > p2->getPunteggio()) ? MessageBox::Show("Hai vinto!,\n Punti totali: " + p1->getPunteggio() + "Punti avversario:  " + p2->getPunteggio()) : MessageBox::Show("Hai perso!\n Punti totali: " + p1->getPunteggio() + "Punti avversario:  " + p2->getPunteggio());
		}

		cartaPlayer1->Enabled = true;
		cartaPlayer2->Enabled = true;
		cartaPlayer3->Enabled = true;


	}

	private: System::Void cartaPlayer2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (deck->getDim() > 1) {
			cartaPlayer1->Enabled = false;
			cartaPlayer2->Enabled = false;
			cartaPlayer3->Enabled = false;
			p1->giocaCarta(1);
			this->carteGiocate->BackgroundImage = imageList1->Images[imageList1->Images->IndexOfKey(gcnew String(p1->getCartaGiocata().getPath().c_str()))];
			showCarte(p1->getMazzo());
			this->carteGiocate->Refresh();
			Sleep(1000);
			if (!turnoComputer) {
				p2->giocaCarta(1);
				this->carteGiocate->BackgroundImage = imageList1->Images[imageList1->Images->IndexOfKey(gcnew String(p2->getCartaGiocata().getPath().c_str()))];
				this->carteGiocate->Refresh();
			}


			int i = 0;
			Carta scelta = p2->scegliCarta();
			for (i = 0; i < p2->getMazzo().getDim() && scelta != p2->getMazzo().getCarta(i); i++);
			Carta cartaVincente = p1->getCartaGiocata().confronta(p2->getCartaGiocata(), *briscola);
			if (cartaVincente != p1->getCartaGiocata()) {
				turnoComputer = true;
				p2->setPunteggio(p2->getPunteggio() + p2->getCartaGiocata().getPunteggio() + p1->getCartaGiocata().getPunteggio());
				Sleep(1000);
				p1->getMazzo().setCartaPos(--*deck, 1);
				p2->getMazzo().setCartaPos(--*deck, 1);
				this->carteGiocate->BackgroundImage = imageList1->Images[0];
				showCarte(p1->getMazzo());
				this->carteGiocate->Refresh();
				p2->giocaCarta(1);
				this->carteGiocate->BackgroundImage = imageList1->Images[imageList1->Images->IndexOfKey(gcnew String(p2->getCartaGiocata().getPath().c_str()))];
				this->carteGiocate->Refresh();
			}
			else {
				p1->setPunteggio(p1->getPunteggio() + p1->getCartaGiocata().getPunteggio() + p2->getCartaGiocata().getPunteggio());
				turnoComputer = false;
				Sleep(1000);
				p1->getMazzo().setCartaPos(--*deck, 1);
				p2->getMazzo().setCartaPos(--*deck, 1);
				this->carteGiocate->BackgroundImage = imageList1->Images[0];
				showCarte(p1->getMazzo());
				this->carteGiocate->Refresh();
			}

		}
		else if (p1->getMazzo().getDim() > 1) {
			p1->giocaCarta(1);
			p2->giocaCarta(1);
			int i = 0;
			Carta scelta = p2->scegliCarta();
			for (i = 0; i < p2->getMazzo().getDim() && scelta != p2->getMazzo().getCarta(i); i++);
			Carta cartaVincente = p1->getCartaGiocata().confronta(p2->getCartaGiocata(), *briscola);
			if (cartaVincente != p1->getCartaGiocata()) {
				p2->setPunteggio(p2->getPunteggio() + p2->getCartaGiocata().getPunteggio() + p1->getCartaGiocata().getPunteggio());
			}
			else {
				p1->setPunteggio(p1->getPunteggio() + p1->getCartaGiocata().getPunteggio() + p2->getCartaGiocata().getPunteggio());
			}
		}
		else {
			(p1->getPunteggio() > p2->getPunteggio()) ? MessageBox::Show("Hai vinto!,\n Punti totali: " + p1->getPunteggio() + "Punti avversario:  " + p2->getPunteggio()) : MessageBox::Show("Hai perso!\n Punti totali: " + p1->getPunteggio() + "Punti avversario:  " + p2->getPunteggio());
		}

		cartaPlayer1->Enabled = true;
		cartaPlayer2->Enabled = true;
		cartaPlayer3->Enabled = true;


	}

	private: System::Void cartaPlayer3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (deck->getDim() > 1) {
			cartaPlayer1->Enabled = false;
			cartaPlayer2->Enabled = false;
			cartaPlayer3->Enabled = false;
			p1->giocaCarta(2);
			this->carteGiocate->BackgroundImage = imageList1->Images[imageList1->Images->IndexOfKey(gcnew String(p1->getCartaGiocata().getPath().c_str()))];
			showCarte(p1->getMazzo());
			this->carteGiocate->Refresh();
			Sleep(1000);
			if (!turnoComputer) {
				p2->giocaCarta(2);
				this->carteGiocate->BackgroundImage = imageList1->Images[imageList1->Images->IndexOfKey(gcnew String(p2->getCartaGiocata().getPath().c_str()))];
				this->carteGiocate->Refresh();
			}


			int i = 0;
			Carta scelta = p2->scegliCarta();
			for (i = 0; i < p2->getMazzo().getDim() && scelta != p2->getMazzo().getCarta(i); i++);
			Carta cartaVincente = p1->getCartaGiocata().confronta(p2->getCartaGiocata(), *briscola);
			if (cartaVincente != p1->getCartaGiocata()) {
				turnoComputer = true;
				p2->setPunteggio(p2->getPunteggio() + p2->getCartaGiocata().getPunteggio() + p1->getCartaGiocata().getPunteggio());
				Sleep(1000);
				p1->getMazzo().setCartaPos(--*deck, 2);
				p2->getMazzo().setCartaPos(--*deck, 2);
				this->carteGiocate->BackgroundImage = imageList1->Images[0];
				showCarte(p1->getMazzo());
				this->carteGiocate->Refresh();
				p2->giocaCarta(2);
				this->carteGiocate->BackgroundImage = imageList1->Images[imageList1->Images->IndexOfKey(gcnew String(p2->getCartaGiocata().getPath().c_str()))];
				this->carteGiocate->Refresh();
			}
			else {
				p1->setPunteggio(p1->getPunteggio() + p1->getCartaGiocata().getPunteggio() + p2->getCartaGiocata().getPunteggio());
				turnoComputer = false;
				Sleep(1000);
				p1->getMazzo().setCartaPos(--*deck, 2);
				p2->getMazzo().setCartaPos(--*deck, 2);
				this->carteGiocate->BackgroundImage = imageList1->Images[0];
				showCarte(p1->getMazzo());
				this->carteGiocate->Refresh();
			}

		}
		else if (p1->getMazzo().getDim() > 1) {
			p1->giocaCarta(2);
			p2->giocaCarta(2);
			int i = 0;
			Carta scelta = p2->scegliCarta();
			for (i = 0; i < p2->getMazzo().getDim() && scelta != p2->getMazzo().getCarta(i); i++);
			Carta cartaVincente = p1->getCartaGiocata().confronta(p2->getCartaGiocata(), *briscola);
			if (cartaVincente != p1->getCartaGiocata()) {
				p2->setPunteggio(p2->getPunteggio() + p2->getCartaGiocata().getPunteggio() + p1->getCartaGiocata().getPunteggio());
			}
			else {
				p1->setPunteggio(p1->getPunteggio() + p1->getCartaGiocata().getPunteggio() + p2->getCartaGiocata().getPunteggio());
			}
		}
		else {
			(p1->getPunteggio() > p2->getPunteggio()) ? MessageBox::Show("Hai vinto!,\n Punti totali: " + p1->getPunteggio() + "Punti avversario:  " + p2->getPunteggio()) : MessageBox::Show("Hai perso!\n Punti totali: " + p1->getPunteggio() + "Punti avversario:  " + p2->getPunteggio());
		}


		cartaPlayer1->Enabled = true;
		cartaPlayer2->Enabled = true;
		cartaPlayer3->Enabled = true;


	}
};
}
#endif