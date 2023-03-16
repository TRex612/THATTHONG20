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
	/// Summary for MainFormThat
	/// </summary>
	public ref class MainFormThat : public System::Windows::Forms::Form
	{
	public:
		MainFormThat(void)
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
		~MainFormThat()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainFormThat::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Checkbonton = (gcnew System::Windows::Forms::Button());
			this->logout = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-12, -3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(910, 617);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->Font = (gcnew System::Drawing::Font(L"Angsana New", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(109, 398);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(232, 55);
			this->button1->TabIndex = 6;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->UseWaitCursor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainFormThat::button1_Click);
			// 
			// Checkbonton
			// 
			this->Checkbonton->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Checkbonton->BackColor = System::Drawing::Color::Transparent;
			this->Checkbonton->Font = (gcnew System::Drawing::Font(L"Angsana New", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Checkbonton->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Checkbonton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Checkbonton.Image")));
			this->Checkbonton->Location = System::Drawing::Point(544, 398);
			this->Checkbonton->Name = L"Checkbonton";
			this->Checkbonton->Size = System::Drawing::Size(232, 55);
			this->Checkbonton->TabIndex = 7;
			this->Checkbonton->UseVisualStyleBackColor = false;
			this->Checkbonton->Click += gcnew System::EventHandler(this, &MainFormThat::Checkbonton_Click);
			// 
			// logout
			// 
			this->logout->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->logout->Location = System::Drawing::Point(355, 514);
			this->logout->Margin = System::Windows::Forms::Padding(2);
			this->logout->Name = L"logout";
			this->logout->Size = System::Drawing::Size(160, 52);
			this->logout->TabIndex = 8;
			this->logout->Text = L"LOG OUT";
			this->logout->UseVisualStyleBackColor = true;
			this->logout->Click += gcnew System::EventHandler(this, &MainFormThat::logout_Click);
			// 
			// MainFormThat
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(890, 577);
			this->Controls->Add(this->logout);
			this->Controls->Add(this->Checkbonton);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox1);
			this->MaximumSize = System::Drawing::Size(906, 616);
			this->MinimumSize = System::Drawing::Size(906, 616);
			this->Name = L"MainFormThat";
			this->Text = L"MainFormThat";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		RegisForm^ regisform = gcnew RegisForm();

		this->Hide();

		regisform->ShowDialog();

		// Close the new form when it's done
		regisform->Close();

		// Show the current form again
		this->Show();
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
private: System::Void logout_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
