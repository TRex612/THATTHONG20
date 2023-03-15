#pragma once
#include "MainForm.h"

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
	private: System::Windows::Forms::Label^ PASSWORD;
	protected:
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ Cancellogin;
	private: System::Windows::Forms::Button^ OKlogin;
	private: System::Windows::Forms::TextBox^ Passlogin;
	private: System::Windows::Forms::TextBox^ IDlogin;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;

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
			this->PASSWORD = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Cancellogin = (gcnew System::Windows::Forms::Button());
			this->OKlogin = (gcnew System::Windows::Forms::Button());
			this->Passlogin = (gcnew System::Windows::Forms::TextBox());
			this->IDlogin = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// PASSWORD
			// 
			this->PASSWORD->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->PASSWORD->AutoSize = true;
			this->PASSWORD->BackColor = System::Drawing::Color::Black;
			this->PASSWORD->Font = (gcnew System::Drawing::Font(L"supermarket", 22.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PASSWORD->ForeColor = System::Drawing::Color::White;
			this->PASSWORD->Location = System::Drawing::Point(231, 387);
			this->PASSWORD->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->PASSWORD->Name = L"PASSWORD";
			this->PASSWORD->Size = System::Drawing::Size(191, 68);
			this->PASSWORD->TabIndex = 17;
			this->PASSWORD->Text = L"PASSWORD";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Black;
			this->label3->Font = (gcnew System::Drawing::Font(L"supermarket", 22.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(309, 315);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(124, 68);
			this->label3->TabIndex = 16;
			this->label3->Text = L"NAME ";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Black;
			this->label2->Font = (gcnew System::Drawing::Font(L"supermarket", 49.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(498, 152);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(251, 145);
			this->label2->TabIndex = 15;
			this->label2->Text = L"LOGIN";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// Cancellogin
			// 
			this->Cancellogin->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Cancellogin->BackColor = System::Drawing::Color::BlueViolet;
			this->Cancellogin->Font = (gcnew System::Drawing::Font(L"supermarket", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Cancellogin->ForeColor = System::Drawing::Color::White;
			this->Cancellogin->Location = System::Drawing::Point(888, 471);
			this->Cancellogin->Margin = System::Windows::Forms::Padding(4);
			this->Cancellogin->Name = L"Cancellogin";
			this->Cancellogin->Size = System::Drawing::Size(80, 43);
			this->Cancellogin->TabIndex = 14;
			this->Cancellogin->Text = L"Cancel";
			this->Cancellogin->UseVisualStyleBackColor = false;
			this->Cancellogin->Click += gcnew System::EventHandler(this, &LoginForm::Cancellogin_Click);
			// 
			// OKlogin
			// 
			this->OKlogin->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->OKlogin->BackColor = System::Drawing::Color::DimGray;
			this->OKlogin->Font = (gcnew System::Drawing::Font(L"supermarket", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OKlogin->ForeColor = System::Drawing::Color::White;
			this->OKlogin->Location = System::Drawing::Point(790, 472);
			this->OKlogin->Margin = System::Windows::Forms::Padding(4);
			this->OKlogin->Name = L"OKlogin";
			this->OKlogin->Size = System::Drawing::Size(80, 43);
			this->OKlogin->TabIndex = 12;
			this->OKlogin->Text = L"Login";
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
			this->Passlogin->Size = System::Drawing::Size(538, 38);
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
			this->IDlogin->Size = System::Drawing::Size(538, 38);
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
			this->label1->Font = (gcnew System::Drawing::Font(L"supermarket", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::DimGray;
			this->label1->Location = System::Drawing::Point(528, 563);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(173, 44);
			this->label1->TabIndex = 19;
			this->label1->Text = L"THATTHONG SAO";
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1187, 711);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->PASSWORD);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Cancellogin);
			this->Controls->Add(this->OKlogin);
			this->Controls->Add(this->Passlogin);
			this->Controls->Add(this->IDlogin);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"LoginForm";
			this->Text = L" ";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void OKlogin_Click(System::Object^ sender, System::EventArgs^ e) {
		MainFormThatthong20^ mainform = gcnew MainFormThatthong20();
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
