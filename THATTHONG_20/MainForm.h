#pragma once
#include "CheckForm.h"
#include "RegisForm.h"

namespace THATTHONG20 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainFormThatthong20
	/// </summary>
	public ref class MainFormThatthong20 : public System::Windows::Forms::Form
	{
	public:
		MainFormThatthong20(void)
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
		~MainFormThatthong20()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ Checkbonton;
	private: System::Windows::Forms::Button^ logout;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Checkbonton = (gcnew System::Windows::Forms::Button());
			this->logout = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button1->BackColor = System::Drawing::Color::OldLace;
			this->button1->Font = (gcnew System::Drawing::Font(L"Angsana New", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(361, 215);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(463, 107);
			this->button1->TabIndex = 5;
			this->button1->Text = L"จัดส่งพัสดุ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->UseWaitCursor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainFormThatthong20::button1_Click);
			// 
			// Checkbonton
			// 
			this->Checkbonton->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Checkbonton->BackColor = System::Drawing::Color::OldLace;
			this->Checkbonton->Font = (gcnew System::Drawing::Font(L"Angsana New", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Checkbonton->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Checkbonton->Location = System::Drawing::Point(361, 382);
			this->Checkbonton->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Checkbonton->Name = L"Checkbonton";
			this->Checkbonton->Size = System::Drawing::Size(463, 107);
			this->Checkbonton->TabIndex = 4;
			this->Checkbonton->Text = L"ตรวจสอบพัสดุ";
			this->Checkbonton->UseVisualStyleBackColor = false;
			this->Checkbonton->Click += gcnew System::EventHandler(this, &MainFormThatthong20::Checkbonton_Click);
			// 
			// logout
			// 
			this->logout->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->logout->Location = System::Drawing::Point(481, 569);
			this->logout->Name = L"logout";
			this->logout->Size = System::Drawing::Size(214, 64);
			this->logout->TabIndex = 6;
			this->logout->Text = L"LOG OUT";
			this->logout->UseVisualStyleBackColor = true;
			// 
			// MainFormThatthong20
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1187, 711);
			this->Controls->Add(this->logout);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Checkbonton);
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->MinimumSize = System::Drawing::Size(1202, 749);
			this->Name = L"MainFormThatthong20";
			this->Text = L"MainFormThatthong20";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Checkbonton_Click(System::Object^ sender, System::EventArgs^ e) {
		CheckForm^ checkform = gcnew CheckForm();

		this->Hide();

		checkform->ShowDialog();

		// Close the new form when it's done
		checkform->Close();

		// Show the current form again
		this->Show();

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		RegisForm^ regisform = gcnew RegisForm();

		this->Hide();

		regisform->ShowDialog();

		// Close the new form when it's done
		regisform->Close();

		// Show the current form again
		this->Show();
	}
	};
}
