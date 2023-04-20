#pragma once

#include <stdlib.h>;
#include <iostream>;
#include <Windows.h>;
#include <iostream>;
#include <string>;
#include <stdexcept>;
#include <filesystem>;
#include <msclr/marshal_cppstd.h>;

#include "ClassesTorretes.cpp";
#include "TurretsFunctions.h";


namespace Visual2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	//System::Int32 holaCash = 75;

	/// <summary>
	/// Resumen de GameForm
	/// </summary>
	public ref class GameForm : public System::Windows::Forms::Form
	{
	public:
		Form^ obj1;

		GameForm(Form^ newObj)
		{
			InitializeComponent();
			obj1 = newObj;
			//
			//TODO: agregar código de constructor aquí
			//
		}

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
	private: System::Windows::Forms::Button^ buyTurretButton;
	private: System::Windows::Forms::Button^ upgradeAndDeleteButton;
	private: System::Windows::Forms::Button^ getMoneyButton;
	protected:



	private: System::Windows::Forms::PictureBox^ pictureBox1;





	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label1;

	protected:

	private:
		//Varibles

		int extraMenuOpened = 0;
		int activatedMenuNumber = 0;

		int buttonWidth = 0;
		int buttonHeight = 0;

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

		int listSpotBox = 0;

		int^ cash = gcnew int(500);
		int^ ptr = cash;
		int cashGameForm = static_cast<int>(cash);

		bool canBuyTurret;

	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::ListBox^ turretListBox;
	private: System::Windows::Forms::Label^ selectTurretAndPosicionLabel;
	private: System::Windows::Forms::ListBox^ selectSpotListBox;
	private: System::Windows::Forms::Button^ cashButtonSmall;

	private: System::Windows::Forms::Button^ cashButtonMedium;
	private: System::Windows::Forms::Button^ cashButtonBig;
	private: System::Windows::Forms::Button^ upgradeButton;
	private: System::Windows::Forms::Button^ deleteButton;
	private: System::Windows::Forms::Label^ upgradeAndDeleteLabel;
	private: System::Windows::Forms::Label^ cashLabel;
	private: System::Windows::Forms::Button^ confirmBuyTurret;



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
			this->buyTurretButton = (gcnew System::Windows::Forms::Button());
			this->upgradeAndDeleteButton = (gcnew System::Windows::Forms::Button());
			this->getMoneyButton = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->turretListBox = (gcnew System::Windows::Forms::ListBox());
			this->selectTurretAndPosicionLabel = (gcnew System::Windows::Forms::Label());
			this->selectSpotListBox = (gcnew System::Windows::Forms::ListBox());
			this->cashButtonSmall = (gcnew System::Windows::Forms::Button());
			this->cashButtonMedium = (gcnew System::Windows::Forms::Button());
			this->cashButtonBig = (gcnew System::Windows::Forms::Button());
			this->upgradeButton = (gcnew System::Windows::Forms::Button());
			this->deleteButton = (gcnew System::Windows::Forms::Button());
			this->upgradeAndDeleteLabel = (gcnew System::Windows::Forms::Label());
			this->cashLabel = (gcnew System::Windows::Forms::Label());
			this->confirmBuyTurret = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// buyTurretButton
			// 
			this->buyTurretButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->buyTurretButton->Font = (gcnew System::Drawing::Font(L"Haettenschweiler", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buyTurretButton->Location = System::Drawing::Point(21, 76);
			this->buyTurretButton->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->buyTurretButton->Name = L"buyTurretButton";
			this->buyTurretButton->Size = System::Drawing::Size(194, 79);
			this->buyTurretButton->TabIndex = 14;
			this->buyTurretButton->Text = L"1: Buy Turret";
			this->buyTurretButton->UseVisualStyleBackColor = true;
			this->buyTurretButton->Click += gcnew System::EventHandler(this, &GameForm::button1_Click);
			// 
			// upgradeAndDeleteButton
			// 
			this->upgradeAndDeleteButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->upgradeAndDeleteButton->Location = System::Drawing::Point(271, 76);
			this->upgradeAndDeleteButton->Name = L"upgradeAndDeleteButton";
			this->upgradeAndDeleteButton->Size = System::Drawing::Size(225, 79);
			this->upgradeAndDeleteButton->TabIndex = 3;
			this->upgradeAndDeleteButton->Text = L"2: Upgrade Turret     3: Delete Turret";
			this->upgradeAndDeleteButton->UseVisualStyleBackColor = true;
			this->upgradeAndDeleteButton->Click += gcnew System::EventHandler(this, &GameForm::button2_Click);
			// 
			// getMoneyButton
			// 
			this->getMoneyButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->getMoneyButton->Location = System::Drawing::Point(552, 76);
			this->getMoneyButton->Name = L"getMoneyButton";
			this->getMoneyButton->Size = System::Drawing::Size(194, 79);
			this->getMoneyButton->TabIndex = 4;
			this->getMoneyButton->Text = L"4: Gain $50";
			this->getMoneyButton->UseVisualStyleBackColor = true;
			this->getMoneyButton->Click += gcnew System::EventHandler(this, &GameForm::button3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->pictureBox1->Location = System::Drawing::Point(-7, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(4000, 4000);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &GameForm::pictureBox1_Click);
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
			// pictureBox5
			// 
			this->pictureBox5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox5->Location = System::Drawing::Point(463, 327);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(115, 114);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox5->TabIndex = 9;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &GameForm::pictureBox5_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox4->Location = System::Drawing::Point(312, 327);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(115, 114);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox4->TabIndex = 8;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &GameForm::pictureBox4_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox6->Location = System::Drawing::Point(616, 327);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(115, 114);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox6->TabIndex = 10;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->Click += gcnew System::EventHandler(this, &GameForm::pictureBox6_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox3->Location = System::Drawing::Point(156, 327);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(115, 114);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox3->TabIndex = 7;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBox2->Location = System::Drawing::Point(2, 327);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(115, 114);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox2->TabIndex = 6;
			this->pictureBox2->TabStop = false;
			// 
			// turretListBox
			// 
			this->turretListBox->BackColor = System::Drawing::Color::Gainsboro;
			this->turretListBox->FormattingEnabled = true;
			this->turretListBox->ItemHeight = 34;
			this->turretListBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"1. Default Turret", L"2. Sniper Turret",
					L"3. Bomb Turret"
			});
			this->turretListBox->Location = System::Drawing::Point(606, 106);
			this->turretListBox->Name = L"turretListBox";
			this->turretListBox->Size = System::Drawing::Size(183, 106);
			this->turretListBox->TabIndex = 15;
			// 
			// selectTurretAndPosicionLabel
			// 
			this->selectTurretAndPosicionLabel->AutoSize = true;
			this->selectTurretAndPosicionLabel->BackColor = System::Drawing::Color::SandyBrown;
			this->selectTurretAndPosicionLabel->Location = System::Drawing::Point(600, 9);
			this->selectTurretAndPosicionLabel->Name = L"selectTurretAndPosicionLabel";
			this->selectTurretAndPosicionLabel->Size = System::Drawing::Size(199, 102);
			this->selectTurretAndPosicionLabel->TabIndex = 16;
			this->selectTurretAndPosicionLabel->Text = L"Select a class\nand a posicion to\nbuy a turret";
			// 
			// selectSpotListBox
			// 
			this->selectSpotListBox->BackColor = System::Drawing::Color::Gainsboro;
			this->selectSpotListBox->FormattingEnabled = true;
			this->selectSpotListBox->ItemHeight = 34;
			this->selectSpotListBox->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Spot: 1", L"Spot: 2", L"Spot: 3", L"Spot: 4",
					L"Spot: 5"
			});
			this->selectSpotListBox->Location = System::Drawing::Point(606, 238);
			this->selectSpotListBox->Name = L"selectSpotListBox";
			this->selectSpotListBox->Size = System::Drawing::Size(183, 174);
			this->selectSpotListBox->TabIndex = 17;
			// 
			// cashButtonSmall
			// 
			this->cashButtonSmall->Location = System::Drawing::Point(639, 76);
			this->cashButtonSmall->Name = L"cashButtonSmall";
			this->cashButtonSmall->Size = System::Drawing::Size(120, 53);
			this->cashButtonSmall->TabIndex = 18;
			this->cashButtonSmall->Text = L"$50";
			this->cashButtonSmall->UseVisualStyleBackColor = true;
			this->cashButtonSmall->Click += gcnew System::EventHandler(this, &GameForm::cashButtonSmall_Click);
			// 
			// cashButtonMedium
			// 
			this->cashButtonMedium->Location = System::Drawing::Point(639, 207);
			this->cashButtonMedium->Name = L"cashButtonMedium";
			this->cashButtonMedium->Size = System::Drawing::Size(120, 53);
			this->cashButtonMedium->TabIndex = 19;
			this->cashButtonMedium->Text = L"$100";
			this->cashButtonMedium->UseVisualStyleBackColor = true;
			this->cashButtonMedium->Click += gcnew System::EventHandler(this, &GameForm::cashButtonMedium_Click);
			// 
			// cashButtonBig
			// 
			this->cashButtonBig->Location = System::Drawing::Point(639, 327);
			this->cashButtonBig->Name = L"cashButtonBig";
			this->cashButtonBig->Size = System::Drawing::Size(120, 53);
			this->cashButtonBig->TabIndex = 20;
			this->cashButtonBig->Text = L"$250";
			this->cashButtonBig->UseVisualStyleBackColor = true;
			this->cashButtonBig->Click += gcnew System::EventHandler(this, &GameForm::cashButtonBig_Click);
			// 
			// upgradeButton
			// 
			this->upgradeButton->Location = System::Drawing::Point(632, 354);
			this->upgradeButton->Name = L"upgradeButton";
			this->upgradeButton->Size = System::Drawing::Size(127, 58);
			this->upgradeButton->TabIndex = 21;
			this->upgradeButton->Text = L"Upgrade";
			this->upgradeButton->UseVisualStyleBackColor = true;
			this->upgradeButton->Click += gcnew System::EventHandler(this, &GameForm::upgradeButton_Click);
			// 
			// deleteButton
			// 
			this->deleteButton->Location = System::Drawing::Point(632, 280);
			this->deleteButton->Name = L"deleteButton";
			this->deleteButton->Size = System::Drawing::Size(127, 58);
			this->deleteButton->TabIndex = 22;
			this->deleteButton->Text = L"Delete";
			this->deleteButton->UseVisualStyleBackColor = true;
			this->deleteButton->Click += gcnew System::EventHandler(this, &GameForm::deleteButton_Click);
			// 
			// upgradeAndDeleteLabel
			// 
			this->upgradeAndDeleteLabel->AutoSize = true;
			this->upgradeAndDeleteLabel->BackColor = System::Drawing::Color::SandyBrown;
			this->upgradeAndDeleteLabel->Location = System::Drawing::Point(581, 5);
			this->upgradeAndDeleteLabel->Name = L"upgradeAndDeleteLabel";
			this->upgradeAndDeleteLabel->Size = System::Drawing::Size(228, 68);
			this->upgradeAndDeleteLabel->TabIndex = 23;
			this->upgradeAndDeleteLabel->Text = L"Select a posicion\nand then the action";
			this->upgradeAndDeleteLabel->Click += gcnew System::EventHandler(this, &GameForm::label2_Click);
			// 
			// cashLabel
			// 
			this->cashLabel->AutoSize = true;
			this->cashLabel->BackColor = System::Drawing::Color::SandyBrown;
			this->cashLabel->Location = System::Drawing::Point(15, 178);
			this->cashLabel->Name = L"cashLabel";
			this->cashLabel->Size = System::Drawing::Size(0, 34);
			this->cashLabel->TabIndex = 24;
			// 
			// confirmBuyTurret
			// 
			this->confirmBuyTurret->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->confirmBuyTurret->Font = (gcnew System::Drawing::Font(L"Haettenschweiler", 19.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->confirmBuyTurret->Location = System::Drawing::Point(597, 375);
			this->confirmBuyTurret->Margin = System::Windows::Forms::Padding(5, 6, 5, 6);
			this->confirmBuyTurret->Name = L"confirmBuyTurret";
			this->confirmBuyTurret->Size = System::Drawing::Size(194, 79);
			this->confirmBuyTurret->TabIndex = 25;
			this->confirmBuyTurret->Text = L"Confirm Purchase";
			this->confirmBuyTurret->UseVisualStyleBackColor = true;
			this->confirmBuyTurret->Click += gcnew System::EventHandler(this, &GameForm::confirmBuyTurret_Click);
			// 
			// GameForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(13, 34);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Snow;
			this->ClientSize = System::Drawing::Size(782, 453);
			this->Controls->Add(this->cashLabel);
			this->Controls->Add(this->upgradeAndDeleteLabel);
			this->Controls->Add(this->cashButtonMedium);
			this->Controls->Add(this->cashButtonSmall);
			this->Controls->Add(this->selectTurretAndPosicionLabel);
			this->Controls->Add(this->turretListBox);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->getMoneyButton);
			this->Controls->Add(this->upgradeAndDeleteButton);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->buyTurretButton);
			this->Controls->Add(this->cashButtonBig);
			this->Controls->Add(this->confirmBuyTurret);
			this->Controls->Add(this->selectSpotListBox);
			this->Controls->Add(this->deleteButton);
			this->Controls->Add(this->upgradeButton);
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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		};
#pragma endregion

	private: System::Void UpdateScreen(void) {


		if (extraMenuOpened == 0) {

			buttonWidth = (int)(this->Width * 0.18); // calculate the new width of the button as 20% of the form's width
			buttonHeight = (int)(this->Height * 0.14); // calculate the new height of the button as 10% of the form's height

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

			pictureBoxesX = (int)(this->Width * 0.15);
			pictureBoxesY = (int)(this->Height * 0.3);

			label1->Location = System::Drawing::Point(207, 9);

			pictureBox2->Size = System::Drawing::Size(pictureBoxesX, pictureBoxesY);
			pictureBox2->Location = System::Drawing::Point(this->Width * 0.02, groupBoxY);

			pictureBox3->Size = System::Drawing::Size(pictureBoxesX, pictureBoxesY);
			pictureBox3->Location = System::Drawing::Point(this->Width * 0.22, groupBoxY);

			pictureBox4->Size = System::Drawing::Size(pictureBoxesX, pictureBoxesY);
			pictureBox4->Location = System::Drawing::Point(this->Width * 0.42, groupBoxY);

			pictureBox5->Size = System::Drawing::Size(pictureBoxesX, pictureBoxesY);
			pictureBox5->Location = System::Drawing::Point(this->Width * 0.62, groupBoxY);

			pictureBox6->Size = System::Drawing::Size(pictureBoxesX, pictureBoxesY);
			pictureBox6->Location = System::Drawing::Point(this->Width * 0.82, groupBoxY);

		}
		else {

			pictureBox7->Location = System::Drawing::Point(this->Width * 0.9 - 240, 0);

			buttonWidth = (int)(this->Width * 0.22); // calculate the new width of the button as 20% of the form's width
			buttonHeight = (int)(this->Height * 0.14); // calculate the new height of the button as 10% of the form's height

			groupBoxY = (int)(this->Height * 0.7);

			buttonX = (int)(this->Width * 0.014);
			buttonY = (int)(this->Height * 0.25);

			button2X = (int)(this->Width * 0.243);
			button2Y = (int)(this->Height * 0.25);

			button3X = (int)(this->Width * 0.476);
			button3Y = (int)(this->Height * 0.25);

			label1X = (int)(this->Width * 0.2);

			label2X = (int)(this->Width * 0.2);
			label2Y = (int)(this->Height * 0.22);

			label3X = (int)(this->Width * 0.2);
			label3Y = (int)(this->Height * 0.38);

			pictureBoxesX = (int)(this->Width * 0.12);
			pictureBoxesY = (int)(this->Height * 0.3);

			label1->Location = System::Drawing::Point(80, 9);

			pictureBox2->Size = System::Drawing::Size(pictureBoxesX, pictureBoxesY);
			pictureBox2->Location = System::Drawing::Point(this->Width * 0.02, groupBoxY);

			pictureBox3->Size = System::Drawing::Size(pictureBoxesX, pictureBoxesY);
			pictureBox3->Location = System::Drawing::Point(this->Width * 0.16, groupBoxY);

			pictureBox4->Size = System::Drawing::Size(pictureBoxesX, pictureBoxesY);
			pictureBox4->Location = System::Drawing::Point(this->Width * 0.3, groupBoxY);

			pictureBox5->Size = System::Drawing::Size(pictureBoxesX, pictureBoxesY);
			pictureBox5->Location = System::Drawing::Point(this->Width * 0.44, groupBoxY);

			pictureBox6->Size = System::Drawing::Size(pictureBoxesX, pictureBoxesY);
			pictureBox6->Location = System::Drawing::Point(this->Width * 0.58, groupBoxY);
		}

		turretListBox->Size = System::Drawing::Size(this->Width * 0.18, this->Height * 0.22);
		turretListBox->Location = System::Drawing::Point(this->Width * 0.78, this->Height * 0.25);

		selectSpotListBox->Size = System::Drawing::Size(this->Width * 0.18, this->Height * 0.32);

		if (listSpotBox == 1) {

			selectSpotListBox->Location = System::Drawing::Point(this->Width * 0.78, this->Height * 0.5);

		}
		else {

			selectSpotListBox->Location = System::Drawing::Point(this->Width * 0.78, this->Height * 0.22);

		}

		selectTurretAndPosicionLabel->Location = System::Drawing::Point(this->Width * 0.78, this->Height * 0.02);
		upgradeAndDeleteLabel->Location = System::Drawing::Point(this->Width * 0.78, this->Height * 0.02);

		buyTurretButton->Size = System::Drawing::Size(buttonWidth, buttonHeight); // set the size of the button to the new calculated size
		buyTurretButton->Location = System::Drawing::Point(buttonX, buttonY);

		confirmBuyTurret->Size = System::Drawing::Size(buttonWidth, buttonHeight); // set the size of the button to the new calculated size
		confirmBuyTurret->Location = System::Drawing::Point(this->Width * 0.76, this->Height * 0.8);

		upgradeAndDeleteButton->Size = System::Drawing::Size(buttonWidth, buttonHeight); // set the size of the button to the new calculated size
		upgradeAndDeleteButton->Location = System::Drawing::Point(button2X, button2Y);

		getMoneyButton->Size = System::Drawing::Size(buttonWidth, buttonHeight); // set the size of the button to the new calculated size
		getMoneyButton->Location = System::Drawing::Point(button3X, button3Y);

		cashButtonSmall->Size = System::Drawing::Size(buttonWidth, buttonHeight); // set the size of the button to the new calculated size
		cashButtonSmall->Location = System::Drawing::Point(this->Width * 0.76, this->Height * 0.1);

		cashButtonMedium->Size = System::Drawing::Size(buttonWidth, buttonHeight); // set the size of the button to the new calculated size
		cashButtonMedium->Location = System::Drawing::Point(this->Width * 0.76, this->Height * 0.35);

		cashButtonBig->Size = System::Drawing::Size(buttonWidth, buttonHeight); // set the size of the button to the new calculated size
		cashButtonBig->Location = System::Drawing::Point(this->Width * 0.76, this->Height * 0.6);

		deleteButton->Size = System::Drawing::Size(buttonWidth, buttonHeight); // set the size of the button to the new calculated size
		deleteButton->Location = System::Drawing::Point(this->Width * 0.76, this->Height * 0.6);

		upgradeButton->Size = System::Drawing::Size(buttonWidth, buttonHeight); // set the size of the button to the new calculated size
		upgradeButton->Location = System::Drawing::Point(this->Width * 0.76, this->Height * 0.78);

		cashLabel->Location = System::Drawing::Point(this->Width * 0.01, this->Height * 0.6);

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
		buyTurretButton->Font = gcnew System::Drawing::Font(buyTurretButton->Font->FontFamily, labelFontSize2);
		upgradeAndDeleteButton->Font = gcnew System::Drawing::Font(upgradeAndDeleteButton->Font->FontFamily, labelFontSize2);
		getMoneyButton->Font = gcnew System::Drawing::Font(getMoneyButton->Font->FontFamily, labelFontSize2);
		turretListBox->Font = gcnew System::Drawing::Font(getMoneyButton->Font->FontFamily, labelFontSize2);
		selectTurretAndPosicionLabel->Font = gcnew System::Drawing::Font(getMoneyButton->Font->FontFamily, labelFontSize2);
		selectSpotListBox->Font = gcnew System::Drawing::Font(getMoneyButton->Font->FontFamily, labelFontSize2);
		upgradeAndDeleteLabel->Font = gcnew System::Drawing::Font(getMoneyButton->Font->FontFamily, labelFontSize2);
		cashLabel->Font = gcnew System::Drawing::Font(getMoneyButton->Font->FontFamily, labelFontSize2);
		confirmBuyTurret->Font = gcnew System::Drawing::Font(getMoneyButton->Font->FontFamily, labelFontSize2);



		std::string cashString = std::to_string(cashGameForm);
		System::String^ mySystemString = gcnew System::String(cashString.c_str());
		this->cashLabel->Text = mySystemString;

		cashGameForm = static_cast<int>(cash);
		this->cashLabel->Text = cashGameForm.ToString() + "$";
	}

	private: System::Void GameForm_Resize(System::Object^ sender, System::EventArgs^ e) {

	UpdateScreen();

	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->MinimumSize = System::Drawing::Size(1200, 600);

	extraMenuOpened = 1;
	activatedMenuNumber = 3;

	pictureBox7->Show();
	//button1 actions
	turretListBox->Hide();
	selectTurretAndPosicionLabel->Hide();
	selectSpotListBox->Hide();
	confirmBuyTurret->Hide();
	//button2 actions
	upgradeButton->Hide();
	deleteButton->Hide();
	upgradeAndDeleteLabel->Hide();
	//button3 actions
	cashButtonSmall->Show();
	cashButtonMedium->Show();
	cashButtonBig->Show();

	UpdateScreen();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->MinimumSize = System::Drawing::Size(1200, 600);

	extraMenuOpened = 1;
	activatedMenuNumber = 2;
	listSpotBox = 2;


	//button1 actions
	pictureBox7->Show();
	turretListBox->Hide();
	selectTurretAndPosicionLabel->Hide();
	confirmBuyTurret->Hide();
	//button2 actions
	selectSpotListBox->Show();
	upgradeButton->Show();
	deleteButton->Show();
	upgradeAndDeleteLabel->Show();
	selectSpotListBox->Location = System::Drawing::Point(this->Width * 0.78, this->Height * 0.2);
	//button3 actions
	cashButtonSmall->Hide();
	cashButtonMedium->Hide();
	cashButtonBig->Hide();


	UpdateScreen();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->MinimumSize = System::Drawing::Size(1200, 600);

	extraMenuOpened = 1;
	activatedMenuNumber = 1;
	listSpotBox = 1;


	//button1 actions
	pictureBox7->Show();
	turretListBox->Show();
	selectTurretAndPosicionLabel->Show();
	selectSpotListBox->Show();
	confirmBuyTurret->Show();
	selectSpotListBox->Location = System::Drawing::Point(this->Width * 0.78, this->Height * 0.5);
	//button2 actions
	upgradeButton->Hide();
	deleteButton->Hide();
	upgradeAndDeleteLabel->Hide();
	//button3 actions
	cashButtonSmall->Hide();
	cashButtonMedium->Hide();
	cashButtonBig->Hide();


	UpdateScreen();
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

	this->Size = obj1->Size;
	this->Location = obj1->Location;

	pictureBox7->Hide();
	turretListBox->Hide();
	selectTurretAndPosicionLabel->Hide();
	selectSpotListBox->Hide();
	cashButtonSmall->Hide();
	cashButtonMedium->Hide();
	cashButtonBig->Hide();
	upgradeButton->Hide();
	deleteButton->Hide();
	upgradeAndDeleteLabel->Hide();
	confirmBuyTurret->Hide();

	this->pictureBox1->Image = Image::FromFile("00_assets/background.png");

	this->pictureBox2->Image = Image::FromFile("00_assets/earth_texture.png");
	this->pictureBox3->Image = Image::FromFile("00_assets/earth_texture.png");
	this->pictureBox4->Image = Image::FromFile("00_assets/earth_texture.png");
	this->pictureBox5->Image = Image::FromFile("00_assets/earth_texture.png");
	this->pictureBox6->Image = Image::FromFile("00_assets/earth_texture.png");

	UpdateScreen();

}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	extraMenuOpened = 0;

	this->MinimumSize = System::Drawing::Size(800, 500);

	pictureBox7->Hide();
	turretListBox->Hide();
	selectTurretAndPosicionLabel->Hide();
	selectSpotListBox->Hide();
	cashButtonSmall->Hide();
	cashButtonMedium->Hide();
	cashButtonBig->Hide();
	upgradeButton->Hide();
	deleteButton->Hide();
	upgradeAndDeleteLabel->Hide();
	confirmBuyTurret->Hide();

	UpdateScreen();
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void cashButtonSmall_Click(System::Object^ sender, System::EventArgs^ e) {
	accionMenu4ObtenerCash(ptr, 1);
	cashGameForm = static_cast<int>(cash);
	this->cashLabel->Text = cashGameForm.ToString() + "$";
}
private: System::Void cashButtonMedium_Click(System::Object^ sender, System::EventArgs^ e) {
	accionMenu4ObtenerCash(ptr, 2);
	cashGameForm = static_cast<int>(cash);
	this->cashLabel->Text = cashGameForm.ToString() + "$";
}
private: System::Void cashButtonBig_Click(System::Object^ sender, System::EventArgs^ e) {
	accionMenu4ObtenerCash(ptr, 3);
	cashGameForm = static_cast<int>(cash);
	this->cashLabel->Text = cashGameForm.ToString() + "$";
}
private: System::Void confirmBuyTurret_Click(System::Object^ sender, System::EventArgs^ e) {

	if (turretListBox->SelectedItem != NULL) {

		System::String^ turretBuyInfo = turretListBox->SelectedItem->ToString();
		System::String^ spotBuyInfo = selectSpotListBox->SelectedItem->ToString();
		int spotBuyInfoInt = spotBuyInfo[6];
		int turretBuyInfoInt = turretBuyInfo[0];

		canBuyTurret = accionMenu1ComprarTorreta(turretBuyInfo, spotBuyInfo, ptr);
		cashGameForm = static_cast<int>(cash);
		this->cashLabel->Text = cashGameForm.ToString() + "$";

		if (canBuyTurret == 1) {

			String^ imageName = "";
			String^ imagePath = "";

			switch (turretBuyInfoInt) {
			case 49:

				imageName = "basic.png";
				imagePath = "00_assets/" + imageName;
				break;
			case 50:

				imageName = "shooter.png";
				imagePath = "00_assets/" + imageName;
				break;
			case 51:

				imageName = "supercanon.png";
				imagePath = "00_assets/" + imageName;
				break;
			}

			switch (spotBuyInfoInt) {
			case 49:

				// load the image from the file and assign it to the Image property of the PictureBox control
				pictureBox2->Image = Image::FromFile(imagePath);

				break;
			case 50:

				// load the image from the file and assign it to the Image property of the PictureBox control
				pictureBox3->Image = Image::FromFile(imagePath);

				break;
			case 51:

				// load the image from the file and assign it to the Image property of the PictureBox control
				pictureBox4->Image = Image::FromFile(imagePath);
				break;
			case 52:

				// load the image from the file and assign it to the Image property of the PictureBox control
				pictureBox5->Image = Image::FromFile(imagePath);
				break;
			case 53:

				// load the image from the file and assign it to the Image property of the PictureBox control
				pictureBox6->Image = Image::FromFile(imagePath);
				break;
			}
		}

	}
	else{
		
	}

}
private: System::Void upgradeButton_Click(System::Object^ sender, System::EventArgs^ e) {

	System::String^ spotBuyInfo = selectSpotListBox->SelectedItem->ToString();
	int spotBuyInfoInt = spotBuyInfo[6];

	bool canUpgradeTurret = accionMenu3MejorarTorreta(spotBuyInfo, ptr);

	cashGameForm = static_cast<int>(cash);
	this->cashLabel->Text = cashGameForm.ToString() + "$";

	if (canUpgradeTurret == 1) {

		String^ imageName = "";
		String^ imagePath1 = "";
		String^ imagePath2 = "";

		string turretBuyInfoString = valueTurretBuyInfo(spotBuyInfo);
		const char* turretBuyInfoInt = turretBuyInfoString.c_str();
		char turretBuyInfoChar = turretBuyInfoInt[0];

		int turretLvlInfoInt = valueTurretLvlInfo(spotBuyInfo);

		switch (turretBuyInfoChar) {
		case 68:

			imageName = "basic";
			imagePath1 = "00_assets/" + imageName;
			break;
		case 83:

			imageName = "shooter";
			imagePath1 = "00_assets/" + imageName;
			break;
		case 66:

			imageName = "supercanon";
			imagePath1 = "00_assets/" + imageName;
			break;
		}

		switch (turretLvlInfoInt) {
		case 2:

			imageName = "lvl2.png";
			imagePath2 = imagePath1 + imageName;
			break;
		case 3:

			imageName = "lvl3.png";
			imagePath2 = imagePath1 + imageName;
			break;
		}

		switch (spotBuyInfoInt) {
		case 49:

			// load the image from the file and assign it to the Image property of the PictureBox control
			pictureBox2->Image = Image::FromFile(imagePath2);

			break;
		case 50:

			// load the image from the file and assign it to the Image property of the PictureBox control
			pictureBox3->Image = Image::FromFile(imagePath2);

			break;
		case 51:

			// load the image from the file and assign it to the Image property of the PictureBox control
			pictureBox4->Image = Image::FromFile(imagePath2);
			break;
		case 52:

			// load the image from the file and assign it to the Image property of the PictureBox control
			pictureBox5->Image = Image::FromFile(imagePath2);
			break;
		case 53:

			// load the image from the file and assign it to the Image property of the PictureBox control
			pictureBox6->Image = Image::FromFile(imagePath2);
			break;
		}
	}

}
private: System::Void deleteButton_Click(System::Object^ sender, System::EventArgs^ e) {

	System::String^ spotBuyInfo = selectSpotListBox->SelectedItem->ToString();
	int spotBuyInfoInt = spotBuyInfo[6];

	int canDeleteTurret = accionMenu2EliminarTorreta(spotBuyInfo, ptr);

	cashGameForm = static_cast<int>(cash);
	this->cashLabel->Text = cashGameForm.ToString() + "$";

	if (canDeleteTurret == 1) {

		switch (spotBuyInfoInt) {
		case 49:

			// load the image from the file and assign it to the Image property of the PictureBox control
			this->pictureBox2->Image = Image::FromFile("00_assets/earth_texture.png");

			break;
		case 50:

			// load the image from the file and assign it to the Image property of the PictureBox control
			this->pictureBox3->Image = Image::FromFile("00_assets/earth_texture.png");

			break;
		case 51:

			// load the image from the file and assign it to the Image property of the PictureBox control
			this->pictureBox4->Image = Image::FromFile("00_assets/earth_texture.png");
			break;
		case 52:

			// load the image from the file and assign it to the Image property of the PictureBox control
			this->pictureBox5->Image = Image::FromFile("00_assets/earth_texture.png");
			break;
		case 53:

			// load the image from the file and assign it to the Image property of the PictureBox control
			this->pictureBox6->Image = Image::FromFile("00_assets/earth_texture.png");
			break;
		}

	}

}
};
}
