#pragma once

#include <stdlib.h>;
#include <iostream>;
#include <Windows.h>;
#include <iostream>;
#include <string>;
#include <stdexcept>;

namespace Visual2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Game
	/// </summary>
	public ref class Game : public System::Windows::Forms::Form
	{
	public:
		Game(void)
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
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::GroupBox^ picture;

	private: System::Windows::Forms::Label^ label1;

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{

			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Game::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->picture = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->picture->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-2, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(4000, 4000);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Haettenschweiler", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(112, 83);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(248, 87);
			this->button1->TabIndex = 2;
			this->button1->Text = L"1: Buy Turret";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Haettenschweiler", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(275, 83);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(248, 87);
			this->button2->TabIndex = 3;
			this->button2->Text = L"2: Upgrade Turret  3: Delete Turret";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Haettenschweiler", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(537, 83);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(248, 87);
			this->button3->TabIndex = 4;
			this->button3->Text = L"4: Gain 50$";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(7, 72);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(137, 134);
			this->pictureBox2->TabIndex = 5;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(172, 72);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(137, 134);
			this->pictureBox3->TabIndex = 6;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(333, 72);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(137, 134);
			this->pictureBox4->TabIndex = 7;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(494, 72);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(137, 134);
			this->pictureBox5->TabIndex = 8;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &Game::pictureBox5_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Location = System::Drawing::Point(649, 72);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(137, 134);
			this->pictureBox6->TabIndex = 9;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &Game::pictureBox6_Click);
			// 
			// picture
			// 
			this->picture->Controls->Add(this->pictureBox6);
			this->picture->Controls->Add(this->pictureBox5);
			this->picture->Controls->Add(this->pictureBox4);
			this->picture->Controls->Add(this->pictureBox3);
			this->picture->Controls->Add(this->pictureBox2);
			this->picture->Location = System::Drawing::Point(-1, 271);
			this->picture->Name = L"picture";
			this->picture->Size = System::Drawing::Size(1500, 500);
			this->picture->TabIndex = 10;
			this->picture->TabStop = false;
			this->picture->Text = L"groupBox1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::SandyBrown;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(199, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(402, 48);
			this->label1->TabIndex = 11;
			this->label1->Text = L"A Turret Shooter Game";
			this->label1->Click += gcnew System::EventHandler(this, &Game::label1_Click);
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(Width, Height);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(800, 500);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->picture);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->MinimumSize = System::Drawing::Size(800, 500);
			this->Name = L"Game";
			this->Text = L"Game";
			this->Resize += gcnew System::EventHandler(this, &Game::MyForm_Resize2);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->picture->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Resize2(System::Object^ sender, System::EventArgs^ e) {

		int buttonWidth = (int)(this->Width * 0.22); // calculate the new width of the button as 20% of the form's width
		int buttonHeight = (int)(this->Height * 0.14); // calculate the new height of the button as 10% of the form's height

		int groupBoxWidth = (int)(this->Width * 1);
		int groupBoxHeight = (int)(this->Height * 0.3);

		int groupBoxY = (int)(this->Height * 0.7);

		int buttonX = (int)(this->Width * 0.125);
		int buttonY = (int)(this->Height * 0.25);

		int button2X = (int)(this->Width * 0.4);
		int button2Y = (int)(this->Height * 0.25);

		int button3X = (int)(this->Width * 0.675);
		int button3Y = (int)(this->Height * 0.25);

		int label1X = (int)(this->Width * 0.2);

		int label2X = (int)(this->Width * 0.2);
		int label2Y = (int)(this->Height * 0.22);

		int label3X = (int)(this->Width * 0.2);
		int label3Y = (int)(this->Height * 0.38);

		button1->Size = System::Drawing::Size(buttonWidth, buttonHeight); // set the size of the button to the new calculated size
		button1->Location = System::Drawing::Point(buttonX, buttonY);

		button2->Size = System::Drawing::Size(buttonWidth, buttonHeight); // set the size of the button to the new calculated size
		button2->Location = System::Drawing::Point(button2X, button2Y);

		button3->Size = System::Drawing::Size(buttonWidth, buttonHeight); // set the size of the button to the new calculated size
		button3->Location = System::Drawing::Point(button3X, button3Y);

		picture->Size = System::Drawing::Size(groupBoxWidth, groupBoxHeight);
		picture->Location = System::Drawing::Point(0, groupBoxY);

		int labelFontSize = (int)(this->Width * 0.05); // calculate the new font size of the label as 5% of the form's width
		int labelFontSize2 = (int)(this->Width * 0.025);
		
		if (this->Width > 2000) // if the form's width is greater than 500, scale up the font size
		{
			labelFontSize *= 2; // double the font size
			labelFontSize2 *= 2;
		}

		label1->Font = gcnew System::Drawing::Font(label1->Font->FontFamily, labelFontSize); // set the font of the label to a new font with the calculated font size
		button1->Font = gcnew System::Drawing::Font(button1->Font->FontFamily, labelFontSize2);
		button2->Font = gcnew System::Drawing::Font(button2->Font->FontFamily, labelFontSize2);
		button3->Font = gcnew System::Drawing::Font(button3->Font->FontFamily, labelFontSize2);
	}
};
}
