#pragma once

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
			this->PASSWORD = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Cancellogin = (gcnew System::Windows::Forms::Button());
			this->OKlogin = (gcnew System::Windows::Forms::Button());
			this->Passlogin = (gcnew System::Windows::Forms::TextBox());
			this->IDlogin = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// PASSWORD
			// 
			this->PASSWORD->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->PASSWORD->AutoSize = true;
			this->PASSWORD->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PASSWORD->Location = System::Drawing::Point(124, 301);
			this->PASSWORD->Name = L"PASSWORD";
			this->PASSWORD->Size = System::Drawing::Size(153, 29);
			this->PASSWORD->TabIndex = 17;
			this->PASSWORD->Text = L"PASSWORD";
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(194, 219);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 29);
			this->label3->TabIndex = 16;
			this->label3->Text = L"NAME ";
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(359, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(144, 45);
			this->label2->TabIndex = 15;
			this->label2->Text = L"LOGIN";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// Cancellogin
			// 
			this->Cancellogin->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Cancellogin->Location = System::Drawing::Point(496, 415);
			this->Cancellogin->Name = L"Cancellogin";
			this->Cancellogin->Size = System::Drawing::Size(160, 72);
			this->Cancellogin->TabIndex = 14;
			this->Cancellogin->Text = L"Cancel";
			this->Cancellogin->UseVisualStyleBackColor = true;
			// 
			// OKlogin
			// 
			this->OKlogin->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->OKlogin->Location = System::Drawing::Point(245, 415);
			this->OKlogin->Name = L"OKlogin";
			this->OKlogin->Size = System::Drawing::Size(160, 72);
			this->OKlogin->TabIndex = 12;
			this->OKlogin->Text = L"Login";
			this->OKlogin->UseVisualStyleBackColor = true;
			// 
			// Passlogin
			// 
			this->Passlogin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->Passlogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Passlogin->Location = System::Drawing::Point(358, 299);
			this->Passlogin->Name = L"Passlogin";
			this->Passlogin->PasswordChar = '*';
			this->Passlogin->Size = System::Drawing::Size(408, 32);
			this->Passlogin->TabIndex = 13;
			this->Passlogin->UseSystemPasswordChar = true;
			// 
			// IDlogin
			// 
			this->IDlogin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom));
			this->IDlogin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IDlogin->Location = System::Drawing::Point(358, 218);
			this->IDlogin->Name = L"IDlogin";
			this->IDlogin->Size = System::Drawing::Size(408, 32);
			this->IDlogin->TabIndex = 11;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(890, 578);
			this->Controls->Add(this->PASSWORD);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Cancellogin);
			this->Controls->Add(this->OKlogin);
			this->Controls->Add(this->Passlogin);
			this->Controls->Add(this->IDlogin);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->MinimumSize = System::Drawing::Size(906, 617);
			this->Name = L"MyForm";
			this->Text = L"Thatthong20Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
