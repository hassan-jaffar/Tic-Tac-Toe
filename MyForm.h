#pragma once

namespace TicTacToe {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	int turns = 1;
	bool occupied[10] = {false};
	bool twoplayers = false;
	bool vscomputer = false;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ title;








	private: System::Windows::Forms::Button^ exit;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ newgame;
	private: System::Windows::Forms::Button^ reset;
	private: System::Windows::Forms::Button^ computer;
	private: System::Windows::Forms::Button^ twoplayer;













	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ pos2;
	private: System::Windows::Forms::Button^ pos3;
	private: System::Windows::Forms::Button^ pos4;
	private: System::Windows::Forms::Button^ pos5;
	private: System::Windows::Forms::Button^ pos7;
	private: System::Windows::Forms::Button^ pos8;
	private: System::Windows::Forms::Button^ pos9;







	private: System::Windows::Forms::Button^ pos6;

	private: System::Windows::Forms::Button^ pos1;
	private: System::Windows::Forms::Label^ lblo;
	private: System::Windows::Forms::Label^ lblx;









	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->lblo = (gcnew System::Windows::Forms::Label());
			this->lblx = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pos2 = (gcnew System::Windows::Forms::Button());
			this->pos3 = (gcnew System::Windows::Forms::Button());
			this->pos4 = (gcnew System::Windows::Forms::Button());
			this->pos5 = (gcnew System::Windows::Forms::Button());
			this->pos7 = (gcnew System::Windows::Forms::Button());
			this->pos8 = (gcnew System::Windows::Forms::Button());
			this->pos9 = (gcnew System::Windows::Forms::Button());
			this->pos6 = (gcnew System::Windows::Forms::Button());
			this->pos1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->newgame = (gcnew System::Windows::Forms::Button());
			this->reset = (gcnew System::Windows::Forms::Button());
			this->computer = (gcnew System::Windows::Forms::Button());
			this->twoplayer = (gcnew System::Windows::Forms::Button());
			this->title = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel1->Controls->Add(this->lblo);
			this->panel1->Controls->Add(this->lblx);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->exit);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->newgame);
			this->panel1->Controls->Add(this->reset);
			this->panel1->Controls->Add(this->computer);
			this->panel1->Controls->Add(this->twoplayer);
			this->panel1->Location = System::Drawing::Point(13, 46);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(360, 314);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// lblo
			// 
			this->lblo->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lblo->AutoSize = true;
			this->lblo->Font = (gcnew System::Drawing::Font(L"Segoe Script", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblo->ForeColor = System::Drawing::Color::SpringGreen;
			this->lblo->Location = System::Drawing::Point(170, 264);
			this->lblo->Name = L"lblo";
			this->lblo->Size = System::Drawing::Size(35, 40);
			this->lblo->TabIndex = 21;
			this->lblo->Text = L"0";
			this->lblo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblx
			// 
			this->lblx->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->lblx->AutoSize = true;
			this->lblx->Font = (gcnew System::Drawing::Font(L"Segoe Script", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblx->ForeColor = System::Drawing::Color::Khaki;
			this->lblx->Location = System::Drawing::Point(43, 264);
			this->lblx->Name = L"lblx";
			this->lblx->Size = System::Drawing::Size(35, 40);
			this->lblx->TabIndex = 20;
			this->lblx->Text = L"0";
			this->lblx->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblx->Click += gcnew System::EventHandler(this, &MyForm::lblx_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::LightSlateGray;
			this->panel2->Controls->Add(this->pos2);
			this->panel2->Controls->Add(this->pos3);
			this->panel2->Controls->Add(this->pos4);
			this->panel2->Controls->Add(this->pos5);
			this->panel2->Controls->Add(this->pos7);
			this->panel2->Controls->Add(this->pos8);
			this->panel2->Controls->Add(this->pos9);
			this->panel2->Controls->Add(this->pos6);
			this->panel2->Controls->Add(this->pos1);
			this->panel2->Location = System::Drawing::Point(6, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(230, 228);
			this->panel2->TabIndex = 19;
			// 
			// pos2
			// 
			this->pos2->BackColor = System::Drawing::Color::LightSlateGray;
			this->pos2->Font = (gcnew System::Drawing::Font(L"Algerian", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pos2->ForeColor = System::Drawing::Color::DarkOrange;
			this->pos2->Location = System::Drawing::Point(78, 0);
			this->pos2->Name = L"pos2";
			this->pos2->Size = System::Drawing::Size(72, 72);
			this->pos2->TabIndex = 35;
			this->pos2->UseVisualStyleBackColor = false;
			this->pos2->Click += gcnew System::EventHandler(this, &MyForm::pos2_Click);
			// 
			// pos3
			// 
			this->pos3->BackColor = System::Drawing::Color::LightSlateGray;
			this->pos3->Font = (gcnew System::Drawing::Font(L"Algerian", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pos3->ForeColor = System::Drawing::Color::DarkOrange;
			this->pos3->Location = System::Drawing::Point(158, 0);
			this->pos3->Name = L"pos3";
			this->pos3->Size = System::Drawing::Size(72, 72);
			this->pos3->TabIndex = 34;
			this->pos3->UseVisualStyleBackColor = false;
			this->pos3->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// pos4
			// 
			this->pos4->BackColor = System::Drawing::Color::LightSlateGray;
			this->pos4->Font = (gcnew System::Drawing::Font(L"Algerian", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pos4->ForeColor = System::Drawing::Color::DarkOrange;
			this->pos4->Location = System::Drawing::Point(0, 78);
			this->pos4->Name = L"pos4";
			this->pos4->Size = System::Drawing::Size(72, 72);
			this->pos4->TabIndex = 33;
			this->pos4->UseVisualStyleBackColor = false;
			this->pos4->Click += gcnew System::EventHandler(this, &MyForm::pos4_Click);
			// 
			// pos5
			// 
			this->pos5->BackColor = System::Drawing::Color::LightSlateGray;
			this->pos5->Font = (gcnew System::Drawing::Font(L"Algerian", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pos5->ForeColor = System::Drawing::Color::DarkOrange;
			this->pos5->Location = System::Drawing::Point(78, 78);
			this->pos5->Name = L"pos5";
			this->pos5->Size = System::Drawing::Size(72, 72);
			this->pos5->TabIndex = 32;
			this->pos5->UseVisualStyleBackColor = false;
			this->pos5->Click += gcnew System::EventHandler(this, &MyForm::pos5_Click);
			// 
			// pos7
			// 
			this->pos7->BackColor = System::Drawing::Color::LightSlateGray;
			this->pos7->Font = (gcnew System::Drawing::Font(L"Algerian", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pos7->ForeColor = System::Drawing::Color::DarkOrange;
			this->pos7->Location = System::Drawing::Point(0, 156);
			this->pos7->Name = L"pos7";
			this->pos7->Size = System::Drawing::Size(72, 72);
			this->pos7->TabIndex = 31;
			this->pos7->UseVisualStyleBackColor = false;
			this->pos7->Click += gcnew System::EventHandler(this, &MyForm::pos7_Click);
			// 
			// pos8
			// 
			this->pos8->BackColor = System::Drawing::Color::LightSlateGray;
			this->pos8->Font = (gcnew System::Drawing::Font(L"Algerian", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pos8->ForeColor = System::Drawing::Color::DarkOrange;
			this->pos8->Location = System::Drawing::Point(78, 157);
			this->pos8->Name = L"pos8";
			this->pos8->Size = System::Drawing::Size(72, 72);
			this->pos8->TabIndex = 30;
			this->pos8->UseVisualStyleBackColor = false;
			this->pos8->Click += gcnew System::EventHandler(this, &MyForm::pos8_Click);
			// 
			// pos9
			// 
			this->pos9->BackColor = System::Drawing::Color::LightSlateGray;
			this->pos9->Font = (gcnew System::Drawing::Font(L"Algerian", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pos9->ForeColor = System::Drawing::Color::DarkOrange;
			this->pos9->Location = System::Drawing::Point(158, 156);
			this->pos9->Name = L"pos9";
			this->pos9->Size = System::Drawing::Size(72, 72);
			this->pos9->TabIndex = 29;
			this->pos9->UseVisualStyleBackColor = false;
			this->pos9->Click += gcnew System::EventHandler(this, &MyForm::pos9_Click);
			// 
			// pos6
			// 
			this->pos6->BackColor = System::Drawing::Color::LightSlateGray;
			this->pos6->Font = (gcnew System::Drawing::Font(L"Algerian", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pos6->ForeColor = System::Drawing::Color::DarkOrange;
			this->pos6->Location = System::Drawing::Point(158, 78);
			this->pos6->Name = L"pos6";
			this->pos6->Size = System::Drawing::Size(72, 72);
			this->pos6->TabIndex = 28;
			this->pos6->UseVisualStyleBackColor = false;
			this->pos6->Click += gcnew System::EventHandler(this, &MyForm::pos6_Click);
			// 
			// pos1
			// 
			this->pos1->BackColor = System::Drawing::Color::LightSlateGray;
			this->pos1->Font = (gcnew System::Drawing::Font(L"Algerian", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pos1->ForeColor = System::Drawing::Color::DarkOrange;
			this->pos1->Location = System::Drawing::Point(0, 0);
			this->pos1->Name = L"pos1";
			this->pos1->Size = System::Drawing::Size(72, 72);
			this->pos1->TabIndex = 27;
			this->pos1->UseVisualStyleBackColor = false;
			this->pos1->Click += gcnew System::EventHandler(this, &MyForm::pos1_Click_1);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Goudy Stout", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::SpringGreen;
			this->label2->Location = System::Drawing::Point(129, 244);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 16);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Player O";
			// 
			// exit
			// 
			this->exit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->exit->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->exit->Font = (gcnew System::Drawing::Font(L"Segoe Script", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->exit->ForeColor = System::Drawing::Color::Navy;
			this->exit->Location = System::Drawing::Point(253, 248);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(104, 63);
			this->exit->TabIndex = 17;
			this->exit->Text = L"EXIT";
			this->exit->UseVisualStyleBackColor = false;
			this->exit->Click += gcnew System::EventHandler(this, &MyForm::exit_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Goudy Stout", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Khaki;
			this->label1->Location = System::Drawing::Point(3, 244);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(118, 16);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Player X";
			// 
			// newgame
			// 
			this->newgame->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->newgame->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->newgame->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->newgame->ForeColor = System::Drawing::Color::Navy;
			this->newgame->Location = System::Drawing::Point(253, 184);
			this->newgame->Name = L"newgame";
			this->newgame->Size = System::Drawing::Size(104, 48);
			this->newgame->TabIndex = 12;
			this->newgame->Text = L"New Game";
			this->newgame->UseVisualStyleBackColor = false;
			this->newgame->Click += gcnew System::EventHandler(this, &MyForm::newgame_Click);
			// 
			// reset
			// 
			this->reset->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->reset->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->reset->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->reset->ForeColor = System::Drawing::Color::Navy;
			this->reset->Location = System::Drawing::Point(253, 130);
			this->reset->Name = L"reset";
			this->reset->Size = System::Drawing::Size(104, 48);
			this->reset->TabIndex = 11;
			this->reset->Text = L"Reset";
			this->reset->UseVisualStyleBackColor = false;
			this->reset->Click += gcnew System::EventHandler(this, &MyForm::reset_Click);
			// 
			// computer
			// 
			this->computer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->computer->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->computer->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->computer->ForeColor = System::Drawing::Color::Navy;
			this->computer->Location = System::Drawing::Point(253, 58);
			this->computer->Name = L"computer";
			this->computer->Size = System::Drawing::Size(104, 48);
			this->computer->TabIndex = 10;
			this->computer->Text = L"vs Computer";
			this->computer->UseVisualStyleBackColor = false;
			this->computer->Click += gcnew System::EventHandler(this, &MyForm::computer_Click);
			// 
			// twoplayer
			// 
			this->twoplayer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->twoplayer->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->twoplayer->Font = (gcnew System::Drawing::Font(L"Perpetua Titling MT", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->twoplayer->ForeColor = System::Drawing::Color::Navy;
			this->twoplayer->Location = System::Drawing::Point(253, 4);
			this->twoplayer->Name = L"twoplayer";
			this->twoplayer->Size = System::Drawing::Size(104, 48);
			this->twoplayer->TabIndex = 9;
			this->twoplayer->Text = L"2 Player";
			this->twoplayer->UseVisualStyleBackColor = false;
			this->twoplayer->Click += gcnew System::EventHandler(this, &MyForm::twoplayer_Click);
			// 
			// title
			// 
			this->title->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->title->BackColor = System::Drawing::Color::MediumTurquoise;
			this->title->Font = (gcnew System::Drawing::Font(L"Segoe Script", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->title->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->title->Location = System::Drawing::Point(12, 2);
			this->title->Name = L"title";
			this->title->Size = System::Drawing::Size(361, 38);
			this->title->TabIndex = 1;
			this->title->Text = L"TIC TAC TOE";
			this->title->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(385, 372);
			this->Controls->Add(this->title);
			this->Controls->Add(this->panel1);
			this->MinimumSize = System::Drawing::Size(401, 411);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
	   int inc = 0;

	   void clear()
	   {
		   pos1->Text = "";
		   pos2->Text = "";
		   pos3->Text = "";
		   pos4->Text = "";
		   pos5->Text = "";
		   pos6->Text = "";
		   pos7->Text = "";
		   pos8->Text = "";
		   pos9->Text = "";
		   pos1->BackColor = System::Drawing::Color::LightSlateGray;
		   pos2->BackColor = System::Drawing::Color::LightSlateGray;
		   pos3->BackColor = System::Drawing::Color::LightSlateGray;
		   pos4->BackColor = System::Drawing::Color::LightSlateGray;
		   pos5->BackColor = System::Drawing::Color::LightSlateGray;
		   pos6->BackColor = System::Drawing::Color::LightSlateGray;
		   pos7->BackColor = System::Drawing::Color::LightSlateGray;
		   pos8->BackColor = System::Drawing::Color::LightSlateGray;
		   pos9->BackColor = System::Drawing::Color::LightSlateGray;
		   turns = 1;
		   for (int i = 1; i < 10; i++)
		   {
			   occupied[i] = false;
		   }
		   if (vscomputer == true)
		   {
			   pos5->Text = "X";
			   occupied[5] = true;
			   turns++;
		   }
	   }

	   void win()
	   {
		   //win conditions for X

		   if (pos1->Text == "X" && pos2->Text == "X" && pos3->Text == "X")
		   {
			   pos1->BackColor = System::Drawing::Color::Aqua;
			   pos2->BackColor = System::Drawing::Color::Aqua;
			   pos3->BackColor = System::Drawing::Color::Aqua;
			   MessageBox::Show("Player X won the match", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   inc = int::Parse(lblx->Text);
			   lblx->Text = Convert::ToString(inc + 1);
			   clear();
		   }
		   else if (pos4->Text == "X" && pos5->Text == "X" && pos6->Text == "X")
		   {
			   pos4->BackColor = System::Drawing::Color::Aqua;
			   pos5->BackColor = System::Drawing::Color::Aqua;
			   pos6->BackColor = System::Drawing::Color::Aqua;
			   MessageBox::Show("Player X won the match", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   inc = int::Parse(lblx->Text);
			   lblx->Text = Convert::ToString(inc + 1);
			   clear();
		   }
		   else if (pos7->Text == "X" && pos8->Text == "X" && pos9->Text == "X")
		   {
			   pos7->BackColor = System::Drawing::Color::Aqua;
			   pos8->BackColor = System::Drawing::Color::Aqua;
			   pos9->BackColor = System::Drawing::Color::Aqua;
			   MessageBox::Show("Player X won the match", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   inc = int::Parse(lblx->Text);
			   lblx->Text = Convert::ToString(inc + 1);
			   clear();
		   }
		   else if (pos1->Text == "X" && pos4->Text == "X" && pos7->Text == "X")
		   {
			   pos1->BackColor = System::Drawing::Color::Aqua;
			   pos4->BackColor = System::Drawing::Color::Aqua;
			   pos7->BackColor = System::Drawing::Color::Aqua;
			   MessageBox::Show("Player X won the match", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   inc = int::Parse(lblx->Text);
			   lblx->Text = Convert::ToString(inc + 1);
			   clear();
		   }
		   else if (pos2->Text == "X" && pos5->Text == "X" && pos8->Text == "X")
		   {
			   pos2->BackColor = System::Drawing::Color::Aqua;
			   pos5->BackColor = System::Drawing::Color::Aqua;
			   pos8->BackColor = System::Drawing::Color::Aqua;
			   MessageBox::Show("Player X won the match", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   inc = int::Parse(lblx->Text);
			   lblx->Text = Convert::ToString(inc + 1);
			   clear();
		   }
		   else if (pos3->Text == "X" && pos6->Text == "X" && pos9->Text == "X")
		   {
			   pos3->BackColor = System::Drawing::Color::Aqua;
			   pos6->BackColor = System::Drawing::Color::Aqua;
			   pos9->BackColor = System::Drawing::Color::Aqua;
			   MessageBox::Show("Player X won the match", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   inc = int::Parse(lblx->Text);
			   lblx->Text = Convert::ToString(inc + 1);
			   clear();
		   }
		   else if (pos1->Text == "X" && pos5->Text == "X" && pos9->Text == "X")
		   {
			   pos1->BackColor = System::Drawing::Color::Aqua;
			   pos5->BackColor = System::Drawing::Color::Aqua;
			   pos9->BackColor = System::Drawing::Color::Aqua;
			   MessageBox::Show("Player X won the match", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   inc = int::Parse(lblx->Text);
			   lblx->Text = Convert::ToString(inc + 1);
			   clear();
		   }
		   else if (pos3->Text == "X" && pos5->Text == "X" && pos7->Text == "X")
		   {
			   pos3->BackColor = System::Drawing::Color::Aqua;
			   pos5->BackColor = System::Drawing::Color::Aqua;
			   pos7->BackColor = System::Drawing::Color::Aqua;
			   MessageBox::Show("Player X won the match", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   inc = int::Parse(lblx->Text);
			   lblx->Text = Convert::ToString(inc + 1);
			   clear();
		   }
		   
		   //win conditions for O

		   else if (pos1->Text == "O" && pos2->Text == "O" && pos3->Text == "O")
		   {
			   pos1->BackColor = System::Drawing::Color::Aqua;
			   pos2->BackColor = System::Drawing::Color::Aqua;
			   pos3->BackColor = System::Drawing::Color::Aqua;
			   MessageBox::Show("Player O won the match", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   inc = int::Parse(lblo->Text);
			   lblo->Text = Convert::ToString(inc + 1);
			   clear();
		   }
		   else if (pos4->Text == "O" && pos5->Text == "O" && pos6->Text == "O")
		   {
			   pos4->BackColor = System::Drawing::Color::Aqua;
			   pos5->BackColor = System::Drawing::Color::Aqua;
			   pos6->BackColor = System::Drawing::Color::Aqua;
			   MessageBox::Show("Player O won the match", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   inc = int::Parse(lblo->Text);
			   lblo->Text = Convert::ToString(inc + 1);
			   clear();
		   }
		   else if (pos7->Text == "O" && pos8->Text == "O" && pos9->Text == "O")
		   {
			   pos7->BackColor = System::Drawing::Color::Aqua;
			   pos8->BackColor = System::Drawing::Color::Aqua;
			   pos9->BackColor = System::Drawing::Color::Aqua;
			   MessageBox::Show("Player O won the match", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   inc = int::Parse(lblo->Text);
			   lblo->Text = Convert::ToString(inc + 1);
			   clear();
		   }
		   else if (pos1->Text == "O" && pos4->Text == "O" && pos7->Text == "O")
		   {
			   pos1->BackColor = System::Drawing::Color::Aqua;
			   pos4->BackColor = System::Drawing::Color::Aqua;
			   pos7->BackColor = System::Drawing::Color::Aqua;
			   MessageBox::Show("Player O won the match", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   inc = int::Parse(lblo->Text);
			   lblo->Text = Convert::ToString(inc + 1);
			   clear();
		   }
		   else if (pos2->Text == "O" && pos5->Text == "O" && pos8->Text == "O")
		   {
			   pos2->BackColor = System::Drawing::Color::Aqua;
			   pos5->BackColor = System::Drawing::Color::Aqua;
			   pos8->BackColor = System::Drawing::Color::Aqua;
			   MessageBox::Show("Player O won the match", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   inc = int::Parse(lblo->Text);
			   lblo->Text = Convert::ToString(inc + 1);
			   clear();
		   }
		   else if (pos3->Text == "O" && pos6->Text == "O" && pos9->Text == "O")
		   {
			   pos3->BackColor = System::Drawing::Color::Aqua;
			   pos6->BackColor = System::Drawing::Color::Aqua;
			   pos9->BackColor = System::Drawing::Color::Aqua;
			   MessageBox::Show("Player O won the match", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   inc = int::Parse(lblo->Text);
			   lblo->Text = Convert::ToString(inc + 1);
			   clear();
		   }
		   else if (pos1->Text == "O" && pos5->Text == "O" && pos9->Text == "O")
		   {
			   pos1->BackColor = System::Drawing::Color::Aqua;
			   pos5->BackColor = System::Drawing::Color::Aqua;
			   pos9->BackColor = System::Drawing::Color::Aqua;
			   MessageBox::Show("Player O won the match", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   inc = int::Parse(lblo->Text);
			   lblo->Text = Convert::ToString(inc + 1);
			   clear();
		   }
		   else if (pos3->Text == "O" && pos5->Text == "O" && pos7->Text == "O")
		   {
			   pos3->BackColor = System::Drawing::Color::Aqua;
			   pos5->BackColor = System::Drawing::Color::Aqua;
			   pos7->BackColor = System::Drawing::Color::Aqua;
			   MessageBox::Show("Player O won the match", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   inc = int::Parse(lblo->Text);
			   lblo->Text = Convert::ToString(inc + 1);
			   clear();
		   }
		   else if(turns == 10)
		   {
		   MessageBox::Show("There is a Tie", "Tic Tac Toe", MessageBoxButtons::OK, MessageBoxIcon::Information);
		   clear();
           }
	   }

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {


}

	   bool computermoves()
	   {
		   if (pos1->Text == "X" && occupied[9] == false)
		   {
			   pos9->Text = "X";
			   turns++;
			   occupied[9] = true;
			   win();
			   return true;
		   }
		   else if (pos9->Text == "X" && occupied[1] == false)
		   {
			   pos1->Text = "X";
			   turns++;
			   occupied[1] = true;
			   win();
			   return true;
		   }
		   else if (pos3->Text == "X" && occupied[7] == false)
		   {
			   pos7->Text = "X";
			   turns++;
			   occupied[7] = true;
			   win();
			   return true;
		   }
		   else if (pos7->Text == "X" && occupied[3] == false)
		   {
			   pos3->Text = "X";
			   turns++;
			   occupied[3] = true;
			   win();
			   return true;
		   }
		   else if (pos4->Text == "X" && occupied[6] == false)
		   {
			   pos6->Text = "X";
			   turns++;
			   occupied[6] = true;
			   win();
			   return true;
		   }
		   else if (pos6->Text == "X" && occupied[4] == false)
		   {
			   pos4->Text = "X";
			   turns++;
			   occupied[4] = true;
			   win();
			   return true;
		   }
		   else if (pos2->Text == "X" && occupied[8] == false)
		   {
			   pos8->Text = "X";
			   turns++;
			   occupied[8] = true;
			   win();
			   return true;
		   }
		   else if (pos8->Text == "X" && occupied[2] == false)
		   {
			   pos2->Text = "X";
			   turns++;
			   occupied[8] = true;
			   win();
			   return true;
		   }
		   return false;
	   }

	   bool won = false;

private: System::Void pos1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (occupied[1] == false)
	{
		if (turns % 2 == 1)
		{
			pos1->Text = "X";
		}
		else
		{
			pos1->Text = "O";
		}
		occupied[1] = true;
		turns++;
		win();
	}
	if (vscomputer == true && turns % 2 == 1)
	{
		won = computermoves();
		if (won == false)
		{
			if (occupied[9] == false && pos1->Text == "X")
			{
				pos9->Text = "X";
				occupied[9] = true;
				turns++;
				win();
			}
			else if (occupied[2] == false)
			{
				pos2->Text = "X";
				occupied[2] = true;
				turns++;
				win();
			}
			else if (occupied[4] == false)
			{
				pos4->Text = "X";
				occupied[4] = true;
				turns++;
				win();
			}
			else if (occupied[7] == false)
			{
				pos7->Text = "X";
				occupied[7] = true;
				turns++;
				win();
			}
			else if (occupied[3] == false)
			{
				pos3->Text = "X";
				occupied[3] = true;
				turns++;
				win();
			}
			else if (occupied[6] == false)
			{
				pos6->Text = "X";
				occupied[6] = true;
				turns++;
				win();
			}
			else if (occupied[8] == false)
			{
				pos8->Text = "X";
				occupied[8] = true;
				turns++;
				win();
			}
		}
	}

}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (occupied[3] == false)
	{
		if (turns % 2 == 1)
		{
			pos3->Text = "X";
		}
		else
		{
			pos3->Text = "O";
		}
		occupied[3] = true;
		turns++;
		win();
	}
	if (vscomputer == true && turns % 2 == 1)
	{
		won = computermoves();
		if (won == false)
		{
			if (occupied[7] == false && pos3->Text == "X")
			{
				pos7->Text = "X";
				occupied[7] = true;
				turns++;
				win();
			}
			else if (occupied[2] == false)
			{
				pos2->Text = "X";
				occupied[2] = true;
				turns++;
				win();
			}
			else if (occupied[6] == false)
			{
				pos6->Text = "X";
				occupied[6] = true;
				turns++;
				win();
			}
			else if (occupied[9] == false)
			{
				pos9->Text = "X";
				occupied[9] = true;
				turns++;
				win();
			}
			else if (occupied[1] == false)
			{
				pos1->Text = "X";
				occupied[1] = true;
				turns++;
				win();
			}
			else if (occupied[4] == false)
			{
				pos4->Text = "X";
				occupied[4] = true;
				turns++;
				win();
			}
			else if (occupied[8] == false)
			{
				pos8->Text = "X";
				occupied[8] = true;
				turns++;
				win();
			}
		}
	}
}
private: System::Void lblx_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void reset_Click(System::Object^ sender, System::EventArgs^ e) {
	clear();
}
private: System::Void newgame_Click(System::Object^ sender, System::EventArgs^ e) {
	lblx->Text = "0";
	lblo->Text = "0";
	twoplayers = false;
	vscomputer = false;
	clear();
}
private: System::Void pos2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (occupied[2] == false)
	{
		if (turns % 2 == 1)
		{
			pos2->Text = "X";
		}
		else
		{
			pos2->Text = "O";
		}
		occupied[2] = true;
		turns++;
		win();
	}
	if (vscomputer == true && turns % 2 == 1)
	{
		won = computermoves();
		if (won == false)
		{
			if (occupied[8] == false && pos2->Text == "X")
			{
				pos8->Text = "X";
				occupied[8] = true;
				turns++;
				win();
			}
			else if (occupied[1] == false)
			{
				pos1->Text = "X";
				occupied[1] = true;
				turns++;
				win();
			}
			else if (occupied[3] == false)
			{
				pos3->Text = "X";
				occupied[3] = true;
				turns++;
				win();
			}
			else if (occupied[4] == false)
			{
				pos4->Text = "X";
				occupied[4] = true;
				turns++;
				win();
			}
			else if (occupied[6] == false)
			{
				pos6->Text = "X";
				occupied[6] = true;
				turns++;
				win();
			}
			else if (occupied[9] == false)
			{
				pos9->Text = "X";
				occupied[9] = true;
				turns++;
				win();
			}
			else if (occupied[7] == false)
			{
				pos7->Text = "X";
				occupied[7] = true;
				turns++;
				win();
			}
		}
	}
}
private: System::Void pos4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (occupied[4] == false)
	{
		if (turns % 2 == 1)
		{
			pos4->Text = "X";
		}
		else
		{
			pos4->Text = "O";
		}
		occupied[4] = true;
		turns++;
		win();
	}
	if (vscomputer == true && turns % 2 == 1)
	{
		won = computermoves();
		if (won == false)
		{
			if (occupied[6] == false && pos4->Text == "X")
			{
				pos6->Text = "X";
				occupied[6] = true;
				turns++;
				win();
			}
			else if (occupied[1] == false)
			{
				pos1->Text = "X";
				occupied[1] = true;
				turns++;
				win();
			}
			else if (occupied[7] == false)
			{
				pos7->Text = "X";
				occupied[7] = true;
				turns++;
				win();
			}
			else if (occupied[2] == false)
			{
				pos2->Text = "X";
				occupied[2] = true;
				turns++;
				win();
			}
			else if (occupied[8] == false)
			{
				pos8->Text = "X";
				occupied[8] = true;
				turns++;
				win();
			}
			else if (occupied[9] == false)
			{
				pos9->Text = "X";
				occupied[9] = true;
				turns++;
				win();
			}
			else if (occupied[3] == false)
			{
				pos3->Text = "X";
				occupied[3] = true;
				turns++;
				win();
			}
		}
	}
}
private: System::Void pos5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (occupied[5] == false)
	{
		if (turns % 2 == 1)
		{
			pos5->Text = "X";
		}
		else
		{
			pos5->Text = "O";
		}
		occupied[5] = true;
		turns++;
		win();
	}
}
private: System::Void pos6_Click(System::Object^ sender, System::EventArgs^ e) {
	if (occupied[6] == false)
	{
		if (turns % 2 == 1)
		{
			pos6->Text = "X";
		}
		else
		{
			pos6->Text = "O";
		}
		occupied[6] = true;
		turns++;
		win();
	}
	if (vscomputer == true && turns % 2 == 1)
	{
		won = computermoves();
		if (won == false)
		{
			if (occupied[4] == false && pos6->Text == "X")
			{
				pos4->Text = "X";
				occupied[4] = true;
				turns++;
				win();
			}
			else if (occupied[3] == false)
			{
				pos3->Text = "X";
				occupied[3] = true;
				turns++;
				win();
			}
			else if (occupied[9] == false)
			{
				pos9->Text = "X";
				occupied[9] = true;
				turns++;
				win();
			}
			else if (occupied[1] == false)
			{
				pos1->Text = "X";
				occupied[1] = true;
				turns++;
				win();
			}
			else if (occupied[8] == false)
			{
				pos8->Text = "X";
				occupied[8] = true;
				turns++;
				win();
			}
			else if (occupied[2] == false)
			{
				pos2->Text = "X";
				occupied[2] = true;
				turns++;
				win();
			}
			else if (occupied[7] == false)
			{
				pos7->Text = "X";
				occupied[7] = true;
				turns++;
				win();
			}
		}
	}
}
private: System::Void pos7_Click(System::Object^ sender, System::EventArgs^ e) {
	if (occupied[7] == false)
	{
		if (turns % 2 == 1)
		{
			pos7->Text = "X";
		}
		else
		{
			pos7->Text = "O";
		}
		occupied[7] = true;
		turns++;
		win();
	}
	if (vscomputer == true && turns % 2 == 1)
	{
		won = computermoves();
		if (won == false)
		{
			if (occupied[3] == false && pos3->Text == "X")
			{
				pos3->Text = "X";
				occupied[3] = true;
				turns++;
				win();
			}
			else if (occupied[8] == false)
			{
				pos8->Text = "X";
				occupied[8] = true;
				turns++;
				win();
			}
			else if (occupied[4] == false)
			{
				pos4->Text = "X";
				occupied[4] = true;
				turns++;
				win();
			}
			else if (occupied[9] == false)
			{
				pos9->Text = "X";
				occupied[9] = true;
				turns++;
				win();
			}
			else if (occupied[1] == false)
			{
				pos1->Text = "X";
				occupied[1] = true;
				turns++;
				win();
			}
			else if (occupied[2] == false)
			{
				pos2->Text = "X";
				occupied[2] = true;
				turns++;
				win();
			}
			else if (occupied[6] == false)
			{
				pos6->Text = "X";
				occupied[6] = true;
				turns++;
				win();
			}
		}
	}
}
private: System::Void pos8_Click(System::Object^ sender, System::EventArgs^ e) {
	if (occupied[8] == false)
	{
		if (turns % 2 == 1)
		{
			pos8->Text = "X";
		}
		else
		{
			pos8->Text = "O";
		}
		occupied[8] = true;
		turns++;
		win();
	}
	if (vscomputer == true && turns % 2 == 1)
	{
		won = computermoves();
		if (won == false)
		{
			if (occupied[2] == false && pos8->Text == "X")
			{
				pos2->Text = "X";
				occupied[2] = true;
				turns++;
				win();
			}
			else if (occupied[9] == false)
			{
				pos9->Text = "X";
				occupied[9] = true;
				turns++;
				win();
			}
			else if (occupied[7] == false)
			{
				pos7->Text = "X";
				occupied[7] = true;
				turns++;
				win();
			}
			else if (occupied[6] == false)
			{
				pos6->Text = "X";
				occupied[6] = true;
				turns++;
				win();
			}
			else if (occupied[4] == false)
			{
				pos4->Text = "X";
				occupied[4] = true;
				turns++;
				win();
			}
			else if (occupied[1] == false)
			{
				pos1->Text = "X";
				occupied[1] = true;
				turns++;
				win();
			}
			else if (occupied[3] == false)
			{
				pos3->Text = "X";
				occupied[3] = true;
				turns++;
				win();
			}
		}
	}
}
private: System::Void pos9_Click(System::Object^ sender, System::EventArgs^ e) {
	if (occupied[9] == false)
	{
		if (turns % 2 == 1)
		{
			pos9->Text = "X";
		}
		else
		{
			pos9->Text = "O";
		}
		occupied[9] = true;
		turns++;
		win();
	}
	if (vscomputer == true && turns % 2 == 1)
	{
		won = computermoves();
		if (won == false)
		{
			if (occupied[1] == false && pos9->Text == "X")
			{
				pos1->Text = "X";
				occupied[1] = true;
				turns++;
				win();
			}
			else if (occupied[8] == false)
			{
				pos8->Text = "X";
				occupied[8] = true;
				turns++;
				win();
			}
			else if (occupied[6] == false)
			{
				pos6->Text = "X";
				occupied[6] = true;
				turns++;
				win();
			}
			else if (occupied[7] == false)
			{
				pos7->Text = "X";
				occupied[7] = true;
				turns++;
				win();
			}
			else if (occupied[3] == false)
			{
				pos3->Text = "X";
				occupied[3] = true;
				turns++;
				win();
			}
			else if (occupied[2] == false)
			{
				pos2->Text = "X";
				occupied[2] = true;
				turns++;
				win();
			}
			else if (occupied[4] == false)
			{
				pos4->Text = "X";
				occupied[4] = true;
				turns++;
				win();
			}
		}
	}
}
private: System::Void twoplayer_Click(System::Object^ sender, System::EventArgs^ e) {
	twoplayers = true;
	vscomputer = false;
	lblx->Text = "0";
	lblo->Text = "0";
	clear();
}
private: System::Void computer_Click(System::Object^ sender, System::EventArgs^ e) {
	vscomputer = true;
	twoplayers = false;
	lblx->Text = "0";
	lblo->Text = "0";
	pos5->Text = "X";
	occupied[5] = true;
	turns++;
	clear();
}
private: System::Void exit_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
