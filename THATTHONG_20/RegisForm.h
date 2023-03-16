#pragma once

namespace THATTHONG20 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RegisForm
	/// </summary>
	public ref class RegisForm : public System::Windows::Forms::Form
	{
	public:
		RegisForm(void)
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
		~RegisForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^ button1;





















	private: System::Windows::Forms::Button^ cf;
	private: System::Windows::Forms::Button^ re;
	private: System::Windows::Forms::Button^ clear;

	private: System::Windows::Forms::Button^ calcal;
	private: System::Windows::Forms::Button^ emem;
	private: System::Windows::Forms::Button^ free;

	private: System::Windows::Forms::TextBox^ putW;

	private: System::Windows::Forms::TextBox^ XXXX;

	private: System::Windows::Forms::TextBox^ PVPV;

	private: System::Windows::Forms::TextBox^ amam;

	private: System::Windows::Forms::TextBox^ CCCC;

	private: System::Windows::Forms::TextBox^ soysoy;

	private: System::Windows::Forms::TextBox^ number;


	private: System::Windows::Forms::TextBox^ CALL;

	private: System::Windows::Forms::TextBox^ SNSN;

	private: System::Windows::Forms::TextBox^ NNNN;



	private: System::Windows::Forms::Label^ price;
	private: System::Windows::Forms::Label^ id;
























public:






























private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::TextBox^ textBox5;

private: System::Windows::Forms::TextBox^ textBox6;


private: System::Windows::Forms::TextBox^ textBox7;

private: System::Windows::Forms::TextBox^ textBox8;

private: System::Windows::Forms::TextBox^ textBox9;















private: System::Windows::Forms::PictureBox^ pictureBox1;
private: System::Windows::Forms::PictureBox^ pictureBox10;
private: System::Windows::Forms::PictureBox^ pictureBox2;
























	private:



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(RegisForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->cf = (gcnew System::Windows::Forms::Button());
			this->re = (gcnew System::Windows::Forms::Button());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->calcal = (gcnew System::Windows::Forms::Button());
			this->emem = (gcnew System::Windows::Forms::Button());
			this->free = (gcnew System::Windows::Forms::Button());
			this->putW = (gcnew System::Windows::Forms::TextBox());
			this->XXXX = (gcnew System::Windows::Forms::TextBox());
			this->PVPV = (gcnew System::Windows::Forms::TextBox());
			this->amam = (gcnew System::Windows::Forms::TextBox());
			this->CCCC = (gcnew System::Windows::Forms::TextBox());
			this->soysoy = (gcnew System::Windows::Forms::TextBox());
			this->number = (gcnew System::Windows::Forms::TextBox());
			this->CALL = (gcnew System::Windows::Forms::TextBox());
			this->SNSN = (gcnew System::Windows::Forms::TextBox());
			this->NNNN = (gcnew System::Windows::Forms::TextBox());
			this->price = (gcnew System::Windows::Forms::Label());
			this->id = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(12, 660);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(79, 73);
			this->button1->TabIndex = 151;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RegisForm::button1_Click);
			// 
			// cf
			// 
			this->cf->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->cf->BackColor = System::Drawing::Color::Transparent;
			this->cf->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cf->ForeColor = System::Drawing::Color::Black;
			this->cf->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"cf.Image")));
			this->cf->Location = System::Drawing::Point(1201, 669);
			this->cf->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->cf->Name = L"cf";
			this->cf->Size = System::Drawing::Size(126, 50);
			this->cf->TabIndex = 127;
			this->cf->UseVisualStyleBackColor = false;
			// 
			// re
			// 
			this->re->BackColor = System::Drawing::Color::Transparent;
			this->re->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->re->ForeColor = System::Drawing::Color::Black;
			this->re->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"re.Image")));
			this->re->Location = System::Drawing::Point(751, 591);
			this->re->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->re->Name = L"re";
			this->re->Size = System::Drawing::Size(112, 32);
			this->re->TabIndex = 126;
			this->re->UseVisualStyleBackColor = false;
			this->re->Click += gcnew System::EventHandler(this, &RegisForm::re_Click);
			// 
			// clear
			// 
			this->clear->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->clear->BackColor = System::Drawing::Color::Transparent;
			this->clear->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clear->ForeColor = System::Drawing::Color::Black;
			this->clear->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"clear.Image")));
			this->clear->Location = System::Drawing::Point(1061, 669);
			this->clear->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(126, 50);
			this->clear->TabIndex = 125;
			this->clear->UseVisualStyleBackColor = false;
			this->clear->Click += gcnew System::EventHandler(this, &RegisForm::clear_Click);
			// 
			// calcal
			// 
			this->calcal->BackColor = System::Drawing::Color::Transparent;
			this->calcal->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"calcal.BackgroundImage")));
			this->calcal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->calcal->ForeColor = System::Drawing::Color::Transparent;
			this->calcal->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"calcal.Image")));
			this->calcal->Location = System::Drawing::Point(85, 591);
			this->calcal->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->calcal->Name = L"calcal";
			this->calcal->Size = System::Drawing::Size(99, 45);
			this->calcal->TabIndex = 123;
			this->calcal->UseVisualStyleBackColor = false;
			// 
			// emem
			// 
			this->emem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emem->ForeColor = System::Drawing::Color::Black;
			this->emem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"emem.Image")));
			this->emem->Location = System::Drawing::Point(442, 540);
			this->emem->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->emem->Name = L"emem";
			this->emem->Size = System::Drawing::Size(105, 46);
			this->emem->TabIndex = 122;
			this->emem->UseVisualStyleBackColor = true;
			// 
			// free
			// 
			this->free->BackColor = System::Drawing::Color::Transparent;
			this->free->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->free->ForeColor = System::Drawing::Color::Black;
			this->free->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"free.Image")));
			this->free->Location = System::Drawing::Point(331, 540);
			this->free->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->free->Name = L"free";
			this->free->Size = System::Drawing::Size(105, 46);
			this->free->TabIndex = 121;
			this->free->UseVisualStyleBackColor = false;
			// 
			// putW
			// 
			this->putW->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->putW->Location = System::Drawing::Point(85, 540);
			this->putW->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->putW->Name = L"putW";
			this->putW->Size = System::Drawing::Size(200, 31);
			this->putW->TabIndex = 119;
			// 
			// XXXX
			// 
			this->XXXX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->XXXX->Location = System::Drawing::Point(524, 394);
			this->XXXX->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->XXXX->Name = L"XXXX";
			this->XXXX->Size = System::Drawing::Size(171, 26);
			this->XXXX->TabIndex = 117;
			// 
			// PVPV
			// 
			this->PVPV->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PVPV->Location = System::Drawing::Point(171, 394);
			this->PVPV->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->PVPV->MaximumSize = System::Drawing::Size(230, 40);
			this->PVPV->Name = L"PVPV";
			this->PVPV->Size = System::Drawing::Size(230, 26);
			this->PVPV->TabIndex = 115;
			// 
			// amam
			// 
			this->amam->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->amam->Location = System::Drawing::Point(515, 348);
			this->amam->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->amam->Name = L"amam";
			this->amam->Size = System::Drawing::Size(167, 26);
			this->amam->TabIndex = 113;
			// 
			// CCCC
			// 
			this->CCCC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CCCC->Location = System::Drawing::Point(215, 345);
			this->CCCC->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->CCCC->Name = L"CCCC";
			this->CCCC->Size = System::Drawing::Size(171, 26);
			this->CCCC->TabIndex = 111;
			// 
			// soysoy
			// 
			this->soysoy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->soysoy->Location = System::Drawing::Point(482, 301);
			this->soysoy->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->soysoy->Name = L"soysoy";
			this->soysoy->Size = System::Drawing::Size(189, 26);
			this->soysoy->TabIndex = 109;
			// 
			// number
			// 
			this->number->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->number->Location = System::Drawing::Point(160, 304);
			this->number->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->number->Name = L"number";
			this->number->Size = System::Drawing::Size(216, 26);
			this->number->TabIndex = 107;
			// 
			// CALL
			// 
			this->CALL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CALL->Location = System::Drawing::Point(255, 217);
			this->CALL->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->CALL->Name = L"CALL";
			this->CALL->Size = System::Drawing::Size(225, 26);
			this->CALL->TabIndex = 104;
			// 
			// SNSN
			// 
			this->SNSN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SNSN->Location = System::Drawing::Point(441, 170);
			this->SNSN->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->SNSN->Name = L"SNSN";
			this->SNSN->Size = System::Drawing::Size(216, 26);
			this->SNSN->TabIndex = 102;
			// 
			// NNNN
			// 
			this->NNNN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NNNN->Location = System::Drawing::Point(137, 170);
			this->NNNN->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->NNNN->Name = L"NNNN";
			this->NNNN->Size = System::Drawing::Size(215, 26);
			this->NNNN->TabIndex = 100;
			// 
			// price
			// 
			this->price->AutoSize = true;
			this->price->BackColor = System::Drawing::Color::Transparent;
			this->price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->price->ForeColor = System::Drawing::Color::Black;
			this->price->Location = System::Drawing::Point(763, 540);
			this->price->Name = L"price";
			this->price->Size = System::Drawing::Size(56, 26);
			this->price->TabIndex = 46;
			this->price->Text = L"xxxx";
			// 
			// id
			// 
			this->id->AutoSize = true;
			this->id->BackColor = System::Drawing::Color::Transparent;
			this->id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->id->ForeColor = System::Drawing::Color::Black;
			this->id->Location = System::Drawing::Point(938, 540);
			this->id->Name = L"id";
			this->id->Size = System::Drawing::Size(106, 26);
			this->id->TabIndex = 93;
			this->id->Text = L"ID xxxxxx";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(1210, 393);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(128, 26);
			this->textBox1->TabIndex = 217;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(859, 394);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->MaximumSize = System::Drawing::Size(230, 40);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(214, 26);
			this->textBox2->TabIndex = 215;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(1192, 346);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(146, 26);
			this->textBox3->TabIndex = 214;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(906, 346);
			this->textBox4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(178, 26);
			this->textBox4->TabIndex = 212;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(1177, 301);
			this->textBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(161, 26);
			this->textBox5->TabIndex = 211;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(845, 302);
			this->textBox6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(228, 26);
			this->textBox6->TabIndex = 209;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(943, 218);
			this->textBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(225, 26);
			this->textBox7->TabIndex = 206;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(1124, 170);
			this->textBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(203, 26);
			this->textBox8->TabIndex = 204;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(825, 169);
			this->textBox9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(206, 26);
			this->textBox9->TabIndex = 202;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-7, 613);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(929, 153);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 223;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(-32, 30);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(1349, 596);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 224;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(933, 21);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(424, 66);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox2->TabIndex = 225;
			this->pictureBox2->TabStop = false;
			// 
			// RegisForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1379, 753);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->re);
			this->Controls->Add(this->id);
			this->Controls->Add(this->price);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->cf);
			this->Controls->Add(this->clear);
			this->Controls->Add(this->calcal);
			this->Controls->Add(this->emem);
			this->Controls->Add(this->free);
			this->Controls->Add(this->putW);
			this->Controls->Add(this->XXXX);
			this->Controls->Add(this->PVPV);
			this->Controls->Add(this->amam);
			this->Controls->Add(this->CCCC);
			this->Controls->Add(this->soysoy);
			this->Controls->Add(this->number);
			this->Controls->Add(this->CALL);
			this->Controls->Add(this->SNSN);
			this->Controls->Add(this->NNNN);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox10);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximumSize = System::Drawing::Size(1395, 792);
			this->MinimumSize = System::Drawing::Size(1395, 792);
			this->Name = L"RegisForm";
			this->Text = L"RegisForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void clear2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void re_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void clear_Click(System::Object^ sender, System::EventArgs^ e) {
	NNNN->Text = "";
	SNSN->Text = "";
	CALL->Text = "";
	number->Text = "";
	soysoy->Text = "";
	CCCC->Text = "";
	amam->Text = "";
	PVPV->Text = "";
	XXXX->Text = "";

	textBox9->Text = "";
	textBox8->Text = "";
	textBox7->Text = "";
	textBox6->Text = "";
	textBox5->Text = "";
	textBox4->Text = "";
	textBox3->Text = "";
	textBox2->Text = "";
	textBox1->Text = "";
	putW->Text = "";
}
private: System::Void pictureBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label18_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
