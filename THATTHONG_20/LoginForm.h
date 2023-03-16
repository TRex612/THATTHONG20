#pragma once
#include "MainFormThat.h"

namespace THATTHONG20 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:


	private: System::Windows::Forms::Button^ Cancellogin;
	private: System::Windows::Forms::Button^ OKlogin;
	private: System::Windows::Forms::TextBox^ Passlogin;
	private: System::Windows::Forms::TextBox^ IDlogin;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->Cancellogin = (gcnew System::Windows::Forms::Button());
			this->OKlogin = (gcnew System::Windows::Forms::Button());
			this->Passlogin = (gcnew System::Windows::Forms::TextBox());
			this->IDlogin = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// Cancellogin
			// 
			this->Cancellogin->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Cancellogin->BackColor = System::Drawing::Color::Transparent;
			this->Cancellogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cancellogin->ForeColor = System::Drawing::Color::Transparent;
			this->Cancellogin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Cancellogin.Image")));
			this->Cancellogin->Location = System::Drawing::Point(863, 472);
			this->Cancellogin->Margin = System::Windows::Forms::Padding(4);
			this->Cancellogin->Name = L"Cancellogin";
			this->Cancellogin->Size = System::Drawing::Size(105, 49);
			this->Cancellogin->TabIndex = 14;
			this->Cancellogin->UseVisualStyleBackColor = false;
			this->Cancellogin->Click += gcnew System::EventHandler(this, &LoginForm::Cancellogin_Click);
			// 
			// OKlogin
			// 
			this->OKlogin->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->OKlogin->BackColor = System::Drawing::SystemColors::WindowFrame;
			this->OKlogin->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"OKlogin.BackgroundImage")));
			this->OKlogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OKlogin->ForeColor = System::Drawing::Color::Transparent;
			this->OKlogin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"OKlogin.Image")));
			this->OKlogin->Location = System::Drawing::Point(747, 472);
			this->OKlogin->Margin = System::Windows::Forms::Padding(4);
			this->OKlogin->Name = L"OKlogin";
			this->OKlogin->Size = System::Drawing::Size(105, 49);
			this->OKlogin->TabIndex = 12;
			this->OKlogin->UseVisualStyleBackColor = false;
			this->OKlogin->Click += gcnew System::EventHandler(this, &LoginForm::OKlogin_Click);
			// 
			// Passlogin
			// 
			this->Passlogin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->Passlogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Passlogin->Location = System::Drawing::Point(430, 401);
			this->Passlogin->Margin = System::Windows::Forms::Padding(4);
			this->Passlogin->Name = L"Passlogin";
			this->Passlogin->PasswordChar = '*';
			this->Passlogin->Size = System::Drawing::Size(538, 32);
			this->Passlogin->TabIndex = 13;
			this->Passlogin->UseSystemPasswordChar = true;
			this->Passlogin->TextChanged += gcnew System::EventHandler(this, &LoginForm::Passlogin_TextChanged);
			// 
			// IDlogin
			// 
			this->IDlogin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->IDlogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IDlogin->Location = System::Drawing::Point(430, 328);
			this->IDlogin->Margin = System::Windows::Forms::Padding(4);
			this->IDlogin->Name = L"IDlogin";
			this->IDlogin->Size = System::Drawing::Size(538, 32);
			this->IDlogin->TabIndex = 11;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackColor = System::Drawing::Color::Black;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-14, -5);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1205, 758);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 18;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Black;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DimGray;
			this->label1->Location = System::Drawing::Point(560, 608);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(124, 16);
			this->label1->TabIndex = 19;
			this->label1->Text = L"THATTHONG SAO";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(493, 127);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(246, 139);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox2->TabIndex = 20;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(237, 305);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(169, 72);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox3->TabIndex = 21;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(149, 368);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(245, 97);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox4->TabIndex = 22;
			this->pictureBox4->TabStop = false;
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1187, 711);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Cancellogin);
			this->Controls->Add(this->OKlogin);
			this->Controls->Add(this->Passlogin);
			this->Controls->Add(this->IDlogin);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximumSize = System::Drawing::Size(1203, 750);
			this->MinimumSize = System::Drawing::Size(1203, 750);
			this->Name = L"LoginForm";
			this->Text = L" ";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void OKlogin_Click(System::Object^ sender, System::EventArgs^ e) {
		MainFormThat^ mainform = gcnew MainFormThat();
		if (IDlogin->Text=="admin20")
		{
			if (Passlogin->Text == "123456789") {

				IDlogin->Text = "";
				Passlogin->Text = "";

				this->Hide();

				mainform->ShowDialog();

				// Close the new form when it's done
				mainform->Close();

				// Show the current form again
				this->Show();
			}
			else
			{
				MessageBox::Show("Incorrrect Password", "Error", MessageBoxButtons::OK);
			}
		}
		else
		{
			MessageBox::Show("Incorrrect ID or Please fill in the Id.", "Error", MessageBoxButtons::OK);
		}



	}
private: System::Void Cancellogin_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void Passlogin_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
