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
	using namespace std;

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
private: System::Windows::Forms::Button^ out;
























	private:



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		double PackageService = 0,ShippingTypeService = 0,ServicePrier = 0, Weight = 0;
		int ShippingType,PackageType;


private: System::Windows::Forms::PictureBox^ pictureBox3;
private: System::Windows::Forms::Button^ button2;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ button4;
private: System::Windows::Forms::PictureBox^ pictureBox4;
private: System::Windows::Forms::PictureBox^ pictureBox5;
	   System::ComponentModel::Container^ components;

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
			this->out = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(9, 536);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(59, 59);
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
			this->cf->Location = System::Drawing::Point(818, 544);
			this->cf->Margin = System::Windows::Forms::Padding(2);
			this->cf->Name = L"cf";
			this->cf->Size = System::Drawing::Size(94, 41);
			this->cf->TabIndex = 127;
			this->cf->UseVisualStyleBackColor = false;
			this->cf->Click += gcnew System::EventHandler(this, &RegisForm::cf_Click);
			// 
			// re
			// 
			this->re->BackColor = System::Drawing::Color::Transparent;
			this->re->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->re->ForeColor = System::Drawing::Color::Black;
			this->re->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"re.Image")));
			this->re->Location = System::Drawing::Point(563, 480);
			this->re->Margin = System::Windows::Forms::Padding(2);
			this->re->Name = L"re";
			this->re->Size = System::Drawing::Size(84, 26);
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
			this->clear->Location = System::Drawing::Point(720, 544);
			this->clear->Margin = System::Windows::Forms::Padding(2);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(94, 41);
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
			this->calcal->Location = System::Drawing::Point(64, 480);
			this->calcal->Margin = System::Windows::Forms::Padding(2);
			this->calcal->Name = L"calcal";
			this->calcal->Size = System::Drawing::Size(74, 37);
			this->calcal->TabIndex = 123;
			this->calcal->UseVisualStyleBackColor = false;
			this->calcal->Click += gcnew System::EventHandler(this, &RegisForm::calcal_Click);
			// 
			// emem
			// 
			this->emem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emem->ForeColor = System::Drawing::Color::Black;
			this->emem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"emem.Image")));
			this->emem->Location = System::Drawing::Point(332, 439);
			this->emem->Margin = System::Windows::Forms::Padding(2);
			this->emem->Name = L"emem";
			this->emem->Size = System::Drawing::Size(79, 37);
			this->emem->TabIndex = 122;
			this->emem->UseVisualStyleBackColor = true;
			this->emem->Click += gcnew System::EventHandler(this, &RegisForm::emem_Click);
			// 
			// free
			// 
			this->free->BackColor = System::Drawing::Color::Transparent;
			this->free->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->free->ForeColor = System::Drawing::Color::Black;
			this->free->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"free.Image")));
			this->free->Location = System::Drawing::Point(248, 439);
			this->free->Margin = System::Windows::Forms::Padding(2);
			this->free->Name = L"free";
			this->free->Size = System::Drawing::Size(79, 37);
			this->free->TabIndex = 121;
			this->free->UseVisualStyleBackColor = false;
			this->free->Click += gcnew System::EventHandler(this, &RegisForm::free_Click);
			// 
			// putW
			// 
			this->putW->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->putW->Location = System::Drawing::Point(64, 439);
			this->putW->Margin = System::Windows::Forms::Padding(2);
			this->putW->Name = L"putW";
			this->putW->Size = System::Drawing::Size(112, 31);
			this->putW->TabIndex = 119;
			// 
			// XXXX
			// 
			this->XXXX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->XXXX->Location = System::Drawing::Point(393, 320);
			this->XXXX->Margin = System::Windows::Forms::Padding(2);
			this->XXXX->Name = L"XXXX";
			this->XXXX->Size = System::Drawing::Size(129, 26);
			this->XXXX->TabIndex = 117;
			// 
			// PVPV
			// 
			this->PVPV->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PVPV->Location = System::Drawing::Point(128, 320);
			this->PVPV->Margin = System::Windows::Forms::Padding(2);
			this->PVPV->MaximumSize = System::Drawing::Size(174, 40);
			this->PVPV->Name = L"PVPV";
			this->PVPV->Size = System::Drawing::Size(174, 26);
			this->PVPV->TabIndex = 115;
			// 
			// amam
			// 
			this->amam->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->amam->Location = System::Drawing::Point(386, 283);
			this->amam->Margin = System::Windows::Forms::Padding(2);
			this->amam->Name = L"amam";
			this->amam->Size = System::Drawing::Size(126, 26);
			this->amam->TabIndex = 113;
			// 
			// CCCC
			// 
			this->CCCC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CCCC->Location = System::Drawing::Point(161, 280);
			this->CCCC->Margin = System::Windows::Forms::Padding(2);
			this->CCCC->Name = L"CCCC";
			this->CCCC->Size = System::Drawing::Size(129, 26);
			this->CCCC->TabIndex = 111;
			// 
			// soysoy
			// 
			this->soysoy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->soysoy->Location = System::Drawing::Point(362, 245);
			this->soysoy->Margin = System::Windows::Forms::Padding(2);
			this->soysoy->Name = L"soysoy";
			this->soysoy->Size = System::Drawing::Size(143, 26);
			this->soysoy->TabIndex = 109;
			// 
			// number
			// 
			this->number->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->number->Location = System::Drawing::Point(120, 247);
			this->number->Margin = System::Windows::Forms::Padding(2);
			this->number->Name = L"number";
			this->number->Size = System::Drawing::Size(163, 26);
			this->number->TabIndex = 107;
			// 
			// CALL
			// 
			this->CALL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CALL->Location = System::Drawing::Point(191, 176);
			this->CALL->Margin = System::Windows::Forms::Padding(2);
			this->CALL->Name = L"CALL";
			this->CALL->Size = System::Drawing::Size(170, 26);
			this->CALL->TabIndex = 104;
			// 
			// SNSN
			// 
			this->SNSN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SNSN->Location = System::Drawing::Point(331, 138);
			this->SNSN->Margin = System::Windows::Forms::Padding(2);
			this->SNSN->Name = L"SNSN";
			this->SNSN->Size = System::Drawing::Size(163, 26);
			this->SNSN->TabIndex = 102;
			// 
			// NNNN
			// 
			this->NNNN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NNNN->Location = System::Drawing::Point(103, 138);
			this->NNNN->Margin = System::Windows::Forms::Padding(2);
			this->NNNN->Name = L"NNNN";
			this->NNNN->Size = System::Drawing::Size(162, 26);
			this->NNNN->TabIndex = 100;
			// 
			// price
			// 
			this->price->AutoSize = true;
			this->price->BackColor = System::Drawing::Color::Transparent;
			this->price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->price->ForeColor = System::Drawing::Color::Black;
			this->price->Location = System::Drawing::Point(572, 444);
			this->price->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->price->Name = L"price";
			this->price->Size = System::Drawing::Size(57, 20);
			this->price->TabIndex = 46;
			this->price->Text = L"XX.XX";
			// 
			// id
			// 
			this->id->AutoSize = true;
			this->id->BackColor = System::Drawing::Color::Transparent;
			this->id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->id->ForeColor = System::Drawing::Color::Black;
			this->id->Location = System::Drawing::Point(718, 443);
			this->id->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->id->Name = L"id";
			this->id->Size = System::Drawing::Size(72, 20);
			this->id->TabIndex = 93;
			this->id->Text = L"ID xxxxxx";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(908, 319);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(97, 26);
			this->textBox1->TabIndex = 217;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(644, 320);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->MaximumSize = System::Drawing::Size(174, 40);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(162, 26);
			this->textBox2->TabIndex = 215;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(894, 281);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(110, 26);
			this->textBox3->TabIndex = 214;
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(680, 281);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(134, 26);
			this->textBox4->TabIndex = 212;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->Location = System::Drawing::Point(883, 245);
			this->textBox5->Margin = System::Windows::Forms::Padding(2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(122, 26);
			this->textBox5->TabIndex = 211;
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox6->Location = System::Drawing::Point(634, 245);
			this->textBox6->Margin = System::Windows::Forms::Padding(2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(172, 26);
			this->textBox6->TabIndex = 209;
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(707, 177);
			this->textBox7->Margin = System::Windows::Forms::Padding(2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(170, 26);
			this->textBox7->TabIndex = 206;
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox8->Location = System::Drawing::Point(843, 138);
			this->textBox8->Margin = System::Windows::Forms::Padding(2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(153, 26);
			this->textBox8->TabIndex = 204;
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox9->Location = System::Drawing::Point(619, 137);
			this->textBox9->Margin = System::Windows::Forms::Padding(2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(156, 26);
			this->textBox9->TabIndex = 202;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(429, 495);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(697, 124);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 223;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(-24, 24);
			this->pictureBox10->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(1012, 484);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 224;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(700, 17);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(318, 54);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox2->TabIndex = 225;
			this->pictureBox2->TabStop = false;
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
			this->out->Location = System::Drawing::Point(916, 544);
			this->out->Margin = System::Windows::Forms::Padding(2);
			this->out->Name = L"out";
			this->out->Size = System::Drawing::Size(94, 41);
			this->out->TabIndex = 226;
			this->out->UseVisualStyleBackColor = false;
			this->out->Click += gcnew System::EventHandler(this, &RegisForm::out_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(248, 490);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(128, 36);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox3->TabIndex = 227;
			this->pictureBox3->TabStop = false;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Black;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(248, 536);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(79, 37);
			this->button2->TabIndex = 228;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &RegisForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(331, 536);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(79, 37);
			this->button3->TabIndex = 229;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &RegisForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Black;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(415, 536);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(107, 37);
			this->button4->TabIndex = 230;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &RegisForm::button4_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(178, 439);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(42, 36);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox4->TabIndex = 231;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(641, 437);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(42, 36);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox5->TabIndex = 232;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &RegisForm::pictureBox5_Click);
			// 
			// RegisForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(1034, 612);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->out);
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
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximumSize = System::Drawing::Size(1050, 651);
			this->MinimumSize = System::Drawing::Size(1050, 651);
			this->Name = L"RegisForm";
			this->Text = L"RegisForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void clear2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void re_Click(System::Object^ sender, System::EventArgs^ e) {
	price->Text = "XX.XX";
	id->Text = "ID xxxxxx";


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
private: System::Void cf_Click(System::Object^ sender, System::EventArgs^ e) {
	if (MessageBox::Show("Are you sure you want to save the data ? ",
		"Please check the accuracy again.", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) {
		
		const char* ShippingType1 = " ";
		const char* PackageType1=" ";

		String^ Weight0 = putW->Text;
		std::string str4 = msclr::interop::marshal_as<std::string>(Weight0);
		const char* Weight1 = str4.c_str();
		
		String^ price0 = price->Text;
		std::string str5 = msclr::interop::marshal_as<std::string>(price0);
		const char* price1 = str5.c_str();



		if (ShippingType == 1)
		{
			ShippingType1 = "Standard";
		}
		if (ShippingType == 2)
		{
			ShippingType1 = "Express";
		}

		if (PackageType == 1)
		{
			PackageType1 = "Box";
		}
		if (PackageType == 2)
		{
			PackageType1 = "Envelope";
		}
		if (PackageType == 3)
		{
			PackageType1 = "PlasticPack";
		}



		String^ Carrier0 = this->NNNN->Text + " " + this->SNSN->Text;
		std::string str0 = msclr::interop::marshal_as<std::string>(Carrier0);
		const char* Carrier = str0.c_str();

		// Calculate the length of the concatenated string
		size_t len0 = strlen(Carrier) + 1;

		// Allocate memory for the concatenated string
		char* result0 = new char[len0];

		// Copy str1 to the result string using strcpy_s()
		strcpy_s(result0, len0, Carrier);


		String^ CarrierAddress0 = number->Text + " " + soysoy->Text + " " + CCCC->Text + " " + amam->Text + " " + PVPV->Text + " " + XXXX->Text + " " + "Phone Number is " + CALL->Text;
		std::string str1 = msclr::interop::marshal_as<std::string>(CarrierAddress0);
		const char* CarrierAddress = str1.c_str();

		// Calculate the length of the concatenated string
		size_t len1 = strlen(CarrierAddress) + 1;

		// Allocate memory for the concatenated string
		char* result1 = new char[len1];

		// Copy str1 to the result string using strcpy_s()
		strcpy_s(result1, len1, CarrierAddress);


		String^ Receiver0 = this->textBox9->Text + " " + this->textBox8->Text;
		std::string str2 = msclr::interop::marshal_as<std::string>(Receiver0);
		const char* Receiver = str2.c_str();

		// Calculate the length of the concatenated string
		size_t len2 = strlen(Receiver) + 1;

		// Allocate memory for the concatenated string
		char* result2 = new char[len2];

		// Copy str1 to the result string using strcpy_s()
		strcpy_s(result2, len2, Receiver);


		String^ ReceiverAddress0 = textBox6->Text + " " + textBox5->Text + " " + textBox4->Text + " " + textBox3->Text + " " + textBox2->Text + " " + textBox1->Text + " " + "Phone Number is " + textBox7->Text;
		std::string str3 = msclr::interop::marshal_as<std::string>(ReceiverAddress0);
		const char* ReceiverAddress = str3.c_str();

		// Calculate the length of the concatenated string
		size_t len3 = strlen(ReceiverAddress) + 1;

		// Allocate memory for the concatenated string
		char* result3 = new char[len3];

		// Copy str1 to the result string using strcpy_s()
		strcpy_s(result3, len3, ReceiverAddress);



		sqlite3* db;
		sqlite3_stmt* stmt;
		sqlite3_stmt* stmt2;


		// Open database connection
		int rc = sqlite3_open("datathatthong20.db", &db);

		const char* Lastrow = "SELECT ID FROM DataStock ORDER BY id DESC LIMIT 1";
		rc = sqlite3_prepare_v2(db, Lastrow, -1, &stmt2, 0);
		std::vector<std::vector<std::string>> data;
		while (sqlite3_step(stmt2) == SQLITE_ROW)
		{
			std::vector<std::string> row;
			for (int i = 0; i < sqlite3_column_count(stmt2); i++)
			{
				std::string val = std::string(reinterpret_cast<const char*>(sqlite3_column_text(stmt2, i)));
				row.push_back(val);
			}
			data.push_back(row);
		}

		std::vector<std::vector<int>> datalastrow;
		for (const auto& row : data) {
			std::vector<int> intRow;
			for (const auto& str : row) {
				intRow.push_back(std::stoi(str));
			}
			datalastrow.push_back(intRow);
		}

		int datalastrow2 = datalastrow[0][0];


		sqlite3_finalize(stmt2);

		this->id->Text = System::Convert::ToString(datalastrow2+1);





		// Prepare SQL statement
		rc = sqlite3_prepare_v2(db, "INSERT INTO DataStock VALUES(?,?,?,?,?,?,?,?,?,?,? )", -1, &stmt, nullptr);

		// Bind data to statement
		rc = sqlite3_bind_int(stmt, 1, datalastrow2 + 1);
		rc = sqlite3_bind_text(stmt, 2, Carrier, -1, SQLITE_TRANSIENT);
		rc = sqlite3_bind_text(stmt, 3, CarrierAddress, -1, SQLITE_TRANSIENT);
		rc = sqlite3_bind_text(stmt, 4, Receiver, -1, SQLITE_TRANSIENT);
		rc = sqlite3_bind_text(stmt, 5, ReceiverAddress, -1, SQLITE_TRANSIENT);
		rc = sqlite3_bind_text(stmt, 6, PackageType1, -1, SQLITE_TRANSIENT);
		rc = sqlite3_bind_double(stmt, 7, stod(Weight1)) ;
		rc = sqlite3_bind_text(stmt, 8, ShippingType1, -1, SQLITE_TRANSIENT);
		rc = sqlite3_bind_double(stmt, 9, stod(price1));
		rc = sqlite3_bind_text(stmt, 10, "some text", -1, SQLITE_TRANSIENT);


		// Execute statement
		rc = sqlite3_step(stmt);

		// Close statement
		rc = sqlite3_finalize(stmt);

		// Close database connection
		rc = sqlite3_close(db);

	}
	
}
private: System::Void out_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void calcal_Click(System::Object^ sender, System::EventArgs^ e) {
	ServicePrier = ((System::Convert::ToDouble(putW->Text) * 3.5)+ShippingTypeService+PackageService)*1.1 ;
	price->Text = System::Convert::ToString(ServicePrier);
}
private: System::Void free_Click(System::Object^ sender, System::EventArgs^ e) {
	ShippingTypeService = 20;
	ShippingType = 1;
}
private: System::Void emem_Click(System::Object^ sender, System::EventArgs^ e) {
	ShippingTypeService = 50;
	ShippingType = 2;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	PackageService = 30;
	PackageType = 1;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	PackageService = 20;
	PackageType = 2;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	PackageService = 10;
	PackageType = 3;
}
private: System::Void pictureBox5_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
