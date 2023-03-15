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
	/// Resumen de GameForm
	/// </summary>
	public ref class GameForm : public System::Windows::Forms::Form
	{
	public:
		GameForm(void)
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
		~GameForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	protected:

	private:
		//Varibles
		int extraMenuOpened = 0;

		int buttonWidth = 0;
		int buttonHeight = 0;
		int groupBoxWidth = 0;
		int groupBoxHeight = 0;
		int groupBoxY = 0;
		int buttonX = 0;
		int buttonY = 0;
		int button2X = 0;
		int button2Y = 0;
		int button3X = 0;
		int button3Y = 0;
		int label1X = 0;
		int label2X = 0;
		int label2Y = 0;
		int label3X = 0;
		int label3Y = 0;
		int pictureBoxesX = 0;
		int pictureBoxesY = 0;
	private: System::Windows::Forms::PictureBox^ pictureBox7;

		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GameForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button1->Font = (gcnew System::Drawing::Font(L"Haettenschweiler", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(21, 76);
			this->button1->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(194, 79);
			this->button1->TabIndex = 2;
			this->button1->Text = L"1: Buy Turret";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &GameForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button2->Location = System::Drawing::Point(271, 76);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(225, 79);
			this->button2->TabIndex = 3;
			this->button2->Text = L"2: Upgrade Turret     3: Delete Turret";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &GameForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button3->Location = System::Drawing::Point(552, 76);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(194, 79);
			this->button3->TabIndex = 4;
			this->button3->Text = L"4: Gain $50";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &GameForm::button3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(2, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(4000, 4000);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &GameForm::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBox2->Location = System::Drawing::Point(643, 44);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(115, 114);
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBox3->Location = System::Drawing::Point(177, 44);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(115, 114);
			this->pictureBox3->TabIndex = 7;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox4->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBox4->Location = System::Drawing::Point(333, 44);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(115, 114);
			this->pictureBox4->TabIndex = 8;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &GameForm::pictureBox4_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox5->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBox5->Location = System::Drawing::Point(19, 44);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(115, 114);
			this->pictureBox5->TabIndex = 9;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &GameForm::pictureBox5_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBox6->Location = System::Drawing::Point(485, 44);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(115, 114);
			this->pictureBox6->TabIndex = 10;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &GameForm::pictureBox6_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::SandyBrown;
			this->label1->Font = (gcnew System::Drawing::Font(L"Impact", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(207, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(395, 48);
			this->label1->TabIndex = 2;
			this->label1->Text = L"A torret Shooter Game";
			this->label1->Click += gcnew System::EventHandler(this, &GameForm::label1_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBox2->BackColor = System::Drawing::Color::Snow;
			this->groupBox2->Controls->Add(this->pictureBox2);
			this->groupBox2->Controls->Add(this->pictureBox3);
			this->groupBox2->Controls->Add(this->pictureBox6);
			this->groupBox2->Controls->Add(this->pictureBox4);
			this->groupBox2->Controls->Add(this->pictureBox5);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Impact", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(2, 283);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(780, 167);
			this->groupBox2->TabIndex = 13;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Turrets Owned";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &GameForm::groupBox2_Enter);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Gainsboro;
			this->pictureBox7->Location = System::Drawing::Point(597, 0);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(1850, 5000);
			this->pictureBox7->TabIndex = 14;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &GameForm::pictureBox7_Click);
			// 
			// GameForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 34);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Snow;
			this->ClientSize = System::Drawing::Size(782, 453);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox1);
			this->Font = (gcnew System::Drawing::Font(L"Haettenschweiler", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Location = System::Drawing::Point(537, 83);
			this->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->MinimumSize = System::Drawing::Size(800, 500);
			this->Name = L"GameForm";
			this->Text = L"GameForm";
			this->Load += gcnew System::EventHandler(this, &GameForm::GameForm_Load);
			this->Resize += gcnew System::EventHandler(this, &GameForm::GameForm_Resize);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		};
#pragma endregion

	private: System::Void GameForm_Resize(System::Object^ sender, System::EventArgs^ e) {

		if (extraMenuOpened == 0) {

			buttonWidth = (int)(this->Width * 0.18); // calculate the new width of the button as 20% of the form's width
			buttonHeight = (int)(this->Height * 0.14); // calculate the new height of the button as 10% of the form's height

			groupBoxWidth = (int)(this->Width * 1);
			groupBoxHeight = (int)(this->Height * 0.3);

			groupBoxY = (int)(this->Height * 0.7);

			buttonX = (int)(this->Width * 0.125);
			buttonY = (int)(this->Height * 0.25);

			button2X = (int)(this->Width * 0.4);
			button2Y = (int)(this->Height * 0.25);

			button3X = (int)(this->Width * 0.675);
			button3Y = (int)(this->Height * 0.25);

			label1X = (int)(this->Width * 0.2);

			label2X = (int)(this->Width * 0.2);
			label2Y = (int)(this->Height * 0.22);

			label3X = (int)(this->Width * 0.2);
			label3Y = (int)(this->Height * 0.38);

			pictureBoxesX = (int)(this->Width * 0.2);
			pictureBoxesY = (int)(this->Height * 0.38);

			label1->Location = System::Drawing::Point(207, 9);

		}
		else {

			pictureBox7->Location = System::Drawing::Point(this->Width - 340, 0);

			buttonWidth = (int)(this->Width * 0.22); // calculate the new width of the button as 20% of the form's width
			buttonHeight = (int)(this->Height * 0.14); // calculate the new height of the button as 10% of the form's height

			groupBoxWidth = (int)(this->Width * 0.75);
			groupBoxHeight = (int)(this->Height * 0.3);

			groupBoxY = (int)(this->Height * 0.7);

			buttonX = (int)(this->Width * 0.05);
			buttonY = (int)(this->Height * 0.25);

			button2X = (int)(this->Width * 0.285);
			button2Y = (int)(this->Height * 0.25);

			button3X = (int)(this->Width * 0.525);
			button3Y = (int)(this->Height * 0.25);

			label1X = (int)(this->Width * 0.2);

			label2X = (int)(this->Width * 0.2);
			label2Y = (int)(this->Height * 0.22);

			label3X = (int)(this->Width * 0.2);
			label3Y = (int)(this->Height * 0.38);

			pictureBoxesX = (int)(this->Width-400 * 0.2);
			pictureBoxesY = (int)(this->Height * 0.38);

			label1->Location = System::Drawing::Point(137, 9);
		}

		button1->Size = System::Drawing::Size(buttonWidth, buttonHeight); // set the size of the button to the new calculated size
		button1->Location = System::Drawing::Point(buttonX, buttonY);

		button2->Size = System::Drawing::Size(buttonWidth, buttonHeight); // set the size of the button to the new calculated size
		button2->Location = System::Drawing::Point(button2X, button2Y);

		button3->Size = System::Drawing::Size(buttonWidth, buttonHeight); // set the size of the button to the new calculated size
		button3->Location = System::Drawing::Point(button3X, button3Y);

		groupBox2->Size = System::Drawing::Size(groupBoxWidth, groupBoxHeight);
		groupBox2->Location = System::Drawing::Point(0, groupBoxY-50);

		pictureBox2->Size = System::Drawing::Size(pictureBoxesX, pictureBoxesY);
		pictureBox2->Location = System::Drawing::Point(this->Location.X, groupBoxY);

		pictureBox3->Size = System::Drawing::Size(pictureBoxesX, pictureBoxesY);
		pictureBox3->Location = System::Drawing::Point(this->Location.X, groupBoxY);

		pictureBox3->Size = System::Drawing::Size(pictureBoxesX, pictureBoxesY);
		pictureBox3->Location = System::Drawing::Point(this->Location.X, groupBoxY);

		pictureBox4->Size = System::Drawing::Size(pictureBoxesX, pictureBoxesY);
		pictureBox4->Location = System::Drawing::Point(this->Location.X, groupBoxY);

		pictureBox5->Size = System::Drawing::Size(pictureBoxesX, pictureBoxesY);
		pictureBox5->Location = System::Drawing::Point(this->Location.X, groupBoxY);

		int labelFontSize = (int)(this->Width * 0.05); // calculate the new font size of the label as 5% of the form's width
		int labelFontSize2 = (int)(this->Width * 0.025);

		if (extraMenuOpened == 1) {
			if (this->Width > 2000) // if the form's width is greater than 500, scale up the font size
			{
				labelFontSize *= 2; // double the font size
				labelFontSize2 *= 2;
			}
		}
		else {
			if (this->Width > 2750) // if the form's width is greater than 500, scale up the font size
			{
				labelFontSize *= 2; // double the font size
				labelFontSize2 *= 2;
			}
		}

			label1->Font = gcnew System::Drawing::Font(label1->Font->FontFamily, labelFontSize); // set the font of the label to a new font with the calculated font size
			button1->Font = gcnew System::Drawing::Font(button1->Font->FontFamily, labelFontSize2);
			button2->Font = gcnew System::Drawing::Font(button2->Font->FontFamily, labelFontSize2);
			button3->Font = gcnew System::Drawing::Font(button3->Font->FontFamily, labelFontSize2);
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->MinimumSize = System::Drawing::Size(1200, 500);
	extraMenuOpened = 1;
	pictureBox7->Show();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->MinimumSize = System::Drawing::Size(1200, 500);
	extraMenuOpened = 1;
	pictureBox7->Show();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->MinimumSize = System::Drawing::Size(1200, 500);
	extraMenuOpened = 1;
	pictureBox7->Show();
}
private: System::Void groupBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void GameForm_Load(System::Object^ sender, System::EventArgs^ e) {
	pictureBox7->Hide();
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	extraMenuOpened = 0;
	pictureBox7->Hide();
}
};
}
