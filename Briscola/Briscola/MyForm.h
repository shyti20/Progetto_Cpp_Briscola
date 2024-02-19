#pragma once
#include <iostream>
#include "napoletano.h"
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
		void setCartaPlayer1(string path);
		void setCartaPlayer2(string path);
		void setCartaPlayer3(string path);
		~MyForm();
	protected:

	private: 
		System::Windows::Forms::Button^ cartaPlayer1;
		System::Windows::Forms::Button^ cartaPlayer2;
		System::Windows::Forms::Button^ cartaPlayer3;
		System::Windows::Forms::PictureBox^ cartaBack1;
		System::Windows::Forms::PictureBox^ cartaBack2;
		System::Windows::Forms::PictureBox^ cartaBack3;
		System::Windows::Forms::Button^ mazzo;

		System::Windows::Forms::PictureBox^ pictureBox1;

		System::Windows::Forms::Label^ turnoPlayer;
		System::Windows::Forms::PictureBox^ pictureBox3;
		System::Windows::Forms::ImageList^ imageList1;
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
			this->mazzo = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->turnoPlayer = (gcnew System::Windows::Forms::Label());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cartaBack1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cartaBack2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cartaBack3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// cartaPlayer1
			// 
			this->cartaPlayer1->Location = System::Drawing::Point(203, 687);
			this->cartaPlayer1->Name = L"cartaPlayer1";
			this->cartaPlayer1->Size = System::Drawing::Size(127, 203);
			this->cartaPlayer1->TabIndex = 0;
			this->cartaPlayer1->Text = L"button1";
			this->cartaPlayer1->UseVisualStyleBackColor = true;
			// 
			// cartaPlayer2
			// 
			this->cartaPlayer2->Location = System::Drawing::Point(368, 687);
			this->cartaPlayer2->Name = L"cartaPlayer2";
			this->cartaPlayer2->Size = System::Drawing::Size(127, 203);
			this->cartaPlayer2->TabIndex = 1;
			this->cartaPlayer2->Text = L"button1";
			this->cartaPlayer2->UseVisualStyleBackColor = true;
			// 
			// cartaPlayer3
			// 
			this->cartaPlayer3->Location = System::Drawing::Point(538, 687);
			this->cartaPlayer3->Name = L"cartaPlayer3";
			this->cartaPlayer3->Size = System::Drawing::Size(127, 203);
			this->cartaPlayer3->TabIndex = 2;
			this->cartaPlayer3->Text = L"button1";
			this->cartaPlayer3->UseVisualStyleBackColor = true;
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
			// mazzo
			// 
			this->mazzo->Location = System::Drawing::Point(653, 339);
			this->mazzo->Name = L"mazzo";
			this->mazzo->Size = System::Drawing::Size(127, 203);
			this->mazzo->TabIndex = 7;
			this->mazzo->Text = L"button1";
			this->mazzo->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(524, 384);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(188, 111);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.InitialImage")));
			this->pictureBox3->Location = System::Drawing::Point(368, 339);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(127, 203);
			this->pictureBox3->TabIndex = 10;
			this->pictureBox3->TabStop = false;
			// 
			// turnoPlayer
			// 
			this->turnoPlayer->AutoSize = true;
			this->turnoPlayer->Font = (gcnew System::Drawing::Font(L"IQOS", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->turnoPlayer->Location = System::Drawing::Point(33, 420);
			this->turnoPlayer->Name = L"turnoPlayer";
			this->turnoPlayer->Size = System::Drawing::Size(174, 37);
			this->turnoPlayer->TabIndex = 11;
			this->turnoPlayer->Text = L"Turno Player: ";
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"assoBastoni.png");
			this->imageList1->Images->SetKeyName(1, L"assoCoppe.png");
			this->imageList1->Images->SetKeyName(2, L"assoDenari.png");
			this->imageList1->Images->SetKeyName(3, L"assoSpade.png");
			this->imageList1->Images->SetKeyName(4, L"back.png");
			this->imageList1->Images->SetKeyName(5, L"cavalloBastoni.png");
			this->imageList1->Images->SetKeyName(6, L"cavalloCoppe.png");
			this->imageList1->Images->SetKeyName(7, L"cavalloDenari.png");
			this->imageList1->Images->SetKeyName(8, L"cavalloSpade.png");
			this->imageList1->Images->SetKeyName(9, L"cinqueBastoni.png");
			this->imageList1->Images->SetKeyName(10, L"cinqueCoppe.png");
			this->imageList1->Images->SetKeyName(11, L"cinqueDenari.png");
			this->imageList1->Images->SetKeyName(12, L"cinqueSpade.png");
			this->imageList1->Images->SetKeyName(13, L"dueBastoni.png");
			this->imageList1->Images->SetKeyName(14, L"dueCoppe.png");
			this->imageList1->Images->SetKeyName(15, L"dueDenari.png");
			this->imageList1->Images->SetKeyName(16, L"dueSpade.png");
			this->imageList1->Images->SetKeyName(17, L"fanteBastoni.png");
			this->imageList1->Images->SetKeyName(18, L"fanteCoppe.png");
			this->imageList1->Images->SetKeyName(19, L"fanteDenari.png");
			this->imageList1->Images->SetKeyName(20, L"fanteSpade.png");
			this->imageList1->Images->SetKeyName(21, L"quattroBastoni.png");
			this->imageList1->Images->SetKeyName(22, L"quattroCoppe.png");
			this->imageList1->Images->SetKeyName(23, L"quattroDenari.png");
			this->imageList1->Images->SetKeyName(24, L"quattroSpade.png");
			this->imageList1->Images->SetKeyName(25, L"reBastoni.png");
			this->imageList1->Images->SetKeyName(26, L"reCoppe.png");
			this->imageList1->Images->SetKeyName(27, L"reDenari.png");
			this->imageList1->Images->SetKeyName(28, L"reSpade.png");
			this->imageList1->Images->SetKeyName(29, L"seiBastoni.png");
			this->imageList1->Images->SetKeyName(30, L"seiCoppe.png");
			this->imageList1->Images->SetKeyName(31, L"seiDenari.png");
			this->imageList1->Images->SetKeyName(32, L"seiSpade.png");
			this->imageList1->Images->SetKeyName(33, L"setteBastoni.png");
			this->imageList1->Images->SetKeyName(34, L"setteCoppe.png");
			this->imageList1->Images->SetKeyName(35, L"setteDenari.png");
			this->imageList1->Images->SetKeyName(36, L"setteSpade.png");
			this->imageList1->Images->SetKeyName(37, L"treBastoni.png");
			this->imageList1->Images->SetKeyName(38, L"treCoppe.png");
			this->imageList1->Images->SetKeyName(39, L"treDenari.png");
			this->imageList1->Images->SetKeyName(40, L"treSpade.png");
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::ForestGreen;
			this->ClientSize = System::Drawing::Size(855, 898);
			this->Controls->Add(this->turnoPlayer);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->mazzo);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->cartaBack3);
			this->Controls->Add(this->cartaBack2);
			this->Controls->Add(this->cartaBack1);
			this->Controls->Add(this->cartaPlayer3);
			this->Controls->Add(this->cartaPlayer2);
			this->Controls->Add(this->cartaPlayer1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cartaBack1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cartaBack2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->cartaBack3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	Napoletano mazzo;
	mazzo.inizializza();
}
};
}