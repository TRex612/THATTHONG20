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
	private: System::Windows::Forms::Button^ clear2;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ coco;
	private: System::Windows::Forms::Label^ rcp;
	private: System::Windows::Forms::TextBox^ code;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ PV;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ DDDD;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ TTTT;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::TextBox^ soyy;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ numnum;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ TELE;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ SN;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::TextBox^ NN;
	private: System::Windows::Forms::Label^ label24;
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
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ amam;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ CCCC;
	private: System::Windows::Forms::Label^ label7;
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
			this->clear2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->coco = (gcnew System::Windows::Forms::Button());
			this->rcp = (gcnew System::Windows::Forms::Label());
			this->code = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->PV = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->DDDD = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->TTTT = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->soyy = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->numnum = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->TELE = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->SN = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->NN = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
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
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->amam = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->CCCC = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
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
			this->pop->SuspendLayout();
			this->SuspendLayout();
			// 
			// clear2
			// 
			this->clear2->BackColor = System::Drawing::Color::LightCoral;
			this->clear2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->clear2->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clear2->ForeColor = System::Drawing::Color::Black;
			this->clear2->Location = System::Drawing::Point(1156, 725);
			this->clear2->Name = L"clear2";
			this->clear2->Size = System::Drawing::Size(80, 45);
			this->clear2->TabIndex = 152;
			this->clear2->Text = L"clear";
			this->clear2->UseVisualStyleBackColor = false;
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
			this->coco->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->coco->Location = System::Drawing::Point(580, 560);
			this->coco->Name = L"coco";
			this->coco->Size = System::Drawing::Size(105, 45);
			this->coco->TabIndex = 148;
			this->coco->Text = L"Eco-post";
			this->coco->UseVisualStyleBackColor = true;
			// 
			// rcp
			// 
			this->rcp->AutoSize = true;
			this->rcp->Font = (gcnew System::Drawing::Font(L"Angsana New", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rcp->ForeColor = System::Drawing::Color::Black;
			this->rcp->Location = System::Drawing::Point(785, 34);
			this->rcp->Name = L"rcp";
			this->rcp->Size = System::Drawing::Size(53, 40);
			this->rcp->TabIndex = 147;
			this->rcp->Text = L"ผู้รับ";
			// 
			// code
			// 
			this->code->Location = System::Drawing::Point(1211, 394);
			this->code->Multiline = true;
			this->code->Name = L"code";
			this->code->Size = System::Drawing::Size(196, 45);
			this->code->TabIndex = 146;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Angsana New", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(1105, 408);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(99, 31);
			this->label12->TabIndex = 145;
			this->label12->Text = L"รหัสไปรษณีย์";
			// 
			// PV
			// 
			this->PV->Location = System::Drawing::Point(869, 393);
			this->PV->Multiline = true;
			this->PV->Name = L"PV";
			this->PV->Size = System::Drawing::Size(230, 45);
			this->PV->TabIndex = 144;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Angsana New", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(815, 407);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(57, 31);
			this->label13->TabIndex = 143;
			this->label13->Text = L"จังหวัด";
			// 
			// DDDD
			// 
			this->DDDD->Location = System::Drawing::Point(1190, 336);
			this->DDDD->Multiline = true;
			this->DDDD->Name = L"DDDD";
			this->DDDD->Size = System::Drawing::Size(200, 45);
			this->DDDD->TabIndex = 142;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Angsana New", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(1112, 348);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(79, 31);
			this->label14->TabIndex = 141;
			this->label14->Text = L"เขต/อำเภอ";
			// 
			// TTTT
			// 
			this->TTTT->Location = System::Drawing::Point(906, 336);
			this->TTTT->Multiline = true;
			this->TTTT->Name = L"TTTT";
			this->TTTT->Size = System::Drawing::Size(200, 45);
			this->TTTT->TabIndex = 140;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Angsana New", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(815, 348);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(85, 31);
			this->label15->TabIndex = 139;
			this->label15->Text = L"ตำบล/แขวง";
			// 
			// soyy
			// 
			this->soyy->Location = System::Drawing::Point(1135, 275);
			this->soyy->Multiline = true;
			this->soyy->Name = L"soyy";
			this->soyy->Size = System::Drawing::Size(189, 45);
			this->soyy->TabIndex = 138;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Angsana New", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(1066, 283);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(66, 31);
			this->label16->TabIndex = 137;
			this->label16->Text = L"หมู่/ซอย";
			// 
			// numnum
			// 
			this->numnum->Location = System::Drawing::Point(869, 275);
			this->numnum->Multiline = true;
			this->numnum->Name = L"numnum";
			this->numnum->Size = System::Drawing::Size(189, 45);
			this->numnum->TabIndex = 136;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Angsana New", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(815, 289);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(46, 31);
			this->label17->TabIndex = 135;
			this->label17->Text = L"เลขที่";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Angsana New", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(787, 228);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(53, 40);
			this->label18->TabIndex = 134;
			this->label18->Text = L"ที่อยู่";
			// 
			// TELE
			// 
			this->TELE->Location = System::Drawing::Point(949, 163);
			this->TELE->Multiline = true;
			this->TELE->Name = L"TELE";
			this->TELE->Size = System::Drawing::Size(226, 45);
			this->TELE->TabIndex = 133;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Angsana New", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(815, 177);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(128, 31);
			this->label19->TabIndex = 132;
			this->label19->Text = L"หมายเลขโทรศัพท์";
			// 
			// SN
			// 
			this->SN->Location = System::Drawing::Point(1156, 103);
			this->SN->Multiline = true;
			this->SN->Name = L"SN";
			this->SN->Size = System::Drawing::Size(230, 45);
			this->SN->TabIndex = 131;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Angsana New", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::Black;
			this->label20->Location = System::Drawing::Point(1085, 117);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(70, 31);
			this->label20->TabIndex = 130;
			this->label20->Text = L"นามสกุล";
			this->label20->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// NN
			// 
			this->NN->Location = System::Drawing::Point(849, 102);
			this->NN->Multiline = true;
			this->NN->Name = L"NN";
			this->NN->Size = System::Drawing::Size(230, 45);
			this->NN->TabIndex = 129;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Angsana New", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::Black;
			this->label24->Location = System::Drawing::Point(815, 117);
			this->label24->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(36, 31);
			this->label24->TabIndex = 128;
			this->label24->Text = L"ชื่อ ";
			// 
			// cf
			// 
			this->cf->BackColor = System::Drawing::Color::LightGreen;
			this->cf->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
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
			this->re->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->re->ForeColor = System::Drawing::Color::Black;
			this->re->Location = System::Drawing::Point(1242, 725);
			this->re->Name = L"re";
			this->re->Size = System::Drawing::Size(85, 45);
			this->re->TabIndex = 126;
			this->re->Text = L"refrech";
			this->re->UseVisualStyleBackColor = false;
			// 
			// clear
			// 
			this->clear->BackColor = System::Drawing::Color::LightCoral;
			this->clear->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->clear->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->clear->ForeColor = System::Drawing::Color::Black;
			this->clear->Location = System::Drawing::Point(1327, 460);
			this->clear->Name = L"clear";
			this->clear->Size = System::Drawing::Size(80, 45);
			this->clear->TabIndex = 125;
			this->clear->Text = L"clear";
			this->clear->UseVisualStyleBackColor = false;
			// 
			// sd
			// 
			this->sd->AutoSize = true;
			this->sd->Font = (gcnew System::Drawing::Font(L"Angsana New", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sd->ForeColor = System::Drawing::Color::Black;
			this->sd->Location = System::Drawing::Point(29, 34);
			this->sd->Name = L"sd";
			this->sd->Size = System::Drawing::Size(51, 40);
			this->sd->TabIndex = 124;
			this->sd->Text = L"ผู้ส่ง";
			// 
			// calcal
			// 
			this->calcal->Font = (gcnew System::Drawing::Font(L"Angsana New", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->calcal->ForeColor = System::Drawing::Color::Black;
			this->calcal->Location = System::Drawing::Point(37, 630);
			this->calcal->Name = L"calcal";
			this->calcal->Size = System::Drawing::Size(100, 45);
			this->calcal->TabIndex = 123;
			this->calcal->Text = L"คำนวณ";
			this->calcal->UseVisualStyleBackColor = true;
			// 
			// emem
			// 
			this->emem->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->emem->ForeColor = System::Drawing::Color::Black;
			this->emem->Location = System::Drawing::Point(455, 560);
			this->emem->Name = L"emem";
			this->emem->Size = System::Drawing::Size(105, 45);
			this->emem->TabIndex = 122;
			this->emem->Text = L"EMS";
			this->emem->UseVisualStyleBackColor = true;
			// 
			// free
			// 
			this->free->Font = (gcnew System::Drawing::Font(L"Angsana New", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->free->ForeColor = System::Drawing::Color::Black;
			this->free->Location = System::Drawing::Point(330, 560);
			this->free->Name = L"free";
			this->free->Size = System::Drawing::Size(105, 45);
			this->free->TabIndex = 121;
			this->free->Text = L"ลงทะเบียน";
			this->free->UseVisualStyleBackColor = true;
			// 
			// type
			// 
			this->type->AutoSize = true;
			this->type->Font = (gcnew System::Drawing::Font(L"Angsana New", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->type->Location = System::Drawing::Point(328, 508);
			this->type->Name = L"type";
			this->type->Size = System::Drawing::Size(151, 37);
			this->type->TabIndex = 120;
			this->type->Text = L"ประเภทการจัดส่ง";
			// 
			// putW
			// 
			this->putW->Location = System::Drawing::Point(37, 560);
			this->putW->Multiline = true;
			this->putW->Name = L"putW";
			this->putW->Size = System::Drawing::Size(200, 45);
			this->putW->TabIndex = 119;
			// 
			// weight
			// 
			this->weight->AutoSize = true;
			this->weight->Font = (gcnew System::Drawing::Font(L"Angsana New", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->weight->Location = System::Drawing::Point(31, 508);
			this->weight->Name = L"weight";
			this->weight->Size = System::Drawing::Size(187, 37);
			this->weight->TabIndex = 118;
			this->weight->Text = L"น้ำหนักจริงของสิ่งของ";
			// 
			// XXXX
			// 
			this->XXXX->Location = System::Drawing::Point(455, 394);
			this->XXXX->Multiline = true;
			this->XXXX->Name = L"XXXX";
			this->XXXX->Size = System::Drawing::Size(196, 45);
			this->XXXX->TabIndex = 117;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Angsana New", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(349, 408);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(99, 31);
			this->label10->TabIndex = 116;
			this->label10->Text = L"รหัสไปรษณีย์";
			// 
			// PVPV
			// 
			this->PVPV->Location = System::Drawing::Point(113, 393);
			this->PVPV->Multiline = true;
			this->PVPV->Name = L"PVPV";
			this->PVPV->Size = System::Drawing::Size(230, 45);
			this->PVPV->TabIndex = 115;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Angsana New", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(59, 407);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(57, 31);
			this->label9->TabIndex = 114;
			this->label9->Text = L"จังหวัด";
			// 
			// amam
			// 
			this->amam->Location = System::Drawing::Point(434, 336);
			this->amam->Multiline = true;
			this->amam->Name = L"amam";
			this->amam->Size = System::Drawing::Size(200, 45);
			this->amam->TabIndex = 113;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Angsana New", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(356, 348);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(79, 31);
			this->label8->TabIndex = 112;
			this->label8->Text = L"เขต/อำเภอ";
			// 
			// CCCC
			// 
			this->CCCC->Location = System::Drawing::Point(150, 334);
			this->CCCC->Multiline = true;
			this->CCCC->Name = L"CCCC";
			this->CCCC->Size = System::Drawing::Size(200, 45);
			this->CCCC->TabIndex = 111;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Angsana New", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(59, 348);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(85, 31);
			this->label7->TabIndex = 110;
			this->label7->Text = L"ตำบล/แขวง";
			// 
			// soysoy
			// 
			this->soysoy->Location = System::Drawing::Point(374, 275);
			this->soysoy->Multiline = true;
			this->soysoy->Name = L"soysoy";
			this->soysoy->Size = System::Drawing::Size(189, 45);
			this->soysoy->TabIndex = 109;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Angsana New", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(306, 289);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(66, 31);
			this->label6->TabIndex = 108;
			this->label6->Text = L"หมู่/ซอย";
			// 
			// number
			// 
			this->number->Location = System::Drawing::Point(111, 275);
			this->number->Multiline = true;
			this->number->Name = L"number";
			this->number->Size = System::Drawing::Size(189, 45);
			this->number->TabIndex = 107;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Angsana New", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(59, 289);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(46, 31);
			this->label5->TabIndex = 106;
			this->label5->Text = L"เลขที่";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Angsana New", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(31, 228);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(53, 40);
			this->label4->TabIndex = 105;
			this->label4->Text = L"ที่อยู่";
			// 
			// CALL
			// 
			this->CALL->Location = System::Drawing::Point(193, 163);
			this->CALL->Multiline = true;
			this->CALL->Name = L"CALL";
			this->CALL->Size = System::Drawing::Size(226, 45);
			this->CALL->TabIndex = 104;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Angsana New", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(59, 177);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(128, 31);
			this->label3->TabIndex = 103;
			this->label3->Text = L"หมายเลขโทรศัพท์";
			// 
			// SNSN
			// 
			this->SNSN->Location = System::Drawing::Point(400, 103);
			this->SNSN->Multiline = true;
			this->SNSN->Name = L"SNSN";
			this->SNSN->Size = System::Drawing::Size(230, 45);
			this->SNSN->TabIndex = 102;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Angsana New", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(329, 117);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 31);
			this->label2->TabIndex = 101;
			this->label2->Text = L"นามสกุล";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// NNNN
			// 
			this->NNNN->Location = System::Drawing::Point(93, 102);
			this->NNNN->Multiline = true;
			this->NNNN->Name = L"NNNN";
			this->NNNN->Size = System::Drawing::Size(230, 45);
			this->NNNN->TabIndex = 100;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Angsana New", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(59, 117);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 31);
			this->label1->TabIndex = 99;
			this->label1->Text = L"ชื่อ ";
			// 
			// pop
			// 
			this->pop->BackColor = System::Drawing::Color::DarkGray;
			this->pop->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pop->Controls->Add(this->service);
			this->pop->Controls->Add(this->price);
			this->pop->Controls->Add(this->id);
			this->pop->Controls->Add(this->pc);
			this->pop->ForeColor = System::Drawing::Color::WhiteSmoke;
			this->pop->Location = System::Drawing::Point(794, 503);
			this->pop->Name = L"pop";
			this->pop->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->pop->Size = System::Drawing::Size(305, 172);
			this->pop->TabIndex = 150;
			// 
			// service
			// 
			this->service->AutoSize = true;
			this->service->BackColor = System::Drawing::Color::Black;
			this->service->Font = (gcnew System::Drawing::Font(L"Angsana New", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->service->ForeColor = System::Drawing::Color::White;
			this->service->Location = System::Drawing::Point(30, 33);
			this->service->Name = L"service";
			this->service->Size = System::Drawing::Size(88, 37);
			this->service->TabIndex = 68;
			this->service->Text = L"ค่าบริการ";
			// 
			// price
			// 
			this->price->AutoSize = true;
			this->price->BackColor = System::Drawing::SystemColors::AppWorkspace;
			this->price->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->price->ForeColor = System::Drawing::Color::Black;
			this->price->Location = System::Drawing::Point(30, 87);
			this->price->Name = L"price";
			this->price->Size = System::Drawing::Size(56, 28);
			this->price->TabIndex = 46;
			this->price->Text = L"xxxx";
			// 
			// id
			// 
			this->id->AutoSize = true;
			this->id->BackColor = System::Drawing::Color::DarkGray;
			this->id->Font = (gcnew System::Drawing::Font(L"Tahoma", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->id->ForeColor = System::Drawing::Color::Black;
			this->id->Location = System::Drawing::Point(167, 87);
			this->id->Name = L"id";
			this->id->Size = System::Drawing::Size(110, 28);
			this->id->TabIndex = 93;
			this->id->Text = L"ID xxxxxx";
			// 
			// pc
			// 
			this->pc->AutoSize = true;
			this->pc->BackColor = System::Drawing::Color::Black;
			this->pc->Font = (gcnew System::Drawing::Font(L"Angsana New", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pc->ForeColor = System::Drawing::Color::White;
			this->pc->Location = System::Drawing::Point(167, 33);
			this->pc->Name = L"pc";
			this->pc->Size = System::Drawing::Size(80, 37);
			this->pc->TabIndex = 69;
			this->pc->Text = L"เลขพัสดุ";
			// 
			// RegisForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1460, 825);
			this->Controls->Add(this->clear2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->coco);
			this->Controls->Add(this->rcp);
			this->Controls->Add(this->code);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->PV);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->DDDD);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->TTTT);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->soyy);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->numnum);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->TELE);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->SN);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->NN);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->cf);
			this->Controls->Add(this->re);
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
			this->Controls->Add(this->label9);
			this->Controls->Add(this->amam);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->CCCC);
			this->Controls->Add(this->label7);
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
			this->Name = L"RegisForm";
			this->Text = L"RegisForm";
			this->pop->ResumeLayout(false);
			this->pop->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
