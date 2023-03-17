#pragma once
#include <sqlite3.h>
#include <string>
#include <iostream>
#include <vector>
#include <sstream>
#include <vcclr.h>
#include <Windows.h>
#include <msclr/marshal_cppstd.h>

namespace THATTHONG20 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CheckForm
	/// </summary>
	public ref class CheckForm : public System::Windows::Forms::Form
	{
	public:
		CheckForm(void)
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
		~CheckForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;



	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Button^ out;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CheckForm::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->out = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(734, 237);
			this->button2->MinimumSize = System::Drawing::Size(90, 37);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(90, 37);
			this->button2->TabIndex = 15;
			this->button2->Text = L"CLEAR";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &CheckForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button1->BackColor = System::Drawing::Color::OliveDrab;
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(638, 237);
			this->button1->MinimumSize = System::Drawing::Size(90, 37);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 37);
			this->button1->TabIndex = 14;
			this->button1->Text = L"CHECK";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &CheckForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(539, 172);
			this->textBox1->MinimumSize = System::Drawing::Size(285, 51);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(285, 36);
			this->textBox1->TabIndex = 13;
			// 
			// button3
			// 
			this->button3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button3->Location = System::Drawing::Point(17, 504);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(59, 59);
			this->button3->TabIndex = 152;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &CheckForm::button3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-5, -32);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 6);
			this->pictureBox1->MaximumSize = System::Drawing::Size(904, 616);
			this->pictureBox1->MinimumSize = System::Drawing::Size(904, 616);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(904, 616);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 153;
			this->pictureBox1->TabStop = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ButtonHighlight;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::Info;
			this->dataGridView1->Location = System::Drawing::Point(264, 309);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(560, 65);
			this->dataGridView1->TabIndex = 154;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(506, 84);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(222, 82);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox2->TabIndex = 155;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(587, -48);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(350, 156);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 226;
			this->pictureBox3->TabStop = false;
			// 
			// out
			// 
			this->out->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->out->BackColor = System::Drawing::Color::Transparent;
			this->out->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->out->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->out->ForeColor = System::Drawing::Color::Black;
			this->out->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"out.Image")));
			this->out->Location = System::Drawing::Point(768, 511);
			this->out->Margin = System::Windows::Forms::Padding(2);
			this->out->Name = L"out";
			this->out->Size = System::Drawing::Size(94, 41);
			this->out->TabIndex = 227;
			this->out->UseVisualStyleBackColor = false;
			this->out->Click += gcnew System::EventHandler(this, &CheckForm::out_Click);
			// 
			// CheckForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(890, 577);
			this->Controls->Add(this->out);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximumSize = System::Drawing::Size(906, 616);
			this->MinimumSize = System::Drawing::Size(906, 616);
			this->Name = L"CheckForm";
			this->Text = L"CheckForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	dataGridView1->Rows->Clear();
	dataGridView1->Columns->Clear();
	dataGridView1->Columns->Add("ID", "ID");
	dataGridView1->Columns->Add("Carrier", "Carrier");
	dataGridView1->Columns->Add("CarrierAddress", "CarrierAddress");
	dataGridView1->Columns->Add("Receiver", "Receiver");
	dataGridView1->Columns->Add("ReceiverAddress", "ReceiverAddress");
	dataGridView1->Columns->Add("Package", "Package");
	dataGridView1->Columns->Add("Weight", "Weight");
	dataGridView1->Columns->Add("ShippingType", "ShippingType");
	dataGridView1->Columns->Add("Service", "Service");
	dataGridView1->Columns->Add("DeliveryDate", "DeliveryDate");
	dataGridView1->Columns->Add("Tracking", "Tracking");



	sqlite3* db;
	sqlite3_stmt* stmt10;

	// Open the database
	int rc = sqlite3_open("datathatthong20.db", &db);


	String^ sql211 = this->textBox1->Text;
	const char* sql11 = "SELECT * from DataStock WHERE ID = ";
	std::string id = msclr::interop::marshal_as<std::string>(sql211);
	std::string fullSql = sql11 + id;
	const char* sql221 = fullSql.c_str();

	// Prepare the SELECT statement
	/*const char* sql11 = "SELECT * from DataStock WHERE ID = ";
	String^ sql211 = this->textBox1->Text;
	std::string str10 = msclr::interop::marshal_as<std::string>(sql211);
	const char* sql221 = str10.c_str();
	char* result110 = new char[std::strlen(sql11) + std::strlen(sql221) + 1];
	std::strcpy(result110, sql11);
	std::strcat(result110, sql221);*/

	//// Calculate the length of the concatenated string
	//size_t len = strlen(sql11) + strlen(sql221) + 1;

	//// Allocate memory for the concatenated string
	//char* result1 = new char[len];

	//// Copy str1 to the result string using strcpy_s()
	//strcpy_s(result1, len, sql11);

	//// Concatenate str2 to the end of result using strcat_s()
	//strcat_s(result1, len, sql221);



	

	rc = sqlite3_prepare_v2(db, sql221, -1, &stmt10, 0);

	//// Execute the SELECT statement and retrieve the data
	std::vector<std::vector<std::string>> data;
	while (sqlite3_step(stmt10) == SQLITE_ROW)
	{
		std::vector<std::string> row;
		for (int i = 0; i < sqlite3_column_count(stmt10); i++)
		{
			std::string val = std::string(reinterpret_cast<const char*>(sqlite3_column_text(stmt10, i)));
			row.push_back(val);
		}
		data.push_back(row);
	}

	//// Close the database
	sqlite3_finalize(stmt10);
	sqlite3_close(db);

	//// Populate the DataGridView with the retrieved data
	for (int i = 0; i < data.size(); i++)
	{
		DataGridViewRow^ row = gcnew DataGridViewRow();
		for (int j = 0; j < data[i].size(); j++)
		{
			row->Cells->Add(gcnew DataGridViewTextBoxCell());
			row->Cells[j]->Value = gcnew String(data[i][j].c_str());
		}
		dataGridView1->Rows->Add(row);
	}
}

private: System::Void out_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
};
}
