#pragma once

#include <stdlib.h>;
#include <iostream>;
#include <Windows.h>;
#include <iostream>;
#include <string>;
#include <stdexcept>;

#include "Game.h";
#include "GameForm.h";

namespace Visual2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{


	public:

		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::ToolTip^ key1;
	private: System::Windows::Forms::PictureBox^ lol;
	private: System::Windows::Forms::Button^ enterGameButton;
	private: System::Windows::Forms::Button^ exitGameButton;




	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->key1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->lol = (gcnew System::Windows::Forms::PictureBox());
			this->enterGameButton = (gcnew System::Windows::Forms::Button());
			this->exitGameButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lol))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::SandyBrown;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(40, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(402, 48);
			this->label1->TabIndex = 2;
			this->label1->Text = L"A Turret Shooter Game";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Heavy", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(43, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(112, 29);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Controls:";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(45, 132);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 25);
			this->label3->TabIndex = 4;
			this->label3->Text = L"1";
			this->key1->SetToolTip(this->label3, L"When pressing 1, it allows you to buy turrets!");
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(45, 171);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(24, 25);
			this->label4->TabIndex = 5;
			this->label4->Text = L"2";
			this->key1->SetToolTip(this->label4, L"When pressing 2, it allows you to upgrade towers!");
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(45, 209);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(24, 25);
			this->label5->TabIndex = 6;
			this->label5->Text = L"3";
			this->key1->SetToolTip(this->label5, L"When pressing 3, it allows you to delete turrets!");
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(45, 248);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(24, 25);
			this->label6->TabIndex = 7;
			this->label6->Text = L"4";
			this->key1->SetToolTip(this->label6, L"When pressing 4, it allows you to gain $50!");
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// key1
			// 
			this->key1->Tag = L"When pressing 1, it allows you to buy turrets!";
			this->key1->Popup += gcnew System::Windows::Forms::PopupEventHandler(this, &MyForm::key1_Popup);
			// 
			// lol
			// 
			this->lol->Location = System::Drawing::Point(-8, 0);
			this->lol->Name = L"lol";
			this->lol->Size = System::Drawing::Size(4000, 4000);
			this->lol->TabIndex = 11;
			this->lol->TabStop = false;
			// 
			// enterGameButton
			// 
			this->enterGameButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->enterGameButton->AutoSize = true;
			this->enterGameButton->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->enterGameButton->Location = System::Drawing::Point(12, 325);
			this->enterGameButton->Name = L"enterGameButton";
			this->enterGameButton->Size = System::Drawing::Size(392, 117);
			this->enterGameButton->TabIndex = 9;
			this->enterGameButton->Text = L"Enter Game";
			this->enterGameButton->UseVisualStyleBackColor = true;
			this->enterGameButton->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			this->enterGameButton->MouseEnter += gcnew System::EventHandler(this, &MyForm::button1_MouseEnter);
			this->enterGameButton->MouseLeave += gcnew System::EventHandler(this, &MyForm::button1_MouseLeave);
			// 
			// exitGameButton
			// 
			this->exitGameButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->exitGameButton->AutoSize = true;
			this->exitGameButton->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exitGameButton->Location = System::Drawing::Point(367, 325);
			this->exitGameButton->Name = L"exitGameButton";
			this->exitGameButton->Size = System::Drawing::Size(392, 117);
			this->exitGameButton->TabIndex = 10;
			this->exitGameButton->Text = L"Exit Game";
			this->exitGameButton->UseVisualStyleBackColor = true;
			this->exitGameButton->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			this->exitGameButton->MouseEnter += gcnew System::EventHandler(this, &MyForm::button2_MouseEnter);
			this->exitGameButton->MouseLeave += gcnew System::EventHandler(this, &MyForm::button2_MouseLeave);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(800, 500);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->exitGameButton);
			this->Controls->Add(this->enterGameButton);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->lol);
			this->MinimumSize = System::Drawing::Size(800, 500);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Activated += gcnew System::EventHandler(this, &MyForm::MyForm_Activated);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Resize += gcnew System::EventHandler(this, &MyForm::MyForm_Resize);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lol))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void key1_Popup(System::Object^ sender, System::Windows::Forms::PopupEventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Hide();
		GameForm^ obj1 = gcnew GameForm(this);
		obj1->ShowDialog();

	}

	private: System::Void button1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		//button1 mouse on top
	}
	private: System::Void button1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		//button1 mouse leaving
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		this->Hide();

	}

	private: System::Void button2_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		//button1 mouse on top
	}
	private: System::Void button2_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		//button2 mouse leaving
	}

	private: System::Void MyForm_Resize(System::Object^ sender, System::EventArgs^ e) {

		int buttonWidth = (int)(this->Width * 0.2); // calculate the new width of the button as 20% of the form's width
		int buttonHeight = (int)(this->Height * 0.1); // calculate the new height of the button as 10% of the form's height

		int buttonX = (int)(this->Width * 0.16);
		int buttonY = (int)(this->Height * 0.75);

		int button2X = (int)(this->Width * 0.6);
		int button2Y = (int)(this->Height * 0.75);

		int label1X = (int)(this->Width * 0.2);

		int label2X = (int)(this->Width * 0.2);
		int label2Y = (int)(this->Height * 0.22);

		int label3X = (int)(this->Width * 0.2);
		int label3Y = (int)(this->Height * 0.38);

		int label4X = (int)(this->Width * 0.2);
		int label4Y = (int)(this->Height * 0.46);

		int label5X = (int)(this->Width * 0.2);
		int label5Y = (int)(this->Height * 0.54);

		int label6X = (int)(this->Width * 0.2);
		int label6Y = (int)(this->Height * 0.62);


		enterGameButton->Size = System::Drawing::Size(buttonWidth, buttonHeight); // set the size of the button to the new calculated size
		enterGameButton->Location = System::Drawing::Point(buttonX, buttonY);

		exitGameButton->Size = System::Drawing::Size(buttonWidth, buttonHeight); // set the size of the button to the new calculated size
		exitGameButton->Location = System::Drawing::Point(button2X, button2Y);

		label1->Location = System::Drawing::Point(label1X, label1->Location.Y);

		label2->Location = System::Drawing::Point(label2X, label2Y);

		label3->Location = System::Drawing::Point(label3X, label3Y);

		label4->Location = System::Drawing::Point(label4X, label4Y);

		label5->Location = System::Drawing::Point(label5X, label5Y);

		label6->Location = System::Drawing::Point(label6X, label6Y);


		int labelFontSize = (int)(this->Width * 0.05); // calculate the new font size of the label as 5% of the form's width
		int label2FontSize = (int)(this->Width * 0.03); // calculate the new font size of the label as 3% of the form's width
		int label3FontSize = (int)(this->Width * 0.02); // calculate the new font size of the label as 2% of the form's width

		if (this->Width > 2000) // if the form's width is greater than 500, scale up the font size
		{
			labelFontSize *= 2; // double the font size
			label2FontSize *= 2;
			label3FontSize *= 2;
		}

		label1->Font = gcnew System::Drawing::Font(label1->Font->FontFamily, labelFontSize); // set the font of the label to a new font with the calculated font size
		label2->Font = gcnew System::Drawing::Font(label2->Font->FontFamily, label2FontSize);
		label3->Font = gcnew System::Drawing::Font(label3->Font->FontFamily, label3FontSize);
		label4->Font = gcnew System::Drawing::Font(label4->Font->FontFamily, label3FontSize);
		label5->Font = gcnew System::Drawing::Font(label5->Font->FontFamily, label3FontSize);
		label6->Font = gcnew System::Drawing::Font(label6->Font->FontFamily, label3FontSize);

	}
private: System::Void MyForm_Activated(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->lol->Image = Image::FromFile("00_assets/background.png");
}
};
}
