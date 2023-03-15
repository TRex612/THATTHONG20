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
	private: System::Windows::Forms::Button^ coco;




















	private: System::Windows::Forms::Button^ cf;
	private: System::Windows::Forms::Button^ re;
	private: System::Windows::Forms::Button^ clear;
	private: System::Windows::Forms::Label^ sd;
	private: System::Windows::Forms::Button^ calcal;
	private: System::Windows::Forms::Button^ emem;
	private: System::Windows::Forms::Button^ free;
	private: System::Windows::Forms::Label^ type;
	private: System::Windows::Forms::TextBox^ putW;
	private: System::Windows::Forms::Label^ weight;
	private: System::Windows::Forms::TextBox^ XXXX;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ PVPV;

	private: System::Windows::Forms::TextBox^ amam;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ CCCC;

	private: System::Windows::Forms::TextBox^ soysoy;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ number;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ CALL;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ SNSN;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ NNNN;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ pop;
	private: System::Windows::Forms::Label^ service;
	private: System::Windows::Forms::Label^ price;
	private: System::Windows::Forms::Label^ id;
	private: System::Windows::Forms::Label^ pc;
	private: System::Windows::Forms::PictureBox^ pictureBox1;




















	public: System::Windows::Forms::PictureBox^ pictureBox2;

public:
private: System::Windows::Forms::PictureBox^ pictureBox3;
private: System::Windows::Forms::PictureBox^ pictureBox9;
private: System::Windows::Forms::PictureBox^ pictureBox8;
private: System::Windows::Forms::PictureBox^ pictureBox4;
private: System::Windows::Forms::PictureBox^ pictureBox5;
private: System::Windows::Forms::PictureBox^ pictureBox6;
private: System::Windows::Forms::PictureBox^ pictureBox7;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::Label^ label12;
private: System::Windows::Forms::TextBox^ textBox6;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::TextBox^ textBox8;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::TextBox^ textBox9;
private: System::Windows::Forms::Label^ label17;
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
			this->coco = (gcnew System::Windows::Forms::Button());
			this->cf = (gcnew System::Windows::Forms::Button());
			this->re = (gcnew System::Windows::Forms::Button());
			this->clear = (gcnew System::Windows::Forms::Button());
			this->sd = (gcnew System::Windows::Forms::Label());
			this->calcal = (gcnew System::Windows::Forms::Button());
			this->emem = (gcnew System::Windows::Forms::Button());
			this->free = (gcnew System::Windows::Forms::Button());
			this->type = (gcnew System::Windows::Forms::Label());
			this->putW = (gcnew System::Windows::Forms::TextBox());
			this->weight = (gcnew System::Windows::Forms::Label());
			this->XXXX = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->PVPV = (gcnew System::Windows::Forms::TextBox());
			this->amam = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->CCCC = (gcnew System::Windows::Forms::TextBox());
			this->soysoy = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->number = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->CALL = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SNSN = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->NNNN = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pop = (gcnew System::Windows::Forms::Panel());
			this->service = (gcnew System::Windows::Forms::Label());
			this->price = (gcnew System::Windows::Forms::Label());
			this->id = (gcnew System::Windows::Forms::Label());
			this->pc = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pop->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->button1->Location = System::Drawing::Point(38, 725);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(59, 61);
			this->button1->TabIndex = 151;
			this->button1->UseVisualStyleBackColor = true;
			// 
			// coco
			// 
			this->coco->Font = (gcnew System::Drawing::Font(L"supermarket", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->coco->Location = System::Drawing::Point(630, 562);
			this->coco->Name = L"coco";
			this->coco->Size = System::Drawing::Size(105, 45);
			this->coco->TabIndex = 148;
			this->coco->Text = L"Eco-post";
			this->coco->UseVisualStyleBackColor = true;
			// 
			// cf
			// 
			this->cf->BackColor = System::Drawing::Color::LightGreen;
			this->cf->Font = (gcnew System::Drawing::Font(L"supermarket", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cf->ForeColor = System::Drawing::Color::Black;
			this->cf->Location = System::Drawing::Point(1333, 725);
			this->cf->Name = L"cf";
			this->cf->Size = System::Drawing::Size(85, 45);
			this->cf->TabIndex = 127;
			this->cf->Text = L"confirm";
			this->cf->UseVisualStyleBackColor = false;
			// 
			// re
			// 
			this->re->BackColor = System::Drawing::Color::Khaki;
			this->re->Font = (gcnew System::Drawing::Font(L"supermarket", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->re->ForeColor = System::Drawing::Color::Black;
			this->re->Location = System::Drawing::Point(19, 152);
			this->re->Name = L"re";
			this->re->Size = System::Drawing::Size(85, 45);
			this->re->TabIndex = 126;
			this->re->Text = L"refrech";
			this->re->UseVisualStyleBackColor = false;
			this->re->Click += gcnew System::EventHandler(this, &RegisForm::re_Click);
			// 
			// clear
			// 
			this->clear->BackColor = System::Drawing::Color::LightCoral;
			this->clear->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->clear->Font = (gcnew System::Drawing::Font(L"supermarket", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clear->ForeColor = System::Drawing::Color::Black;
			this->clear->Location = System::Drawing::Point(1241, 725);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(80, 45);
			this->clear->TabIndex = 125;
			this->clear->Text = L"clear";
			this->clear->UseVisualStyleBackColor = false;
			// 
			// sd
			// 
			this->sd->AutoSize = true;
			this->sd->Font = (gcnew System::Drawing::Font(L"supermarket", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sd->ForeColor = System::Drawing::Color::Black;
			this->sd->Location = System::Drawing::Point(79, 39);
			this->sd->Name = L"sd";
			this->sd->Size = System::Drawing::Size(59, 49);
			this->sd->TabIndex = 124;
			this->sd->Text = L"ผู้ส่ง";
			// 
			// calcal
			// 
			this->calcal->Font = (gcnew System::Drawing::Font(L"supermarket", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->calcal->ForeColor = System::Drawing::Color::Black;
			this->calcal->Location = System::Drawing::Point(87, 632);
			this->calcal->Name = L"calcal";
			this->calcal->Size = System::Drawing::Size(100, 45);
			this->calcal->TabIndex = 123;
			this->calcal->Text = L"คำนวณ";
			this->calcal->UseVisualStyleBackColor = true;
			// 
			// emem
			// 
			this->emem->Font = (gcnew System::Drawing::Font(L"supermarket", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emem->ForeColor = System::Drawing::Color::Black;
			this->emem->Location = System::Drawing::Point(505, 562);
			this->emem->Name = L"emem";
			this->emem->Size = System::Drawing::Size(105, 45);
			this->emem->TabIndex = 122;
			this->emem->Text = L"EMS";
			this->emem->UseVisualStyleBackColor = true;
			// 
			// free
			// 
			this->free->Font = (gcnew System::Drawing::Font(L"supermarket", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->free->ForeColor = System::Drawing::Color::Black;
			this->free->Location = System::Drawing::Point(380, 562);
			this->free->Name = L"free";
			this->free->Size = System::Drawing::Size(105, 45);
			this->free->TabIndex = 121;
			this->free->Text = L"ลงทะเบียน";
			this->free->UseVisualStyleBackColor = true;
			// 
			// type
			// 
			this->type->AutoSize = true;
			this->type->Font = (gcnew System::Drawing::Font(L"supermarket", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->type->Location = System::Drawing::Point(379, 505);
			this->type->Name = L"type";
			this->type->Size = System::Drawing::Size(144, 41);
			this->type->TabIndex = 120;
			this->type->Text = L"ประเภทการจัดส่ง";
			// 
			// putW
			// 
			this->putW->Location = System::Drawing::Point(87, 562);
			this->putW->Multiline = true;
			this->putW->Name = L"putW";
			this->putW->Size = System::Drawing::Size(200, 45);
			this->putW->TabIndex = 119;
			// 
			// weight
			// 
			this->weight->AutoSize = true;
			this->weight->Font = (gcnew System::Drawing::Font(L"supermarket", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->weight->Location = System::Drawing::Point(81, 505);
			this->weight->Name = L"weight";
			this->weight->Size = System::Drawing::Size(175, 41);
			this->weight->TabIndex = 118;
			this->weight->Text = L"น้ำหนักจริงของสิ่งของ";
			// 
			// XXXX
			// 
			this->XXXX->Location = System::Drawing::Point(512, 399);
			this->XXXX->Multiline = true;
			this->XXXX->Name = L"XXXX";
			this->XXXX->Size = System::Drawing::Size(196, 45);
			this->XXXX->TabIndex = 117;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"supermarket", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(405, 410);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(107, 35);
			this->label10->TabIndex = 116;
			this->label10->Text = L"รหัสไปรษณีย์";
			// 
			// PVPV
			// 
			this->PVPV->Location = System::Drawing::Point(169, 398);
			this->PVPV->Multiline = true;
			this->PVPV->Name = L"PVPV";
			this->PVPV->Size = System::Drawing::Size(230, 45);
			this->PVPV->TabIndex = 115;
			// 
			// amam
			// 
			this->amam->Location = System::Drawing::Point(499, 341);
			this->amam->Multiline = true;
			this->amam->Name = L"amam";
			this->amam->Size = System::Drawing::Size(200, 45);
			this->amam->TabIndex = 113;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"supermarket", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(409, 350);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(90, 35);
			this->label8->TabIndex = 112;
			this->label8->Text = L"เขต/อำเภอ";
			// 
			// CCCC
			// 
			this->CCCC->Location = System::Drawing::Point(203, 339);
			this->CCCC->Multiline = true;
			this->CCCC->Name = L"CCCC";
			this->CCCC->Size = System::Drawing::Size(200, 45);
			this->CCCC->TabIndex = 111;
			// 
			// soysoy
			// 
			this->soysoy->Location = System::Drawing::Point(426, 280);
			this->soysoy->Multiline = true;
			this->soysoy->Name = L"soysoy";
			this->soysoy->Size = System::Drawing::Size(189, 45);
			this->soysoy->TabIndex = 109;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"supermarket", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(351, 291);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(75, 35);
			this->label6->TabIndex = 108;
			this->label6->Text = L"หมู่/ซอย";
			// 
			// number
			// 
			this->number->Location = System::Drawing::Point(156, 280);
			this->number->Multiline = true;
			this->number->Name = L"number";
			this->number->Size = System::Drawing::Size(189, 45);
			this->number->TabIndex = 107;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"supermarket", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(109, 291);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(49, 35);
			this->label5->TabIndex = 106;
			this->label5->Text = L"เลขที่";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"supermarket", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(79, 233);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 49);
			this->label4->TabIndex = 105;
			this->label4->Text = L"ที่อยู่";
			// 
			// CALL
			// 
			this->CALL->Location = System::Drawing::Point(242, 168);
			this->CALL->Multiline = true;
			this->CALL->Name = L"CALL";
			this->CALL->Size = System::Drawing::Size(226, 45);
			this->CALL->TabIndex = 104;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"supermarket", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(109, 178);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(134, 35);
			this->label3->TabIndex = 103;
			this->label3->Text = L"หมายเลขโทรศัพท์";
			// 
			// SNSN
			// 
			this->SNSN->Location = System::Drawing::Point(450, 108);
			this->SNSN->Multiline = true;
			this->SNSN->Name = L"SNSN";
			this->SNSN->Size = System::Drawing::Size(230, 45);
			this->SNSN->TabIndex = 102;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"supermarket", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(379, 119);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(75, 35);
			this->label2->TabIndex = 101;
			this->label2->Text = L"นามสกุล";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// NNNN
			// 
			this->NNNN->Location = System::Drawing::Point(143, 107);
			this->NNNN->Multiline = true;
			this->NNNN->Name = L"NNNN";
			this->NNNN->Size = System::Drawing::Size(230, 45);
			this->NNNN->TabIndex = 100;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"supermarket", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(109, 119);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 35);
			this->label1->TabIndex = 99;
			this->label1->Text = L"ชื่อ";
			// 
			// pop
			// 
			this->pop->BackColor = System::Drawing::Color::LightSlateGray;
			this->pop->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pop->Controls->Add(this->pictureBox9);
			this->pop->Controls->Add(this->pictureBox8);
			this->pop->Controls->Add(this->service);
			this->pop->Controls->Add(this->price);
			this->pop->Controls->Add(this->id);
			this->pop->Controls->Add(this->re);
			this->pop->Controls->Add(this->pc);
			this->pop->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->pop->Location = System::Drawing::Point(794, 503);
			this->pop->Name = L"pop";
			this->pop->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->pop->Size = System::Drawing::Size(416, 217);
			this->pop->TabIndex = 150;
			// 
			// service
			// 
			this->service->AutoSize = true;
			this->service->BackColor = System::Drawing::Color::Black;
			this->service->Font = (gcnew System::Drawing::Font(L"supermarket", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->service->ForeColor = System::Drawing::Color::White;
			this->service->Location = System::Drawing::Point(79, 33);
			this->service->Name = L"service";
			this->service->Size = System::Drawing::Size(88, 41);
			this->service->TabIndex = 68;
			this->service->Text = L"ค่าบริการ";
			// 
			// price
			// 
			this->price->AutoSize = true;
			this->price->BackColor = System::Drawing::Color::LightSlateGray;
			this->price->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->price->ForeColor = System::Drawing::Color::Black;
			this->price->Location = System::Drawing::Point(79, 87);
			this->price->Name = L"price";
			this->price->Size = System::Drawing::Size(56, 28);
			this->price->TabIndex = 46;
			this->price->Text = L"xxxx";
			// 
			// id
			// 
			this->id->AutoSize = true;
			this->id->BackColor = System::Drawing::Color::LightSlateGray;
			this->id->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->id->ForeColor = System::Drawing::Color::Black;
			this->id->Location = System::Drawing::Point(250, 87);
			this->id->Name = L"id";
			this->id->Size = System::Drawing::Size(110, 28);
			this->id->TabIndex = 93;
			this->id->Text = L"ID xxxxxx";
			// 
			// pc
			// 
			this->pc->AutoSize = true;
			this->pc->BackColor = System::Drawing::Color::Black;
			this->pc->Font = (gcnew System::Drawing::Font(L"supermarket", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pc->ForeColor = System::Drawing::Color::White;
			this->pc->Location = System::Drawing::Point(250, 33);
			this->pc->Name = L"pc";
			this->pc->Size = System::Drawing::Size(79, 41);
			this->pc->TabIndex = 69;
			this->pc->Text = L"เลขพัสดุ";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pictureBox1->BackColor = System::Drawing::Color::PapayaWhip;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-1, 503);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1502, 322);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 153;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::PapayaWhip;
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox2->Enabled = false;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(329, 504);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(45, 40);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 174;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(35, 505);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(40, 40);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 176;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(38, 39);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(40, 40);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 177;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(38, 230);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(40, 40);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 178;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.Image")));
			this->pictureBox6->Location = System::Drawing::Point(794, 230);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(40, 40);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox6->TabIndex = 198;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(794, 39);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(40, 40);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 197;
			this->pictureBox7->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"supermarket", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Black;
			this->label7->Location = System::Drawing::Point(835, 39);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(59, 49);
			this->label7->TabIndex = 196;
			this->label7->Text = L"ผู้ส่ง";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(1268, 399);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(196, 45);
			this->textBox1->TabIndex = 195;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"supermarket", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(1161, 410);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(107, 35);
			this->label9->TabIndex = 194;
			this->label9->Text = L"รหัสไปรษณีย์";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(925, 398);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(230, 45);
			this->textBox2->TabIndex = 193;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(1255, 341);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(200, 45);
			this->textBox3->TabIndex = 192;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"supermarket", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(1165, 350);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(90, 35);
			this->label11->TabIndex = 191;
			this->label11->Text = L"เขต/อำเภอ";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(959, 339);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(200, 45);
			this->textBox4->TabIndex = 190;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(1182, 280);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(189, 45);
			this->textBox5->TabIndex = 189;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"supermarket", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(1107, 291);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(75, 35);
			this->label12->TabIndex = 188;
			this->label12->Text = L"หมู่/ซอย";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(912, 280);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(189, 45);
			this->textBox6->TabIndex = 187;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"supermarket", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(865, 291);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(49, 35);
			this->label13->TabIndex = 186;
			this->label13->Text = L"เลขที่";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"supermarket", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(835, 233);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(63, 49);
			this->label14->TabIndex = 185;
			this->label14->Text = L"ที่อยู่";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(998, 168);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(226, 45);
			this->textBox7->TabIndex = 184;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"supermarket", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(865, 178);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(134, 35);
			this->label15->TabIndex = 183;
			this->label15->Text = L"หมายเลขโทรศัพท์";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(1206, 108);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(230, 45);
			this->textBox8->TabIndex = 182;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"supermarket", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(1135, 119);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(75, 35);
			this->label16->TabIndex = 181;
			this->label16->Text = L"นามสกุล";
			this->label16->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(899, 107);
			this->textBox9->Multiline = true;
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(230, 45);
			this->textBox9->TabIndex = 180;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"supermarket", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::Black;
			this->label17->Location = System::Drawing::Point(865, 119);
			this->label17->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(34, 35);
			this->label17->TabIndex = 179;
			this->label17->Text = L"ชื่อ";
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(32, 33);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(40, 40);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 199;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(203, 33);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(40, 40);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 199;
			this->pictureBox9->TabStop = false;
			// 
			// RegisForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PapayaWhip;
			this->ClientSize = System::Drawing::Size(1498, 825);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->coco);
			this->Controls->Add(this->cf);
			this->Controls->Add(this->clear);
			this->Controls->Add(this->sd);
			this->Controls->Add(this->calcal);
			this->Controls->Add(this->emem);
			this->Controls->Add(this->free);
			this->Controls->Add(this->type);
			this->Controls->Add(this->putW);
			this->Controls->Add(this->weight);
			this->Controls->Add(this->XXXX);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->PVPV);
			this->Controls->Add(this->amam);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->CCCC);
			this->Controls->Add(this->soysoy);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->number);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->CALL);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->SNSN);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->NNNN);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pop);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"RegisForm";
			this->Text = L"RegisForm";
			this->pop->ResumeLayout(false);
			this->pop->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
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
};
}
