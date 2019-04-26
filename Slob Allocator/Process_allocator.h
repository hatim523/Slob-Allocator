#pragma once
#include<stdlib.h>
#include"form2.h"
#include<string>
#include<string.h>
namespace SlobAllocator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Process_allocator
	/// </summary>
	public ref class Process_allocator : public System::Windows::Forms::Form
	{
	public:
		Process_allocator(void)
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
		~Process_allocator()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  p1_size;
	protected:
	private: System::Windows::Forms::Label^  p2_size;
	private: System::Windows::Forms::Label^  p3_size;
	private: System::Windows::Forms::Label^  p4_size;
	private: System::Windows::Forms::Label^  p5_size;
	private: System::Windows::Forms::Label^  p6_size;
	private: System::Windows::Forms::Label^  p7_size;
	private: System::Windows::Forms::Label^  p8_size;
	private: System::Windows::Forms::Label^  p9_size;
	private: System::Windows::Forms::Label^  p10_size;
	private: System::Windows::Forms::TextBox^  p1;
	private: System::Windows::Forms::TextBox^  p2;
	private: System::Windows::Forms::TextBox^  p3;
	private: System::Windows::Forms::TextBox^  p4;
	private: System::Windows::Forms::TextBox^  p5;
	private: System::Windows::Forms::TextBox^  p6;
	private: System::Windows::Forms::TextBox^  p7;
	private: System::Windows::Forms::TextBox^  p8;
	private: System::Windows::Forms::TextBox^  p9;
	private: System::Windows::Forms::TextBox^  p10;











	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Panel^  panel7;
	private: System::Windows::Forms::Panel^  panel8;
	private: System::Windows::Forms::Panel^  panel9;
	private: System::Windows::Forms::Panel^  panel10;
	private: System::Windows::Forms::Label^  w1;
	private: System::Windows::Forms::Label^  w2;
	private: System::Windows::Forms::Label^  w3;
	private: System::Windows::Forms::Label^  w4;
	private: System::Windows::Forms::Label^  w5;
	private: System::Windows::Forms::Label^  w6;
	private: System::Windows::Forms::Label^  w7;
	private: System::Windows::Forms::Label^  w8;
	private: System::Windows::Forms::Label^  w9;
	private: System::Windows::Forms::Label^  w10;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  part_1;
	private: System::Windows::Forms::Label^  part_2;
	private: System::Windows::Forms::Label^  part_3;
	private: System::Windows::Forms::Label^  part_4;
	private: System::Windows::Forms::Label^  part_5;
	private: System::Windows::Forms::Label^  part_6;
	private: System::Windows::Forms::Label^  part_7;
	private: System::Windows::Forms::Label^  part_8;
	private: System::Windows::Forms::Label^  part_9;
	private: System::Windows::Forms::Label^  part_10;
private: System::Windows::Forms::Label^  label23;
private: System::Windows::Forms::Label^  label24;
private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::Panel^  panel11;
private: System::Windows::Forms::Panel^  panel12;
private: System::Windows::Forms::Panel^  panel13;
private: System::Windows::Forms::Panel^  panel14;
private: System::Windows::Forms::Panel^  panel15;
private: System::Windows::Forms::Panel^  panel16;
private: System::Windows::Forms::Panel^  panel17;
private: System::Windows::Forms::Panel^  panel18;
private: System::Windows::Forms::Panel^  panel19;
private: System::Windows::Forms::Panel^  panel20;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::Label^  label38;
private: System::Windows::Forms::Label^  label39;
private: System::Windows::Forms::Label^  label40;
private: System::Windows::Forms::Label^  label41;
private: System::Windows::Forms::Label^  label42;
private: System::Windows::Forms::Label^  label43;
private: System::Windows::Forms::Label^  label44;
private: System::Windows::Forms::Label^  label45;
private: System::Windows::Forms::Label^  label46;
private: System::Windows::Forms::Panel^  panel21;
private: System::Windows::Forms::Panel^  panel22;
private: System::Windows::Forms::Panel^  panel23;
private: System::Windows::Forms::Panel^  panel24;
private: System::Windows::Forms::Panel^  panel25;
private: System::Windows::Forms::Panel^  panel26;
private: System::Windows::Forms::Panel^  panel27;
private: System::Windows::Forms::Panel^  panel28;
private: System::Windows::Forms::Panel^  panel29;
private: System::Windows::Forms::Panel^  panel30;
private: System::Windows::Forms::Label^  label47;
private: System::Windows::Forms::Label^  label48;
private: System::Windows::Forms::Label^  label49;
private: System::Windows::Forms::Label^  label50;
private: System::Windows::Forms::Label^  label51;
private: System::Windows::Forms::Label^  label52;
private: System::Windows::Forms::Label^  label53;
private: System::Windows::Forms::Label^  label54;
private: System::Windows::Forms::Label^  label55;
private: System::Windows::Forms::Label^  label56;
private: System::Windows::Forms::Label^  label57;
private: System::Windows::Forms::Label^  label58;
private: System::Windows::Forms::Label^  label59;
private: System::Windows::Forms::Label^  label60;
private: System::Windows::Forms::Label^  label61;
private: System::Windows::Forms::Label^  label62;
private: System::Windows::Forms::Label^  label63;
private: System::Windows::Forms::Label^  label64;
private: System::Windows::Forms::Label^  label65;
private: System::Windows::Forms::Label^  label66;
private: System::Windows::Forms::Label^  label67;
private: System::Windows::Forms::Button^  button2;
private: System::Windows::Forms::Button^  button3;
private: System::Windows::Forms::Button^  button4;
private: System::Windows::Forms::Button^  button5;
private: System::Windows::Forms::Button^  button6;
private: System::Windows::Forms::Label^  label68;
private: System::Windows::Forms::Label^  label69;
private: System::Windows::Forms::Label^  label70;
private: System::Windows::Forms::Label^  label71;
private: System::Windows::Forms::Label^  label72;
private: System::Windows::Forms::Label^  label73;
private: System::Windows::Forms::Label^  label74;
private: System::Windows::Forms::Label^  label75;
private: System::Windows::Forms::Label^  label76;
private: System::Windows::Forms::Label^  label77;
private: System::Windows::Forms::Label^  label78;
private: System::Windows::Forms::Label^  label79;
private: System::Windows::Forms::Label^  label80;
private: System::Windows::Forms::Label^  label81;
private: System::Windows::Forms::Label^  label82;
private: System::Windows::Forms::Label^  label83;
private: System::Windows::Forms::Label^  label84;
private: System::Windows::Forms::Label^  label85;
private: System::Windows::Forms::Label^  label86;
private: System::Windows::Forms::Label^  label87;
private: System::Windows::Forms::Label^  label88;
private: System::Windows::Forms::Label^  label89;
private: System::Windows::Forms::Label^  label90;
private: System::Windows::Forms::Label^  label91;
private: System::Windows::Forms::Label^  label92;
private: System::Windows::Forms::Label^  label93;
private: System::Windows::Forms::Label^  label94;
private: System::Windows::Forms::Label^  label95;
private: System::Windows::Forms::Label^  label96;
private: System::Windows::Forms::Label^  label97;
private: System::Windows::Forms::Label^  label98;
private: System::Windows::Forms::Label^  label99;
private: System::Windows::Forms::Label^  label100;
private: System::Windows::Forms::Label^  label101;
private: System::Windows::Forms::Label^  label102;
private: System::Windows::Forms::Label^  label103;
private: System::Windows::Forms::Label^  label104;
private: System::Windows::Forms::Label^  label105;
















	private: System::ComponentModel::IContainer^  components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Process_allocator::typeid));
			this->p1_size = (gcnew System::Windows::Forms::Label());
			this->p2_size = (gcnew System::Windows::Forms::Label());
			this->p3_size = (gcnew System::Windows::Forms::Label());
			this->p4_size = (gcnew System::Windows::Forms::Label());
			this->p5_size = (gcnew System::Windows::Forms::Label());
			this->p6_size = (gcnew System::Windows::Forms::Label());
			this->p7_size = (gcnew System::Windows::Forms::Label());
			this->p8_size = (gcnew System::Windows::Forms::Label());
			this->p9_size = (gcnew System::Windows::Forms::Label());
			this->p10_size = (gcnew System::Windows::Forms::Label());
			this->p1 = (gcnew System::Windows::Forms::TextBox());
			this->p2 = (gcnew System::Windows::Forms::TextBox());
			this->p3 = (gcnew System::Windows::Forms::TextBox());
			this->p4 = (gcnew System::Windows::Forms::TextBox());
			this->p5 = (gcnew System::Windows::Forms::TextBox());
			this->p6 = (gcnew System::Windows::Forms::TextBox());
			this->p7 = (gcnew System::Windows::Forms::TextBox());
			this->p8 = (gcnew System::Windows::Forms::TextBox());
			this->p9 = (gcnew System::Windows::Forms::TextBox());
			this->p10 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->w1 = (gcnew System::Windows::Forms::Label());
			this->w2 = (gcnew System::Windows::Forms::Label());
			this->w3 = (gcnew System::Windows::Forms::Label());
			this->w4 = (gcnew System::Windows::Forms::Label());
			this->w5 = (gcnew System::Windows::Forms::Label());
			this->w6 = (gcnew System::Windows::Forms::Label());
			this->w7 = (gcnew System::Windows::Forms::Label());
			this->w8 = (gcnew System::Windows::Forms::Label());
			this->w9 = (gcnew System::Windows::Forms::Label());
			this->w10 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->part_1 = (gcnew System::Windows::Forms::Label());
			this->part_2 = (gcnew System::Windows::Forms::Label());
			this->part_3 = (gcnew System::Windows::Forms::Label());
			this->part_4 = (gcnew System::Windows::Forms::Label());
			this->part_5 = (gcnew System::Windows::Forms::Label());
			this->part_6 = (gcnew System::Windows::Forms::Label());
			this->part_7 = (gcnew System::Windows::Forms::Label());
			this->part_8 = (gcnew System::Windows::Forms::Label());
			this->part_9 = (gcnew System::Windows::Forms::Label());
			this->part_10 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->panel25 = (gcnew System::Windows::Forms::Panel());
			this->panel26 = (gcnew System::Windows::Forms::Panel());
			this->panel27 = (gcnew System::Windows::Forms::Panel());
			this->panel28 = (gcnew System::Windows::Forms::Panel());
			this->panel29 = (gcnew System::Windows::Forms::Panel());
			this->panel30 = (gcnew System::Windows::Forms::Panel());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->label88 = (gcnew System::Windows::Forms::Label());
			this->label89 = (gcnew System::Windows::Forms::Label());
			this->label90 = (gcnew System::Windows::Forms::Label());
			this->label91 = (gcnew System::Windows::Forms::Label());
			this->label92 = (gcnew System::Windows::Forms::Label());
			this->label93 = (gcnew System::Windows::Forms::Label());
			this->label94 = (gcnew System::Windows::Forms::Label());
			this->label95 = (gcnew System::Windows::Forms::Label());
			this->label96 = (gcnew System::Windows::Forms::Label());
			this->label97 = (gcnew System::Windows::Forms::Label());
			this->label98 = (gcnew System::Windows::Forms::Label());
			this->label99 = (gcnew System::Windows::Forms::Label());
			this->label100 = (gcnew System::Windows::Forms::Label());
			this->label101 = (gcnew System::Windows::Forms::Label());
			this->label102 = (gcnew System::Windows::Forms::Label());
			this->label103 = (gcnew System::Windows::Forms::Label());
			this->label104 = (gcnew System::Windows::Forms::Label());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// p1_size
			// 
			this->p1_size->AutoSize = true;
			this->p1_size->BackColor = System::Drawing::Color::Transparent;
			this->p1_size->Font = (gcnew System::Drawing::Font(L"Forte", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->p1_size->ForeColor = System::Drawing::Color::SteelBlue;
			this->p1_size->Location = System::Drawing::Point(29, 69);
			this->p1_size->Name = L"p1_size";
			this->p1_size->Size = System::Drawing::Size(84, 17);
			this->p1_size->TabIndex = 0;
			this->p1_size->Text = L"Process 1:";
			this->p1_size->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p2_size
			// 
			this->p2_size->AutoSize = true;
			this->p2_size->BackColor = System::Drawing::Color::Transparent;
			this->p2_size->Font = (gcnew System::Drawing::Font(L"Forte", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->p2_size->ForeColor = System::Drawing::Color::SteelBlue;
			this->p2_size->Location = System::Drawing::Point(29, 95);
			this->p2_size->Name = L"p2_size";
			this->p2_size->Size = System::Drawing::Size(85, 17);
			this->p2_size->TabIndex = 1;
			this->p2_size->Text = L"Process 2:";
			this->p2_size->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p3_size
			// 
			this->p3_size->AutoSize = true;
			this->p3_size->BackColor = System::Drawing::Color::Transparent;
			this->p3_size->Font = (gcnew System::Drawing::Font(L"Forte", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->p3_size->ForeColor = System::Drawing::Color::SteelBlue;
			this->p3_size->Location = System::Drawing::Point(29, 121);
			this->p3_size->Name = L"p3_size";
			this->p3_size->Size = System::Drawing::Size(86, 17);
			this->p3_size->TabIndex = 2;
			this->p3_size->Text = L"Process 3:";
			this->p3_size->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p4_size
			// 
			this->p4_size->AutoSize = true;
			this->p4_size->BackColor = System::Drawing::Color::Transparent;
			this->p4_size->Font = (gcnew System::Drawing::Font(L"Forte", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->p4_size->ForeColor = System::Drawing::Color::SteelBlue;
			this->p4_size->Location = System::Drawing::Point(29, 147);
			this->p4_size->Name = L"p4_size";
			this->p4_size->Size = System::Drawing::Size(86, 17);
			this->p4_size->TabIndex = 3;
			this->p4_size->Text = L"Process 4:";
			this->p4_size->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->p4_size->Click += gcnew System::EventHandler(this, &Process_allocator::p4_size_Click);
			// 
			// p5_size
			// 
			this->p5_size->AutoSize = true;
			this->p5_size->BackColor = System::Drawing::Color::Transparent;
			this->p5_size->Font = (gcnew System::Drawing::Font(L"Forte", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->p5_size->ForeColor = System::Drawing::Color::SteelBlue;
			this->p5_size->Location = System::Drawing::Point(27, 173);
			this->p5_size->Name = L"p5_size";
			this->p5_size->Size = System::Drawing::Size(86, 17);
			this->p5_size->TabIndex = 4;
			this->p5_size->Text = L"Process 5:";
			this->p5_size->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p6_size
			// 
			this->p6_size->AutoSize = true;
			this->p6_size->BackColor = System::Drawing::Color::Transparent;
			this->p6_size->Font = (gcnew System::Drawing::Font(L"Forte", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->p6_size->ForeColor = System::Drawing::Color::SteelBlue;
			this->p6_size->Location = System::Drawing::Point(28, 199);
			this->p6_size->Name = L"p6_size";
			this->p6_size->Size = System::Drawing::Size(86, 17);
			this->p6_size->TabIndex = 5;
			this->p6_size->Text = L"Process 6:";
			this->p6_size->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p7_size
			// 
			this->p7_size->AutoSize = true;
			this->p7_size->BackColor = System::Drawing::Color::Transparent;
			this->p7_size->Font = (gcnew System::Drawing::Font(L"Forte", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->p7_size->ForeColor = System::Drawing::Color::SteelBlue;
			this->p7_size->Location = System::Drawing::Point(29, 225);
			this->p7_size->Name = L"p7_size";
			this->p7_size->Size = System::Drawing::Size(85, 17);
			this->p7_size->TabIndex = 6;
			this->p7_size->Text = L"Process 7:";
			this->p7_size->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p8_size
			// 
			this->p8_size->AutoSize = true;
			this->p8_size->BackColor = System::Drawing::Color::Transparent;
			this->p8_size->Font = (gcnew System::Drawing::Font(L"Forte", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->p8_size->ForeColor = System::Drawing::Color::SteelBlue;
			this->p8_size->Location = System::Drawing::Point(29, 251);
			this->p8_size->Name = L"p8_size";
			this->p8_size->Size = System::Drawing::Size(86, 17);
			this->p8_size->TabIndex = 7;
			this->p8_size->Text = L"Process 8:";
			this->p8_size->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p9_size
			// 
			this->p9_size->AutoSize = true;
			this->p9_size->BackColor = System::Drawing::Color::Transparent;
			this->p9_size->Font = (gcnew System::Drawing::Font(L"Forte", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->p9_size->ForeColor = System::Drawing::Color::SteelBlue;
			this->p9_size->Location = System::Drawing::Point(28, 277);
			this->p9_size->Name = L"p9_size";
			this->p9_size->Size = System::Drawing::Size(86, 17);
			this->p9_size->TabIndex = 8;
			this->p9_size->Text = L"Process 9:";
			this->p9_size->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p10_size
			// 
			this->p10_size->AutoSize = true;
			this->p10_size->BackColor = System::Drawing::Color::Transparent;
			this->p10_size->Font = (gcnew System::Drawing::Font(L"Forte", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->p10_size->ForeColor = System::Drawing::Color::SteelBlue;
			this->p10_size->Location = System::Drawing::Point(27, 303);
			this->p10_size->Name = L"p10_size";
			this->p10_size->Size = System::Drawing::Size(93, 17);
			this->p10_size->TabIndex = 9;
			this->p10_size->Text = L"Process 10:";
			this->p10_size->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// p1
			// 
			this->p1->Location = System::Drawing::Point(119, 69);
			this->p1->Name = L"p1";
			this->p1->Size = System::Drawing::Size(100, 20);
			this->p1->TabIndex = 10;
			this->p1->Text = L"0";
			this->p1->TextChanged += gcnew System::EventHandler(this, &Process_allocator::p1_TextChanged);
			// 
			// p2
			// 
			this->p2->Location = System::Drawing::Point(119, 95);
			this->p2->Name = L"p2";
			this->p2->Size = System::Drawing::Size(100, 20);
			this->p2->TabIndex = 11;
			this->p2->Text = L"0";
			// 
			// p3
			// 
			this->p3->Location = System::Drawing::Point(119, 121);
			this->p3->Name = L"p3";
			this->p3->Size = System::Drawing::Size(100, 20);
			this->p3->TabIndex = 12;
			this->p3->Text = L"0";
			// 
			// p4
			// 
			this->p4->Location = System::Drawing::Point(119, 147);
			this->p4->Name = L"p4";
			this->p4->Size = System::Drawing::Size(100, 20);
			this->p4->TabIndex = 13;
			this->p4->Text = L"0";
			// 
			// p5
			// 
			this->p5->Location = System::Drawing::Point(119, 173);
			this->p5->Name = L"p5";
			this->p5->Size = System::Drawing::Size(100, 20);
			this->p5->TabIndex = 14;
			this->p5->Text = L"0";
			// 
			// p6
			// 
			this->p6->Location = System::Drawing::Point(119, 199);
			this->p6->Name = L"p6";
			this->p6->Size = System::Drawing::Size(100, 20);
			this->p6->TabIndex = 15;
			this->p6->Text = L"0";
			// 
			// p7
			// 
			this->p7->Location = System::Drawing::Point(119, 225);
			this->p7->Name = L"p7";
			this->p7->Size = System::Drawing::Size(100, 20);
			this->p7->TabIndex = 16;
			this->p7->Text = L"0";
			// 
			// p8
			// 
			this->p8->Location = System::Drawing::Point(119, 251);
			this->p8->Name = L"p8";
			this->p8->Size = System::Drawing::Size(100, 20);
			this->p8->TabIndex = 17;
			this->p8->Text = L"0";
			// 
			// p9
			// 
			this->p9->Location = System::Drawing::Point(119, 277);
			this->p9->Name = L"p9";
			this->p9->Size = System::Drawing::Size(100, 20);
			this->p9->TabIndex = 18;
			this->p9->Text = L"0";
			// 
			// p10
			// 
			this->p10->Location = System::Drawing::Point(119, 303);
			this->p10->Name = L"p10";
			this->p10->Size = System::Drawing::Size(100, 20);
			this->p10->TabIndex = 19;
			this->p10->Text = L"0";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Location = System::Drawing::Point(405, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(362, 45);
			this->label1->TabIndex = 20;
			this->label1->Text = L"Process Allocator";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Forte", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::SteelBlue;
			this->label2->Location = System::Drawing::Point(225, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 17);
			this->label2->TabIndex = 21;
			this->label2->Text = L"MB";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Forte", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::SteelBlue;
			this->label3->Location = System::Drawing::Point(225, 95);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 17);
			this->label3->TabIndex = 22;
			this->label3->Text = L"MB";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Forte", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::SteelBlue;
			this->label4->Location = System::Drawing::Point(225, 121);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(37, 17);
			this->label4->TabIndex = 23;
			this->label4->Text = L"MB";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Forte", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::SteelBlue;
			this->label5->Location = System::Drawing::Point(225, 147);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 17);
			this->label5->TabIndex = 24;
			this->label5->Text = L"MB";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Forte", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::SteelBlue;
			this->label6->Location = System::Drawing::Point(225, 173);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(37, 17);
			this->label6->TabIndex = 25;
			this->label6->Text = L"MB";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Font = (gcnew System::Drawing::Font(L"Forte", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::SteelBlue;
			this->label7->Location = System::Drawing::Point(225, 199);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(37, 17);
			this->label7->TabIndex = 26;
			this->label7->Text = L"MB";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Forte", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::SteelBlue;
			this->label8->Location = System::Drawing::Point(225, 225);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(37, 17);
			this->label8->TabIndex = 27;
			this->label8->Text = L"MB";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Forte", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::SteelBlue;
			this->label9->Location = System::Drawing::Point(225, 251);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(37, 17);
			this->label9->TabIndex = 28;
			this->label9->Text = L"MB";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Forte", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::SteelBlue;
			this->label10->Location = System::Drawing::Point(225, 277);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(37, 17);
			this->label10->TabIndex = 29;
			this->label10->Text = L"MB";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Forte", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::SteelBlue;
			this->label11->Location = System::Drawing::Point(225, 303);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(37, 17);
			this->label11->TabIndex = 30;
			this->label11->Text = L"MB";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(613, 303);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(154, 41);
			this->button1->TabIndex = 31;
			this->button1->Text = L"Allocate";
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageAboveText;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Process_allocator::button1_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::PaleGreen;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Location = System::Drawing::Point(119, 383);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(52, 49);
			this->panel1->TabIndex = 32;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Process_allocator::panel1_Paint);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::PaleGreen;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Location = System::Drawing::Point(170, 383);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(73, 49);
			this->panel2->TabIndex = 33;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Process_allocator::panel2_Paint);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::PaleGreen;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Location = System::Drawing::Point(240, 383);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(97, 49);
			this->panel3->TabIndex = 34;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::PaleGreen;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel4->Location = System::Drawing::Point(334, 383);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(69, 49);
			this->panel4->TabIndex = 33;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::PaleGreen;
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel5->Location = System::Drawing::Point(401, 383);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(166, 49);
			this->panel5->TabIndex = 35;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::PaleGreen;
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel6->Location = System::Drawing::Point(565, 383);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(77, 49);
			this->panel6->TabIndex = 34;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::PaleGreen;
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel7->Location = System::Drawing::Point(638, 383);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(107, 49);
			this->panel7->TabIndex = 35;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::PaleGreen;
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel8->Location = System::Drawing::Point(742, 383);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(100, 49);
			this->panel8->TabIndex = 34;
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::Color::PaleGreen;
			this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel9->Location = System::Drawing::Point(841, 383);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(23, 49);
			this->panel9->TabIndex = 33;
			// 
			// panel10
			// 
			this->panel10->BackColor = System::Drawing::Color::PaleGreen;
			this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel10->Location = System::Drawing::Point(864, 383);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(166, 49);
			this->panel10->TabIndex = 36;
			// 
			// w1
			// 
			this->w1->AutoSize = true;
			this->w1->BackColor = System::Drawing::Color::Transparent;
			this->w1->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->w1->ForeColor = System::Drawing::Color::Navy;
			this->w1->Location = System::Drawing::Point(268, 69);
			this->w1->Name = L"w1";
			this->w1->Size = System::Drawing::Size(0, 17);
			this->w1->TabIndex = 37;
			this->w1->Click += gcnew System::EventHandler(this, &Process_allocator::label12_Click);
			// 
			// w2
			// 
			this->w2->AutoSize = true;
			this->w2->BackColor = System::Drawing::Color::Transparent;
			this->w2->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->w2->ForeColor = System::Drawing::Color::Navy;
			this->w2->Location = System::Drawing::Point(268, 95);
			this->w2->Name = L"w2";
			this->w2->Size = System::Drawing::Size(0, 17);
			this->w2->TabIndex = 39;
			// 
			// w3
			// 
			this->w3->AutoSize = true;
			this->w3->BackColor = System::Drawing::Color::Transparent;
			this->w3->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->w3->ForeColor = System::Drawing::Color::Navy;
			this->w3->Location = System::Drawing::Point(268, 121);
			this->w3->Name = L"w3";
			this->w3->Size = System::Drawing::Size(0, 17);
			this->w3->TabIndex = 40;
			// 
			// w4
			// 
			this->w4->AutoSize = true;
			this->w4->BackColor = System::Drawing::Color::Transparent;
			this->w4->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->w4->ForeColor = System::Drawing::Color::Navy;
			this->w4->Location = System::Drawing::Point(268, 147);
			this->w4->Name = L"w4";
			this->w4->Size = System::Drawing::Size(0, 17);
			this->w4->TabIndex = 41;
			// 
			// w5
			// 
			this->w5->AutoSize = true;
			this->w5->BackColor = System::Drawing::Color::Transparent;
			this->w5->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->w5->ForeColor = System::Drawing::Color::Navy;
			this->w5->Location = System::Drawing::Point(268, 173);
			this->w5->Name = L"w5";
			this->w5->Size = System::Drawing::Size(0, 17);
			this->w5->TabIndex = 42;
			// 
			// w6
			// 
			this->w6->AutoSize = true;
			this->w6->BackColor = System::Drawing::Color::Transparent;
			this->w6->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->w6->ForeColor = System::Drawing::Color::Navy;
			this->w6->Location = System::Drawing::Point(268, 199);
			this->w6->Name = L"w6";
			this->w6->Size = System::Drawing::Size(0, 17);
			this->w6->TabIndex = 43;
			// 
			// w7
			// 
			this->w7->AutoSize = true;
			this->w7->BackColor = System::Drawing::Color::Transparent;
			this->w7->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->w7->ForeColor = System::Drawing::Color::Navy;
			this->w7->Location = System::Drawing::Point(268, 225);
			this->w7->Name = L"w7";
			this->w7->Size = System::Drawing::Size(0, 17);
			this->w7->TabIndex = 44;
			// 
			// w8
			// 
			this->w8->AutoSize = true;
			this->w8->BackColor = System::Drawing::Color::Transparent;
			this->w8->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->w8->ForeColor = System::Drawing::Color::Navy;
			this->w8->Location = System::Drawing::Point(268, 251);
			this->w8->Name = L"w8";
			this->w8->Size = System::Drawing::Size(0, 17);
			this->w8->TabIndex = 45;
			// 
			// w9
			// 
			this->w9->AutoSize = true;
			this->w9->BackColor = System::Drawing::Color::Transparent;
			this->w9->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->w9->ForeColor = System::Drawing::Color::Navy;
			this->w9->Location = System::Drawing::Point(268, 277);
			this->w9->Name = L"w9";
			this->w9->Size = System::Drawing::Size(0, 17);
			this->w9->TabIndex = 46;
			// 
			// w10
			// 
			this->w10->AutoSize = true;
			this->w10->BackColor = System::Drawing::Color::Transparent;
			this->w10->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->w10->ForeColor = System::Drawing::Color::Navy;
			this->w10->Location = System::Drawing::Point(268, 303);
			this->w10->Name = L"w10";
			this->w10->Size = System::Drawing::Size(0, 17);
			this->w10->TabIndex = 47;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->ForeColor = System::Drawing::Color::LightPink;
			this->label12->Location = System::Drawing::Point(116, 435);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(40, 15);
			this->label12->TabIndex = 48;
			this->label12->Text = L"4 MB";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::LightPink;
			this->label13->Location = System::Drawing::Point(179, 435);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(48, 15);
			this->label13->TabIndex = 49;
			this->label13->Text = L"16 MB";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::LightPink;
			this->label14->Location = System::Drawing::Point(268, 435);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(48, 15);
			this->label14->TabIndex = 50;
			this->label14->Text = L"22 MB";
			this->label14->Click += gcnew System::EventHandler(this, &Process_allocator::label14_Click);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::LightPink;
			this->label15->Location = System::Drawing::Point(346, 435);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(48, 15);
			this->label15->TabIndex = 51;
			this->label15->Text = L"16 MB";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::Color::Transparent;
			this->label16->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::LightPink;
			this->label16->Location = System::Drawing::Point(464, 435);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(48, 15);
			this->label16->TabIndex = 52;
			this->label16->Text = L"64 MB";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::Color::Transparent;
			this->label17->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::LightPink;
			this->label17->Location = System::Drawing::Point(575, 435);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(48, 15);
			this->label17->TabIndex = 53;
			this->label17->Text = L"14 MB";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->ForeColor = System::Drawing::Color::LightPink;
			this->label18->Location = System::Drawing::Point(669, 435);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(48, 15);
			this->label18->TabIndex = 54;
			this->label18->Text = L"22 MB";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->ForeColor = System::Drawing::Color::LightPink;
			this->label19->Location = System::Drawing::Point(764, 435);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(48, 15);
			this->label19->TabIndex = 55;
			this->label19->Text = L"32 MB";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::Color::Transparent;
			this->label20->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::LightPink;
			this->label20->Location = System::Drawing::Point(832, 435);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(40, 15);
			this->label20->TabIndex = 56;
			this->label20->Text = L"2 MB";
			this->label20->Click += gcnew System::EventHandler(this, &Process_allocator::label20_Click);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::Color::Transparent;
			this->label21->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->ForeColor = System::Drawing::Color::LightPink;
			this->label21->Location = System::Drawing::Point(927, 435);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(48, 15);
			this->label21->TabIndex = 57;
			this->label21->Text = L"64 MB";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::Color::Transparent;
			this->label22->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->ForeColor = System::Drawing::Color::Tomato;
			this->label22->Location = System::Drawing::Point(12, 397);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(99, 24);
			this->label22->TabIndex = 58;
			this->label22->Text = L"First Fit";
			// 
			// part_1
			// 
			this->part_1->AutoSize = true;
			this->part_1->BackColor = System::Drawing::Color::Transparent;
			this->part_1->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->part_1->Location = System::Drawing::Point(116, 367);
			this->part_1->Name = L"part_1";
			this->part_1->Size = System::Drawing::Size(55, 16);
			this->part_1->TabIndex = 59;
			this->part_1->Text = L"Empty";
			// 
			// part_2
			// 
			this->part_2->AutoSize = true;
			this->part_2->BackColor = System::Drawing::Color::Transparent;
			this->part_2->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->part_2->Location = System::Drawing::Point(179, 367);
			this->part_2->Name = L"part_2";
			this->part_2->Size = System::Drawing::Size(55, 16);
			this->part_2->TabIndex = 60;
			this->part_2->Text = L"Empty";
			// 
			// part_3
			// 
			this->part_3->AutoSize = true;
			this->part_3->BackColor = System::Drawing::Color::Transparent;
			this->part_3->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->part_3->Location = System::Drawing::Point(268, 367);
			this->part_3->Name = L"part_3";
			this->part_3->Size = System::Drawing::Size(55, 16);
			this->part_3->TabIndex = 61;
			this->part_3->Text = L"Empty";
			// 
			// part_4
			// 
			this->part_4->AutoSize = true;
			this->part_4->BackColor = System::Drawing::Color::Transparent;
			this->part_4->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->part_4->Location = System::Drawing::Point(346, 367);
			this->part_4->Name = L"part_4";
			this->part_4->Size = System::Drawing::Size(55, 16);
			this->part_4->TabIndex = 62;
			this->part_4->Text = L"Empty";
			// 
			// part_5
			// 
			this->part_5->AutoSize = true;
			this->part_5->BackColor = System::Drawing::Color::Transparent;
			this->part_5->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->part_5->Location = System::Drawing::Point(464, 367);
			this->part_5->Name = L"part_5";
			this->part_5->Size = System::Drawing::Size(55, 16);
			this->part_5->TabIndex = 63;
			this->part_5->Text = L"Empty";
			// 
			// part_6
			// 
			this->part_6->AutoSize = true;
			this->part_6->BackColor = System::Drawing::Color::Transparent;
			this->part_6->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->part_6->Location = System::Drawing::Point(575, 367);
			this->part_6->Name = L"part_6";
			this->part_6->Size = System::Drawing::Size(55, 16);
			this->part_6->TabIndex = 64;
			this->part_6->Text = L"Empty";
			// 
			// part_7
			// 
			this->part_7->AutoSize = true;
			this->part_7->BackColor = System::Drawing::Color::Transparent;
			this->part_7->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->part_7->Location = System::Drawing::Point(669, 367);
			this->part_7->Name = L"part_7";
			this->part_7->Size = System::Drawing::Size(55, 16);
			this->part_7->TabIndex = 65;
			this->part_7->Text = L"Empty";
			// 
			// part_8
			// 
			this->part_8->AutoSize = true;
			this->part_8->BackColor = System::Drawing::Color::Transparent;
			this->part_8->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->part_8->Location = System::Drawing::Point(764, 367);
			this->part_8->Name = L"part_8";
			this->part_8->Size = System::Drawing::Size(55, 16);
			this->part_8->TabIndex = 66;
			this->part_8->Text = L"Empty";
			// 
			// part_9
			// 
			this->part_9->AutoSize = true;
			this->part_9->BackColor = System::Drawing::Color::Transparent;
			this->part_9->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->part_9->Location = System::Drawing::Point(832, 367);
			this->part_9->Name = L"part_9";
			this->part_9->Size = System::Drawing::Size(55, 16);
			this->part_9->TabIndex = 67;
			this->part_9->Text = L"Empty";
			// 
			// part_10
			// 
			this->part_10->AutoSize = true;
			this->part_10->BackColor = System::Drawing::Color::Transparent;
			this->part_10->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->part_10->Location = System::Drawing::Point(927, 367);
			this->part_10->Name = L"part_10";
			this->part_10->Size = System::Drawing::Size(55, 16);
			this->part_10->TabIndex = 68;
			this->part_10->Text = L"Empty";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::Color::Transparent;
			this->label23->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->ForeColor = System::Drawing::Color::Red;
			this->label23->Location = System::Drawing::Point(270, 51);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(67, 16);
			this->label23->TabIndex = 69;
			this->label23->Text = L"First Fit";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::Color::Transparent;
			this->label24->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::Red;
			this->label24->Location = System::Drawing::Point(365, 51);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(63, 16);
			this->label24->TabIndex = 70;
			this->label24->Text = L"Best Fit";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::Color::Transparent;
			this->label25->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->ForeColor = System::Drawing::Color::Red;
			this->label25->Location = System::Drawing::Point(454, 51);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(74, 16);
			this->label25->TabIndex = 71;
			this->label25->Text = L"Worst Fit";
			// 
			// panel11
			// 
			this->panel11->BackColor = System::Drawing::Color::PaleGreen;
			this->panel11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel11->Location = System::Drawing::Point(864, 502);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(166, 49);
			this->panel11->TabIndex = 46;
			// 
			// panel12
			// 
			this->panel12->BackColor = System::Drawing::Color::PaleGreen;
			this->panel12->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel12->Location = System::Drawing::Point(841, 502);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(23, 49);
			this->panel12->TabIndex = 38;
			// 
			// panel13
			// 
			this->panel13->BackColor = System::Drawing::Color::PaleGreen;
			this->panel13->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel13->Location = System::Drawing::Point(742, 502);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(100, 49);
			this->panel13->TabIndex = 41;
			// 
			// panel14
			// 
			this->panel14->BackColor = System::Drawing::Color::PaleGreen;
			this->panel14->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel14->Location = System::Drawing::Point(638, 502);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(107, 49);
			this->panel14->TabIndex = 44;
			// 
			// panel15
			// 
			this->panel15->BackColor = System::Drawing::Color::PaleGreen;
			this->panel15->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel15->Location = System::Drawing::Point(565, 502);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(77, 49);
			this->panel15->TabIndex = 42;
			// 
			// panel16
			// 
			this->panel16->BackColor = System::Drawing::Color::PaleGreen;
			this->panel16->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel16->Location = System::Drawing::Point(401, 502);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(166, 49);
			this->panel16->TabIndex = 45;
			// 
			// panel17
			// 
			this->panel17->BackColor = System::Drawing::Color::PaleGreen;
			this->panel17->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel17->Location = System::Drawing::Point(334, 502);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(69, 49);
			this->panel17->TabIndex = 39;
			// 
			// panel18
			// 
			this->panel18->BackColor = System::Drawing::Color::PaleGreen;
			this->panel18->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel18->Location = System::Drawing::Point(240, 502);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(97, 49);
			this->panel18->TabIndex = 43;
			// 
			// panel19
			// 
			this->panel19->BackColor = System::Drawing::Color::PaleGreen;
			this->panel19->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel19->Location = System::Drawing::Point(170, 502);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(73, 49);
			this->panel19->TabIndex = 40;
			// 
			// panel20
			// 
			this->panel20->BackColor = System::Drawing::Color::PaleGreen;
			this->panel20->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel20->Location = System::Drawing::Point(119, 502);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(52, 49);
			this->panel20->TabIndex = 37;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::Color::Transparent;
			this->label26->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->ForeColor = System::Drawing::Color::LightPink;
			this->label26->Location = System::Drawing::Point(927, 554);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(48, 15);
			this->label26->TabIndex = 81;
			this->label26->Text = L"64 MB";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::Color::Transparent;
			this->label27->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::Color::LightPink;
			this->label27->Location = System::Drawing::Point(832, 554);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(40, 15);
			this->label27->TabIndex = 80;
			this->label27->Text = L"2 MB";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::Color::Transparent;
			this->label28->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::Color::LightPink;
			this->label28->Location = System::Drawing::Point(764, 554);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(48, 15);
			this->label28->TabIndex = 79;
			this->label28->Text = L"32 MB";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::Color::Transparent;
			this->label29->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::Color::LightPink;
			this->label29->Location = System::Drawing::Point(669, 554);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(48, 15);
			this->label29->TabIndex = 78;
			this->label29->Text = L"22 MB";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::Color::Transparent;
			this->label30->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->ForeColor = System::Drawing::Color::LightPink;
			this->label30->Location = System::Drawing::Point(575, 554);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(48, 15);
			this->label30->TabIndex = 77;
			this->label30->Text = L"14 MB";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->BackColor = System::Drawing::Color::Transparent;
			this->label31->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->ForeColor = System::Drawing::Color::LightPink;
			this->label31->Location = System::Drawing::Point(464, 554);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(48, 15);
			this->label31->TabIndex = 76;
			this->label31->Text = L"64 MB";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::Color::Transparent;
			this->label32->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->ForeColor = System::Drawing::Color::LightPink;
			this->label32->Location = System::Drawing::Point(346, 554);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(48, 15);
			this->label32->TabIndex = 75;
			this->label32->Text = L"16 MB";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->BackColor = System::Drawing::Color::Transparent;
			this->label33->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->ForeColor = System::Drawing::Color::LightPink;
			this->label33->Location = System::Drawing::Point(268, 554);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(48, 15);
			this->label33->TabIndex = 74;
			this->label33->Text = L"22 MB";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->BackColor = System::Drawing::Color::Transparent;
			this->label34->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->ForeColor = System::Drawing::Color::LightPink;
			this->label34->Location = System::Drawing::Point(179, 554);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(48, 15);
			this->label34->TabIndex = 73;
			this->label34->Text = L"16 MB";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->BackColor = System::Drawing::Color::Transparent;
			this->label35->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->ForeColor = System::Drawing::Color::LightPink;
			this->label35->Location = System::Drawing::Point(116, 554);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(40, 15);
			this->label35->TabIndex = 72;
			this->label35->Text = L"4 MB";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->BackColor = System::Drawing::Color::Transparent;
			this->label36->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->ForeColor = System::Drawing::Color::Tomato;
			this->label36->Location = System::Drawing::Point(12, 516);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(93, 24);
			this->label36->TabIndex = 82;
			this->label36->Text = L"Best Fit";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->BackColor = System::Drawing::Color::Transparent;
			this->label37->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->ForeColor = System::Drawing::Color::LightPink;
			this->label37->Location = System::Drawing::Point(927, 673);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(48, 15);
			this->label37->TabIndex = 101;
			this->label37->Text = L"64 MB";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->BackColor = System::Drawing::Color::Transparent;
			this->label38->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->ForeColor = System::Drawing::Color::LightPink;
			this->label38->Location = System::Drawing::Point(832, 673);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(40, 15);
			this->label38->TabIndex = 100;
			this->label38->Text = L"2 MB";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->BackColor = System::Drawing::Color::Transparent;
			this->label39->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->ForeColor = System::Drawing::Color::LightPink;
			this->label39->Location = System::Drawing::Point(764, 673);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(48, 15);
			this->label39->TabIndex = 99;
			this->label39->Text = L"32 MB";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->BackColor = System::Drawing::Color::Transparent;
			this->label40->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->ForeColor = System::Drawing::Color::LightPink;
			this->label40->Location = System::Drawing::Point(669, 673);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(48, 15);
			this->label40->TabIndex = 98;
			this->label40->Text = L"22 MB";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->BackColor = System::Drawing::Color::Transparent;
			this->label41->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->ForeColor = System::Drawing::Color::LightPink;
			this->label41->Location = System::Drawing::Point(575, 673);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(48, 15);
			this->label41->TabIndex = 97;
			this->label41->Text = L"14 MB";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->BackColor = System::Drawing::Color::Transparent;
			this->label42->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label42->ForeColor = System::Drawing::Color::LightPink;
			this->label42->Location = System::Drawing::Point(464, 673);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(48, 15);
			this->label42->TabIndex = 96;
			this->label42->Text = L"64 MB";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->BackColor = System::Drawing::Color::Transparent;
			this->label43->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->ForeColor = System::Drawing::Color::LightPink;
			this->label43->Location = System::Drawing::Point(346, 673);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(48, 15);
			this->label43->TabIndex = 95;
			this->label43->Text = L"16 MB";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->BackColor = System::Drawing::Color::Transparent;
			this->label44->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label44->ForeColor = System::Drawing::Color::LightPink;
			this->label44->Location = System::Drawing::Point(268, 673);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(48, 15);
			this->label44->TabIndex = 94;
			this->label44->Text = L"22 MB";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->BackColor = System::Drawing::Color::Transparent;
			this->label45->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label45->ForeColor = System::Drawing::Color::LightPink;
			this->label45->Location = System::Drawing::Point(179, 673);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(48, 15);
			this->label45->TabIndex = 93;
			this->label45->Text = L"16 MB";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->BackColor = System::Drawing::Color::Transparent;
			this->label46->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label46->ForeColor = System::Drawing::Color::LightPink;
			this->label46->Location = System::Drawing::Point(116, 673);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(40, 15);
			this->label46->TabIndex = 92;
			this->label46->Text = L"4 MB";
			// 
			// panel21
			// 
			this->panel21->BackColor = System::Drawing::Color::PaleGreen;
			this->panel21->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel21->Location = System::Drawing::Point(864, 621);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(166, 49);
			this->panel21->TabIndex = 91;
			// 
			// panel22
			// 
			this->panel22->BackColor = System::Drawing::Color::PaleGreen;
			this->panel22->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel22->Location = System::Drawing::Point(841, 621);
			this->panel22->Name = L"panel22";
			this->panel22->Size = System::Drawing::Size(23, 49);
			this->panel22->TabIndex = 83;
			// 
			// panel23
			// 
			this->panel23->BackColor = System::Drawing::Color::PaleGreen;
			this->panel23->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel23->Location = System::Drawing::Point(742, 621);
			this->panel23->Name = L"panel23";
			this->panel23->Size = System::Drawing::Size(100, 49);
			this->panel23->TabIndex = 86;
			// 
			// panel24
			// 
			this->panel24->BackColor = System::Drawing::Color::PaleGreen;
			this->panel24->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel24->Location = System::Drawing::Point(638, 621);
			this->panel24->Name = L"panel24";
			this->panel24->Size = System::Drawing::Size(107, 49);
			this->panel24->TabIndex = 89;
			// 
			// panel25
			// 
			this->panel25->BackColor = System::Drawing::Color::PaleGreen;
			this->panel25->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel25->Location = System::Drawing::Point(565, 621);
			this->panel25->Name = L"panel25";
			this->panel25->Size = System::Drawing::Size(77, 49);
			this->panel25->TabIndex = 87;
			// 
			// panel26
			// 
			this->panel26->BackColor = System::Drawing::Color::PaleGreen;
			this->panel26->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel26->Location = System::Drawing::Point(401, 621);
			this->panel26->Name = L"panel26";
			this->panel26->Size = System::Drawing::Size(166, 49);
			this->panel26->TabIndex = 90;
			// 
			// panel27
			// 
			this->panel27->BackColor = System::Drawing::Color::PaleGreen;
			this->panel27->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel27->Location = System::Drawing::Point(334, 621);
			this->panel27->Name = L"panel27";
			this->panel27->Size = System::Drawing::Size(69, 49);
			this->panel27->TabIndex = 84;
			// 
			// panel28
			// 
			this->panel28->BackColor = System::Drawing::Color::PaleGreen;
			this->panel28->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel28->Location = System::Drawing::Point(240, 621);
			this->panel28->Name = L"panel28";
			this->panel28->Size = System::Drawing::Size(97, 49);
			this->panel28->TabIndex = 88;
			// 
			// panel29
			// 
			this->panel29->BackColor = System::Drawing::Color::PaleGreen;
			this->panel29->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel29->Location = System::Drawing::Point(170, 621);
			this->panel29->Name = L"panel29";
			this->panel29->Size = System::Drawing::Size(73, 49);
			this->panel29->TabIndex = 85;
			// 
			// panel30
			// 
			this->panel30->BackColor = System::Drawing::Color::PaleGreen;
			this->panel30->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel30->Location = System::Drawing::Point(119, 621);
			this->panel30->Name = L"panel30";
			this->panel30->Size = System::Drawing::Size(52, 49);
			this->panel30->TabIndex = 82;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->BackColor = System::Drawing::Color::Transparent;
			this->label47->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label47->ForeColor = System::Drawing::Color::Tomato;
			this->label47->Location = System::Drawing::Point(5, 634);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(110, 24);
			this->label47->TabIndex = 102;
			this->label47->Text = L"Worst Fit";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->BackColor = System::Drawing::Color::Transparent;
			this->label48->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label48->Location = System::Drawing::Point(365, 71);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(59, 16);
			this->label48->TabIndex = 103;
			this->label48->Text = L"label48";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->BackColor = System::Drawing::Color::Transparent;
			this->label49->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label49->Location = System::Drawing::Point(365, 97);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(59, 16);
			this->label49->TabIndex = 104;
			this->label49->Text = L"label49";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->BackColor = System::Drawing::Color::Transparent;
			this->label50->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label50->Location = System::Drawing::Point(365, 125);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(59, 16);
			this->label50->TabIndex = 105;
			this->label50->Text = L"label50";
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->BackColor = System::Drawing::Color::Transparent;
			this->label51->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label51->Location = System::Drawing::Point(365, 151);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(59, 16);
			this->label51->TabIndex = 106;
			this->label51->Text = L"label51";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->BackColor = System::Drawing::Color::Transparent;
			this->label52->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label52->Location = System::Drawing::Point(365, 177);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(59, 16);
			this->label52->TabIndex = 107;
			this->label52->Text = L"label52";
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->BackColor = System::Drawing::Color::Transparent;
			this->label53->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label53->Location = System::Drawing::Point(365, 203);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(59, 16);
			this->label53->TabIndex = 108;
			this->label53->Text = L"label53";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->BackColor = System::Drawing::Color::Transparent;
			this->label54->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label54->Location = System::Drawing::Point(365, 229);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(59, 16);
			this->label54->TabIndex = 109;
			this->label54->Text = L"label54";
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->BackColor = System::Drawing::Color::Transparent;
			this->label55->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label55->Location = System::Drawing::Point(365, 255);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(59, 16);
			this->label55->TabIndex = 110;
			this->label55->Text = L"label55";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->BackColor = System::Drawing::Color::Transparent;
			this->label56->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label56->Location = System::Drawing::Point(365, 281);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(59, 16);
			this->label56->TabIndex = 111;
			this->label56->Text = L"label56";
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->BackColor = System::Drawing::Color::Transparent;
			this->label57->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label57->Location = System::Drawing::Point(365, 307);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(59, 16);
			this->label57->TabIndex = 112;
			this->label57->Text = L"label57";
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->BackColor = System::Drawing::Color::Transparent;
			this->label58->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label58->Location = System::Drawing::Point(454, 70);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(59, 16);
			this->label58->TabIndex = 113;
			this->label58->Text = L"label58";
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->BackColor = System::Drawing::Color::Transparent;
			this->label59->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label59->Location = System::Drawing::Point(454, 96);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(59, 16);
			this->label59->TabIndex = 114;
			this->label59->Text = L"label59";
			this->label59->Click += gcnew System::EventHandler(this, &Process_allocator::label59_Click);
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->BackColor = System::Drawing::Color::Transparent;
			this->label60->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label60->Location = System::Drawing::Point(454, 125);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(59, 16);
			this->label60->TabIndex = 115;
			this->label60->Text = L"label60";
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->BackColor = System::Drawing::Color::Transparent;
			this->label61->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label61->Location = System::Drawing::Point(454, 151);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(59, 16);
			this->label61->TabIndex = 116;
			this->label61->Text = L"label61";
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->BackColor = System::Drawing::Color::Transparent;
			this->label62->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label62->Location = System::Drawing::Point(454, 177);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(59, 16);
			this->label62->TabIndex = 117;
			this->label62->Text = L"label62";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->BackColor = System::Drawing::Color::Transparent;
			this->label63->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label63->Location = System::Drawing::Point(454, 203);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(59, 16);
			this->label63->TabIndex = 118;
			this->label63->Text = L"label63";
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->BackColor = System::Drawing::Color::Transparent;
			this->label64->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label64->Location = System::Drawing::Point(454, 229);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(59, 16);
			this->label64->TabIndex = 119;
			this->label64->Text = L"label64";
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->BackColor = System::Drawing::Color::Transparent;
			this->label65->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label65->Location = System::Drawing::Point(454, 255);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(59, 16);
			this->label65->TabIndex = 120;
			this->label65->Text = L"label65";
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->BackColor = System::Drawing::Color::Transparent;
			this->label66->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label66->Location = System::Drawing::Point(454, 279);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(59, 16);
			this->label66->TabIndex = 121;
			this->label66->Text = L"label66";
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->BackColor = System::Drawing::Color::Transparent;
			this->label67->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label67->Location = System::Drawing::Point(454, 307);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(59, 16);
			this->label67->TabIndex = 122;
			this->label67->Text = L"label67";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Blue;
			this->button2->Location = System::Drawing::Point(30, 199);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(232, 20);
			this->button2->TabIndex = 123;
			this->button2->Text = L"Add Process";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Process_allocator::button2_Click_1);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Blue;
			this->button3->Location = System::Drawing::Point(30, 225);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(232, 20);
			this->button3->TabIndex = 124;
			this->button3->Text = L"Add Process";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Process_allocator::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::Color::Blue;
			this->button4->Location = System::Drawing::Point(31, 251);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(232, 20);
			this->button4->TabIndex = 125;
			this->button4->Text = L"Add Process";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Process_allocator::button4_Click_1);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::Color::Blue;
			this->button5->Location = System::Drawing::Point(30, 277);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(232, 20);
			this->button5->TabIndex = 126;
			this->button5->Text = L"Add Process";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Process_allocator::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::Color::Blue;
			this->button6->Location = System::Drawing::Point(30, 303);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(232, 20);
			this->button6->TabIndex = 127;
			this->button6->Text = L"Add Process";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Process_allocator::button6_Click);
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->BackColor = System::Drawing::Color::Transparent;
			this->label68->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label68->Location = System::Drawing::Point(927, 483);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(55, 16);
			this->label68->TabIndex = 137;
			this->label68->Text = L"Empty";
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->BackColor = System::Drawing::Color::Transparent;
			this->label69->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label69->Location = System::Drawing::Point(832, 483);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(55, 16);
			this->label69->TabIndex = 136;
			this->label69->Text = L"Empty";
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->BackColor = System::Drawing::Color::Transparent;
			this->label70->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label70->Location = System::Drawing::Point(764, 483);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(55, 16);
			this->label70->TabIndex = 135;
			this->label70->Text = L"Empty";
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->BackColor = System::Drawing::Color::Transparent;
			this->label71->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label71->Location = System::Drawing::Point(669, 483);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(55, 16);
			this->label71->TabIndex = 134;
			this->label71->Text = L"Empty";
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->BackColor = System::Drawing::Color::Transparent;
			this->label72->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label72->Location = System::Drawing::Point(575, 483);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(55, 16);
			this->label72->TabIndex = 133;
			this->label72->Text = L"Empty";
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->BackColor = System::Drawing::Color::Transparent;
			this->label73->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label73->Location = System::Drawing::Point(464, 483);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(55, 16);
			this->label73->TabIndex = 132;
			this->label73->Text = L"Empty";
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->BackColor = System::Drawing::Color::Transparent;
			this->label74->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label74->Location = System::Drawing::Point(346, 483);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(55, 16);
			this->label74->TabIndex = 131;
			this->label74->Text = L"Empty";
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->BackColor = System::Drawing::Color::Transparent;
			this->label75->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label75->Location = System::Drawing::Point(268, 483);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(55, 16);
			this->label75->TabIndex = 130;
			this->label75->Text = L"Empty";
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->BackColor = System::Drawing::Color::Transparent;
			this->label76->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label76->Location = System::Drawing::Point(179, 483);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(55, 16);
			this->label76->TabIndex = 129;
			this->label76->Text = L"Empty";
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->BackColor = System::Drawing::Color::Transparent;
			this->label77->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label77->Location = System::Drawing::Point(116, 483);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(55, 16);
			this->label77->TabIndex = 128;
			this->label77->Text = L"Empty";
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->BackColor = System::Drawing::Color::Transparent;
			this->label78->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label78->Location = System::Drawing::Point(927, 602);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(55, 16);
			this->label78->TabIndex = 147;
			this->label78->Text = L"Empty";
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->BackColor = System::Drawing::Color::Transparent;
			this->label79->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label79->Location = System::Drawing::Point(832, 602);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(55, 16);
			this->label79->TabIndex = 146;
			this->label79->Text = L"Empty";
			// 
			// label80
			// 
			this->label80->AutoSize = true;
			this->label80->BackColor = System::Drawing::Color::Transparent;
			this->label80->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label80->Location = System::Drawing::Point(764, 602);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(55, 16);
			this->label80->TabIndex = 145;
			this->label80->Text = L"Empty";
			// 
			// label81
			// 
			this->label81->AutoSize = true;
			this->label81->BackColor = System::Drawing::Color::Transparent;
			this->label81->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label81->Location = System::Drawing::Point(669, 602);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(55, 16);
			this->label81->TabIndex = 144;
			this->label81->Text = L"Empty";
			// 
			// label82
			// 
			this->label82->AutoSize = true;
			this->label82->BackColor = System::Drawing::Color::Transparent;
			this->label82->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label82->Location = System::Drawing::Point(575, 602);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(55, 16);
			this->label82->TabIndex = 143;
			this->label82->Text = L"Empty";
			// 
			// label83
			// 
			this->label83->AutoSize = true;
			this->label83->BackColor = System::Drawing::Color::Transparent;
			this->label83->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label83->Location = System::Drawing::Point(464, 602);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(55, 16);
			this->label83->TabIndex = 142;
			this->label83->Text = L"Empty";
			// 
			// label84
			// 
			this->label84->AutoSize = true;
			this->label84->BackColor = System::Drawing::Color::Transparent;
			this->label84->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label84->Location = System::Drawing::Point(346, 602);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(55, 16);
			this->label84->TabIndex = 141;
			this->label84->Text = L"Empty";
			// 
			// label85
			// 
			this->label85->AutoSize = true;
			this->label85->BackColor = System::Drawing::Color::Transparent;
			this->label85->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label85->Location = System::Drawing::Point(268, 602);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(55, 16);
			this->label85->TabIndex = 140;
			this->label85->Text = L"Empty";
			// 
			// label86
			// 
			this->label86->AutoSize = true;
			this->label86->BackColor = System::Drawing::Color::Transparent;
			this->label86->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label86->Location = System::Drawing::Point(179, 602);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(55, 16);
			this->label86->TabIndex = 139;
			this->label86->Text = L"Empty";
			// 
			// label87
			// 
			this->label87->AutoSize = true;
			this->label87->BackColor = System::Drawing::Color::Transparent;
			this->label87->Font = (gcnew System::Drawing::Font(L"Lucida Calligraphy", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label87->Location = System::Drawing::Point(116, 602);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(55, 16);
			this->label87->TabIndex = 138;
			this->label87->Text = L"Empty";
			// 
			// label88
			// 
			this->label88->AutoSize = true;
			this->label88->BackColor = System::Drawing::Color::Transparent;
			this->label88->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label88->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label88->Location = System::Drawing::Point(1049, 383);
			this->label88->Name = L"label88";
			this->label88->Size = System::Drawing::Size(129, 16);
			this->label88->TabIndex = 148;
			this->label88->Text = L"Internal Frag: ";
			// 
			// label89
			// 
			this->label89->AutoSize = true;
			this->label89->BackColor = System::Drawing::Color::Transparent;
			this->label89->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label89->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label89->Location = System::Drawing::Point(1049, 416);
			this->label89->Name = L"label89";
			this->label89->Size = System::Drawing::Size(127, 16);
			this->label89->TabIndex = 149;
			this->label89->Text = L"External Frag: ";
			// 
			// label90
			// 
			this->label90->AutoSize = true;
			this->label90->BackColor = System::Drawing::Color::Transparent;
			this->label90->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label90->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label90->Location = System::Drawing::Point(1049, 502);
			this->label90->Name = L"label90";
			this->label90->Size = System::Drawing::Size(129, 16);
			this->label90->TabIndex = 150;
			this->label90->Text = L"Internal Frag: ";
			// 
			// label91
			// 
			this->label91->AutoSize = true;
			this->label91->BackColor = System::Drawing::Color::Transparent;
			this->label91->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label91->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label91->Location = System::Drawing::Point(1049, 535);
			this->label91->Name = L"label91";
			this->label91->Size = System::Drawing::Size(127, 16);
			this->label91->TabIndex = 151;
			this->label91->Text = L"External Frag: ";
			// 
			// label92
			// 
			this->label92->AutoSize = true;
			this->label92->BackColor = System::Drawing::Color::Transparent;
			this->label92->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label92->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label92->Location = System::Drawing::Point(1049, 621);
			this->label92->Name = L"label92";
			this->label92->Size = System::Drawing::Size(129, 16);
			this->label92->TabIndex = 152;
			this->label92->Text = L"Internal Frag: ";
			// 
			// label93
			// 
			this->label93->AutoSize = true;
			this->label93->BackColor = System::Drawing::Color::Transparent;
			this->label93->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label93->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label93->Location = System::Drawing::Point(1049, 654);
			this->label93->Name = L"label93";
			this->label93->Size = System::Drawing::Size(127, 16);
			this->label93->TabIndex = 153;
			this->label93->Text = L"External Frag: ";
			// 
			// label94
			// 
			this->label94->AutoSize = true;
			this->label94->BackColor = System::Drawing::Color::Transparent;
			this->label94->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label94->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label94->Location = System::Drawing::Point(1173, 383);
			this->label94->Name = L"label94";
			this->label94->Size = System::Drawing::Size(36, 16);
			this->label94->TabIndex = 154;
			this->label94->Text = L"size";
			// 
			// label95
			// 
			this->label95->AutoSize = true;
			this->label95->BackColor = System::Drawing::Color::Transparent;
			this->label95->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label95->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label95->Location = System::Drawing::Point(1173, 416);
			this->label95->Name = L"label95";
			this->label95->Size = System::Drawing::Size(36, 16);
			this->label95->TabIndex = 155;
			this->label95->Text = L"size";
			// 
			// label96
			// 
			this->label96->AutoSize = true;
			this->label96->BackColor = System::Drawing::Color::Transparent;
			this->label96->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label96->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label96->Location = System::Drawing::Point(1173, 502);
			this->label96->Name = L"label96";
			this->label96->Size = System::Drawing::Size(36, 16);
			this->label96->TabIndex = 156;
			this->label96->Text = L"size";
			// 
			// label97
			// 
			this->label97->AutoSize = true;
			this->label97->BackColor = System::Drawing::Color::Transparent;
			this->label97->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label97->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label97->Location = System::Drawing::Point(1173, 535);
			this->label97->Name = L"label97";
			this->label97->Size = System::Drawing::Size(36, 16);
			this->label97->TabIndex = 157;
			this->label97->Text = L"size";
			// 
			// label98
			// 
			this->label98->AutoSize = true;
			this->label98->BackColor = System::Drawing::Color::Transparent;
			this->label98->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label98->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label98->Location = System::Drawing::Point(1173, 621);
			this->label98->Name = L"label98";
			this->label98->Size = System::Drawing::Size(36, 16);
			this->label98->TabIndex = 158;
			this->label98->Text = L"size";
			// 
			// label99
			// 
			this->label99->AutoSize = true;
			this->label99->BackColor = System::Drawing::Color::Transparent;
			this->label99->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label99->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label99->Location = System::Drawing::Point(1173, 654);
			this->label99->Name = L"label99";
			this->label99->Size = System::Drawing::Size(36, 16);
			this->label99->TabIndex = 159;
			this->label99->Text = L"size";
			// 
			// label100
			// 
			this->label100->AutoSize = true;
			this->label100->BackColor = System::Drawing::Color::Transparent;
			this->label100->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label100->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label100->Location = System::Drawing::Point(1215, 383);
			this->label100->Name = L"label100";
			this->label100->Size = System::Drawing::Size(30, 16);
			this->label100->TabIndex = 160;
			this->label100->Text = L"MB";
			// 
			// label101
			// 
			this->label101->AutoSize = true;
			this->label101->BackColor = System::Drawing::Color::Transparent;
			this->label101->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label101->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label101->Location = System::Drawing::Point(1215, 416);
			this->label101->Name = L"label101";
			this->label101->Size = System::Drawing::Size(30, 16);
			this->label101->TabIndex = 161;
			this->label101->Text = L"MB";
			// 
			// label102
			// 
			this->label102->AutoSize = true;
			this->label102->BackColor = System::Drawing::Color::Transparent;
			this->label102->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label102->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label102->Location = System::Drawing::Point(1215, 535);
			this->label102->Name = L"label102";
			this->label102->Size = System::Drawing::Size(30, 16);
			this->label102->TabIndex = 162;
			this->label102->Text = L"MB";
			// 
			// label103
			// 
			this->label103->AutoSize = true;
			this->label103->BackColor = System::Drawing::Color::Transparent;
			this->label103->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label103->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label103->Location = System::Drawing::Point(1215, 502);
			this->label103->Name = L"label103";
			this->label103->Size = System::Drawing::Size(30, 16);
			this->label103->TabIndex = 162;
			this->label103->Text = L"MB";
			// 
			// label104
			// 
			this->label104->AutoSize = true;
			this->label104->BackColor = System::Drawing::Color::Transparent;
			this->label104->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label104->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label104->Location = System::Drawing::Point(1215, 621);
			this->label104->Name = L"label104";
			this->label104->Size = System::Drawing::Size(30, 16);
			this->label104->TabIndex = 163;
			this->label104->Text = L"MB";
			// 
			// label105
			// 
			this->label105->AutoSize = true;
			this->label105->BackColor = System::Drawing::Color::Transparent;
			this->label105->Font = (gcnew System::Drawing::Font(L"Lucida Handwriting", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label105->ForeColor = System::Drawing::Color::LavenderBlush;
			this->label105->Location = System::Drawing::Point(1215, 654);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(30, 16);
			this->label105->TabIndex = 164;
			this->label105->Text = L"MB";
			// 
			// Process_allocator
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::MintCream;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1302, 721);
			this->Controls->Add(this->label105);
			this->Controls->Add(this->label104);
			this->Controls->Add(this->label103);
			this->Controls->Add(this->label102);
			this->Controls->Add(this->label101);
			this->Controls->Add(this->label100);
			this->Controls->Add(this->label99);
			this->Controls->Add(this->label98);
			this->Controls->Add(this->label97);
			this->Controls->Add(this->label96);
			this->Controls->Add(this->label95);
			this->Controls->Add(this->label94);
			this->Controls->Add(this->label93);
			this->Controls->Add(this->label92);
			this->Controls->Add(this->label91);
			this->Controls->Add(this->label90);
			this->Controls->Add(this->label89);
			this->Controls->Add(this->label88);
			this->Controls->Add(this->label78);
			this->Controls->Add(this->label79);
			this->Controls->Add(this->label80);
			this->Controls->Add(this->label81);
			this->Controls->Add(this->label82);
			this->Controls->Add(this->label83);
			this->Controls->Add(this->label84);
			this->Controls->Add(this->label85);
			this->Controls->Add(this->label86);
			this->Controls->Add(this->label87);
			this->Controls->Add(this->label68);
			this->Controls->Add(this->label69);
			this->Controls->Add(this->label70);
			this->Controls->Add(this->label71);
			this->Controls->Add(this->label72);
			this->Controls->Add(this->label73);
			this->Controls->Add(this->label74);
			this->Controls->Add(this->label75);
			this->Controls->Add(this->label76);
			this->Controls->Add(this->label77);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label67);
			this->Controls->Add(this->label66);
			this->Controls->Add(this->label65);
			this->Controls->Add(this->label64);
			this->Controls->Add(this->label63);
			this->Controls->Add(this->label62);
			this->Controls->Add(this->label61);
			this->Controls->Add(this->label60);
			this->Controls->Add(this->label59);
			this->Controls->Add(this->label58);
			this->Controls->Add(this->label57);
			this->Controls->Add(this->label56);
			this->Controls->Add(this->label55);
			this->Controls->Add(this->label54);
			this->Controls->Add(this->label53);
			this->Controls->Add(this->label52);
			this->Controls->Add(this->label51);
			this->Controls->Add(this->label50);
			this->Controls->Add(this->label49);
			this->Controls->Add(this->label48);
			this->Controls->Add(this->label47);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label42);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label43);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label44);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label45);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label46);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->panel21);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->panel22);
			this->Controls->Add(this->panel23);
			this->Controls->Add(this->panel11);
			this->Controls->Add(this->panel24);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->panel25);
			this->Controls->Add(this->panel12);
			this->Controls->Add(this->panel26);
			this->Controls->Add(this->panel13);
			this->Controls->Add(this->panel27);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->panel28);
			this->Controls->Add(this->panel14);
			this->Controls->Add(this->panel29);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->panel30);
			this->Controls->Add(this->panel15);
			this->Controls->Add(this->part_10);
			this->Controls->Add(this->panel16);
			this->Controls->Add(this->part_9);
			this->Controls->Add(this->panel17);
			this->Controls->Add(this->part_8);
			this->Controls->Add(this->panel18);
			this->Controls->Add(this->part_7);
			this->Controls->Add(this->panel19);
			this->Controls->Add(this->part_6);
			this->Controls->Add(this->panel20);
			this->Controls->Add(this->part_5);
			this->Controls->Add(this->part_4);
			this->Controls->Add(this->part_3);
			this->Controls->Add(this->part_2);
			this->Controls->Add(this->part_1);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->w10);
			this->Controls->Add(this->w9);
			this->Controls->Add(this->w8);
			this->Controls->Add(this->w7);
			this->Controls->Add(this->w6);
			this->Controls->Add(this->w5);
			this->Controls->Add(this->w4);
			this->Controls->Add(this->w3);
			this->Controls->Add(this->w2);
			this->Controls->Add(this->w1);
			this->Controls->Add(this->panel10);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->p10);
			this->Controls->Add(this->p9);
			this->Controls->Add(this->p8);
			this->Controls->Add(this->p7);
			this->Controls->Add(this->p6);
			this->Controls->Add(this->p5);
			this->Controls->Add(this->p4);
			this->Controls->Add(this->p3);
			this->Controls->Add(this->p2);
			this->Controls->Add(this->p1);
			this->Controls->Add(this->p10_size);
			this->Controls->Add(this->p9_size);
			this->Controls->Add(this->p8_size);
			this->Controls->Add(this->p7_size);
			this->Controls->Add(this->p6_size);
			this->Controls->Add(this->p5_size);
			this->Controls->Add(this->p4_size);
			this->Controls->Add(this->p3_size);
			this->Controls->Add(this->p2_size);
			this->Controls->Add(this->p1_size);
			this->Name = L"Process_allocator";
			this->Text = L"Process_allocator";
			this->Load += gcnew System::EventHandler(this, &Process_allocator::Process_allocator_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void p4_size_Click(System::Object^  sender, System::EventArgs^  e) {
	}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	ResetWait_First_Fit();
	ResetPanel_First_Fit();
	ResetPartitionName_First_Fit();

	ResetWait_Best_Fit();
	ResetPanel_Best_Fit();
	ResetPartitionName_Best_Fit();

	ResetWait_Worst_Fit();
	ResetPanel_Worst_Fit();
	ResetPartitionName_Worst_Fit();

	//Converting String parameters to float
	double size_p[10];
	size_p[0] = System::Convert::ToDouble(p1->Text);
	size_p[1] = System::Convert::ToDouble(p2->Text);
	size_p[2] = System::Convert::ToDouble(p3->Text);
	size_p[3] = System::Convert::ToDouble(p4->Text);
	size_p[4] = System::Convert::ToDouble(p5->Text);
	size_p[5] = System::Convert::ToDouble(p6->Text);
	size_p[6] = System::Convert::ToDouble(p7->Text);
	size_p[7] = System::Convert::ToDouble(p8->Text);
	size_p[8] = System::Convert::ToDouble(p9->Text);
	size_p[9] = System::Convert::ToDouble(p10->Text);

//	w1->Text = "Allocated";

	//
	//First Fit Algorithm
	//
	

	double internal_frag = 0, external_frag = 0;

	int partitions[] = { 4, 16, 22, 16, 64, 14, 22, 32, 2, 64 };
	bool allocation_process[10] = { 0,0,0,0,0,0,0,0,0,0 };
	std::string a = "P-00";

	for (int i = 0; i < 10; i++)
	{
		bool allocated = false;
		for (int j = 0; j < 10; j++)
		{
			if (size_p[i] > 0 && partitions[j] >= size_p[i] && !allocation_process[j])
			{
				//Converting process name to string
				if (i < 9)
				{
					a[3] = '0' + (i + 1);
					a[2] = '0';
				}
				else
				{
					a[2] = '1';
					a[3] = '0';
				}
				String ^process_name = gcnew String(a.c_str());
				Process_Name_First_Fit(j, process_name);
				allocated = true;
				allocation_process[j] = 1;
				internal_frag += partitions[j] - size_p[i];
				First_Panel(j);
				break;
			}
		}
		if (!allocated && size_p[i] != 0)
		{
			external_frag += size_p[i];
			First_Wait(i);
		}
	}
	
	//Internal Fragmentation Display
	label88->Show();
	label94->Text = System::Convert::ToString(internal_frag);
	label94->Show();
	label100->Show();

	//External Fragmentation Display
	label89->Show();
	label95->Text = System::Convert::ToString(external_frag);
	label95->Show();
	label101->Show();

	/*End of First Fit*/


	/*
	* Best Fit Algorithm
	*/
	
	internal_frag = 0;
	external_frag = 0;
	memset(allocation_process, 0, sizeof(bool) * 10);
	a = "P-00";

	for (int i = 0; i < 10; i++)
	{
		int allocation_unit = -1;
		double min_diff = 9999;
		//Converting process name to string
		if (i < 9)
		{
			a[3] = '0' + (i + 1);
			a[2] = '0';
		}
		else
		{
			a[2] = '1';
			a[3] = '0';
		}
		String ^process_name = gcnew String(a.c_str());
		for (int j = 0; j < 10; j++)
		{
			if (!allocation_process[j] && size_p[i] <= partitions[j] && (min_diff > (partitions[j] - size_p[i])) && size_p[i] > 0)
			{
				min_diff = partitions[j] - size_p[i];
				allocation_unit = j;
			}
		}
		if (allocation_unit > -1)	//color code the selected panel
		{
			internal_frag += partitions[allocation_unit] - size_p[i];
			allocation_process[allocation_unit] = true;
			Process_Name_Best_Fit(allocation_unit, process_name);
			Best_Panel(allocation_unit);
		}
		else if (size_p[i] != 0)	//make the process wait
		{
			external_frag += size_p[i];
			Best_Wait(i);
		}
	}

	//Internal Fragmentation Display (Best Fit)
	label90->Show();
	label96->Text = System::Convert::ToString(internal_frag);
	label96->Show();
	label102->Show();

	//External Fragmentation Display (Best Fit)
	label91->Show();
	label97->Text = System::Convert::ToString(external_frag);
	label97->Show();
	label103->Show();

	/*
	* End of Best Fit Algorithm
	*/

	/*
	* Worst Fit Algorithm
	*/

	internal_frag = 0;
	external_frag = 0;
	memset(allocation_process, 0, sizeof(bool) * 10);
	a = "P-00";

	for (int i = 0; i < 10; i++)
	{
		int allocation_unit = -1;
		double max_diff = -1;
		//Converting process name to string
		if (i < 9)
		{
			a[3] = '0' + (i + 1);
			a[2] = '0';
		}
		else
		{
			a[2] = '1';
			a[3] = '0';
		}
		String ^process_name = gcnew String(a.c_str());
		for (int j = 0; j < 10; j++)
		{
			if (!allocation_process[j] && size_p[i] <= partitions[j] && (max_diff < (partitions[j] - size_p[i])) && size_p[i] > 0)
			{
				max_diff = partitions[j] - size_p[i];
				allocation_unit = j;
			}
		}
		if (allocation_unit > -1)	//color code the selected panel
		{
			internal_frag += partitions[allocation_unit] - size_p[i];
			allocation_process[allocation_unit] = true;
			Process_Name_Worst_Fit(allocation_unit, process_name);
			Worst_Panel(allocation_unit);
		}
		else if (size_p[i] != 0)	//make the process wait
		{
			external_frag += size_p[i];
			Worst_Wait(i);
		}
	}

	//Internal Fragmentation Display (Worst Fit)
	label92->Show();
	label98->Text = System::Convert::ToString(internal_frag);
	label98->Show();
	label104->Show();

	//External Fragmentation Display (Worst Fit)
	label93->Show();
	label99->Text = System::Convert::ToString(external_frag);
	label99->Show();
	label105->Show();

	/*
	* End of Worst Fit Algorithm
	*/
}


void Process_Name_First_Fit(int partition, String^ name_process)
{
	switch (partition)
	{
	case 0:
		part_1->ForeColor = System::Drawing::Color::Tomato;
		part_1->Text = name_process;
		part_1->Show();
		break;
	case 1:
		part_2->ForeColor = System::Drawing::Color::Tomato;
		part_2->Text = name_process;
		part_2->Show();
		break;
	case 2:
		part_3->ForeColor = System::Drawing::Color::Tomato;
		part_3->Text = name_process;
		part_3->Show();
		break;
	case 3:
		part_4->ForeColor = System::Drawing::Color::Tomato;
		part_4->Text = name_process;
		part_4->Show();
		break;
	case 4:
		part_5->ForeColor = System::Drawing::Color::Tomato;
		part_5->Text = name_process;
		part_5->Show();
		break;
	case 5:
		part_6->ForeColor = System::Drawing::Color::Tomato;
		part_6->Text = name_process;
		part_6->Show();
		break;
	case 6:
		part_7->ForeColor = System::Drawing::Color::Tomato;
		part_7->Text = name_process;
		part_7->Show();
		break;
	case 7:
		part_8->ForeColor = System::Drawing::Color::Tomato;
		part_8->Text = name_process;
		part_8->Show();
		break;
	case 8:
		part_9->ForeColor = System::Drawing::Color::Tomato;
		part_9->Text = name_process;
		part_9->Show();
		break;
	case 9:
		part_10->ForeColor = System::Drawing::Color::Tomato;
		part_10->Text = name_process;
		part_10->Show();
		break;
	}
}

void Process_Name_Best_Fit(int partition, String^ name_process)
{
	switch (partition)
	{
	case 0:
		label77->ForeColor = System::Drawing::Color::Tomato;
		label77->Text = name_process;
		label77->Show();
		break;
	case 1:
		label76->ForeColor = System::Drawing::Color::Tomato;
		label76->Text = name_process;
		label76->Show();
		break;
	case 2:
		label75->ForeColor = System::Drawing::Color::Tomato;
		label75->Text = name_process;
		label75->Show();
		break;
	case 3:
		label74->ForeColor = System::Drawing::Color::Tomato;
		label74->Text = name_process;
		label74->Show();
		break;
	case 4:
		label73->ForeColor = System::Drawing::Color::Tomato;
		label73->Text = name_process;
		label73->Show();
		break;
	case 5:
		label72->ForeColor = System::Drawing::Color::Tomato;
		label72->Text = name_process;
		label72->Show();
		break;
	case 6:
		label71->ForeColor = System::Drawing::Color::Tomato;
		label71->Text = name_process;
		label71->Show();
		break;
	case 7:
		label70->ForeColor = System::Drawing::Color::Tomato;
		label70->Text = name_process;
		label70->Show();
		break;
	case 8:
		label69->ForeColor = System::Drawing::Color::Tomato;
		label69->Text = name_process;
		label69->Show();
		break;
	case 9:
		label68->ForeColor = System::Drawing::Color::Tomato;
		label68->Text = name_process;
		label68->Show();
		break;
	}
}

void Process_Name_Worst_Fit(int partition, String^ name_process)
{
	switch (partition)
	{
	case 0:
		label87->ForeColor = System::Drawing::Color::Tomato;
		label87->Text = name_process;
		label87->Show();
		break;
	case 1:
		label86->ForeColor = System::Drawing::Color::Tomato;
		label86->Text = name_process;
		label86->Show();
		break;
	case 2:
		label85->ForeColor = System::Drawing::Color::Tomato;
		label85->Text = name_process;
		label85->Show();
		break;
	case 3:
		label84->ForeColor = System::Drawing::Color::Tomato;
		label84->Text = name_process;
		label84->Show();
		break;
	case 4:
		label83->ForeColor = System::Drawing::Color::Tomato;
		label83->Text = name_process;
		label83->Show();
		break;
	case 5:
		label82->ForeColor = System::Drawing::Color::Tomato;
		label82->Text = name_process;
		label82->Show();
		break;
	case 6:
		label81->ForeColor = System::Drawing::Color::Tomato;
		label81->Text = name_process;
		label81->Show();
		break;
	case 7:
		label80->ForeColor = System::Drawing::Color::Tomato;
		label80->Text = name_process;
		label80->Show();
		break;
	case 8:
		label79->ForeColor = System::Drawing::Color::Tomato;
		label79->Text = name_process;
		label79->Show();
		break;
	case 9:
		label78->ForeColor = System::Drawing::Color::Tomato;
		label78->Text = name_process;
		label78->Show();
		break;
	}
}

void ResetWait_First_Fit()
{
	w1->Text = "";
	w2->Text = "";
	w3->Text = "";
	w4->Text = "";
	w5->Text = "";
	w6->Text = "";
	w7->Text = "";
	w8->Text = "";
	w9->Text = "";
	w10->Text = "";
}
void ResetWait_Worst_Fit()
{
	label58->Text = "";
	label58->Show();
	label59->Text = "";
	label59->Show();
	label60->Text = "";
	label60->Show();
	label61->Text = "";
	label61->Show();
	label62->Text = "";
	label62->Show();
	label63->Text = "";
	label63->Show();
	label64->Text = "";
	label64->Show();
	label65->Text = "";
	label65->Show();
	label66->Text = "";
	label66->Show();
	label67->Text = "";
	label67->Show();
}
void ResetWait_Best_Fit()
{
	label48->Text = "";
	label48->Show();
	label49->Text = "";
	label49->Show();
	label50->Text = "";
	label50->Show();
	label51->Text = "";
	label51->Show();
	label52->Text = "";
	label52->Show();
	label53->Text = "";
	label53->Show();
	label54->Text = "";
	label54->Show();
	label55->Text = "";
	label55->Show();
	label56->Text = "";
	label56->Show();
	label57->Text = "";
	label57->Show();
}
void ResetPartitionName_First_Fit()
{
	part_1->Text = "";
	part_2->Text = "";
	part_3->Text = "";
	part_4->Text = "";
	part_5->Text = "";
	part_6->Text = "";
	part_7->Text = "";
	part_8->Text = "";
	part_9->Text = "";
	part_10->Text = "";
}
void ResetPartitionName_Best_Fit()
{
	label68->Text = "";
	label69->Text = "";
	label70->Text = "";
	label71->Text = "";
	label72->Text = "";
	label73->Text = "";
	label74->Text = "";
	label75->Text = "";
	label76->Text = "";
	label77->Text = "";
}
void ResetPartitionName_Worst_Fit()
{
	label78->Text = "";
	label79->Text = "";
	label80->Text = "";
	label81->Text = "";
	label82->Text = "";
	label83->Text = "";
	label84->Text = "";
	label85->Text = "";
	label86->Text = "";
	label87->Text = "";
}
void ResetPanel_First_Fit()
{
	panel1->BackColor = System::Drawing::Color::PaleGreen;
	panel2->BackColor = System::Drawing::Color::PaleGreen;
	panel3->BackColor = System::Drawing::Color::PaleGreen;
	panel4->BackColor = System::Drawing::Color::PaleGreen;
	panel5->BackColor = System::Drawing::Color::PaleGreen;
	panel6->BackColor = System::Drawing::Color::PaleGreen;
	panel7->BackColor = System::Drawing::Color::PaleGreen;
	panel8->BackColor = System::Drawing::Color::PaleGreen;
	panel9->BackColor = System::Drawing::Color::PaleGreen;
	panel10->BackColor = System::Drawing::Color::PaleGreen;
}
void ResetPanel_Worst_Fit()
{
	panel30->BackColor = System::Drawing::Color::PaleGreen;
	panel29->BackColor = System::Drawing::Color::PaleGreen;
	panel28->BackColor = System::Drawing::Color::PaleGreen;
	panel27->BackColor = System::Drawing::Color::PaleGreen;
	panel26->BackColor = System::Drawing::Color::PaleGreen;
	panel25->BackColor = System::Drawing::Color::PaleGreen;
	panel24->BackColor = System::Drawing::Color::PaleGreen;
	panel23->BackColor = System::Drawing::Color::PaleGreen;
	panel22->BackColor = System::Drawing::Color::PaleGreen;
	panel21->BackColor = System::Drawing::Color::PaleGreen;
}
void ResetPanel_Best_Fit()
{
	panel11->BackColor = System::Drawing::Color::PaleGreen;
	panel12->BackColor = System::Drawing::Color::PaleGreen;
	panel13->BackColor = System::Drawing::Color::PaleGreen;
	panel14->BackColor = System::Drawing::Color::PaleGreen;
	panel15->BackColor = System::Drawing::Color::PaleGreen;
	panel16->BackColor = System::Drawing::Color::PaleGreen;
	panel17->BackColor = System::Drawing::Color::PaleGreen;
	panel18->BackColor = System::Drawing::Color::PaleGreen;
	panel19->BackColor = System::Drawing::Color::PaleGreen;
	panel20->BackColor = System::Drawing::Color::PaleGreen;
}

void First_Panel(int panel_number)
{
	switch (panel_number)
	{
		case 0:
			panel1->BackColor = System::Drawing::Color::LimeGreen;
			break;
		case 1:
			panel2->BackColor = System::Drawing::Color::LimeGreen;
			break;
		case 2:
			panel3->BackColor = System::Drawing::Color::LimeGreen;
			break;
		case 3:
			panel4->BackColor = System::Drawing::Color::LimeGreen;
			break;
		case 4:
			panel5->BackColor = System::Drawing::Color::LimeGreen;
			break;
		case 5:
			panel6->BackColor = System::Drawing::Color::LimeGreen;
			break;
		case 6:
			panel7->BackColor = System::Drawing::Color::LimeGreen;
			break;
		case 7:
			panel8->BackColor = System::Drawing::Color::LimeGreen;
			break;
		case 8:
			panel9->BackColor = System::Drawing::Color::LimeGreen;
			break;
		case 9:
			panel10->BackColor = System::Drawing::Color::LimeGreen;
			break;
	}
}

void Best_Panel(int panel_number)
{
	switch (panel_number)
	{
	case 0:
		panel20->BackColor = System::Drawing::Color::LimeGreen;
		break;
	case 1:
		panel19->BackColor = System::Drawing::Color::LimeGreen;
		break;
	case 2:
		panel18->BackColor = System::Drawing::Color::LimeGreen;
		break;
	case 3:
		panel17->BackColor = System::Drawing::Color::LimeGreen;
		break;
	case 4:
		panel16->BackColor = System::Drawing::Color::LimeGreen;
		break;
	case 5:
		panel15->BackColor = System::Drawing::Color::LimeGreen;
		break;
	case 6:
		panel14->BackColor = System::Drawing::Color::LimeGreen;
		break;
	case 7:
		panel13->BackColor = System::Drawing::Color::LimeGreen;
		break;
	case 8:
		panel12->BackColor = System::Drawing::Color::LimeGreen;
		break;
	case 9:
		panel11->BackColor = System::Drawing::Color::LimeGreen;
		break;
	}
}

void Worst_Panel(int panel_number)
{
	switch (panel_number)
	{
	case 0:
		panel30->BackColor = System::Drawing::Color::LimeGreen;
		break;
	case 1:
		panel29->BackColor = System::Drawing::Color::LimeGreen;
		break;
	case 2:
		panel28->BackColor = System::Drawing::Color::LimeGreen;
		break;
	case 3:
		panel27->BackColor = System::Drawing::Color::LimeGreen;
		break;
	case 4:
		panel26->BackColor = System::Drawing::Color::LimeGreen;
		break;
	case 5:
		panel25->BackColor = System::Drawing::Color::LimeGreen;
		break;
	case 6:
		panel24->BackColor = System::Drawing::Color::LimeGreen;
		break;
	case 7:
		panel23->BackColor = System::Drawing::Color::LimeGreen;
		break;
	case 8:
		panel22->BackColor = System::Drawing::Color::LimeGreen;
		break;
	case 9:
		panel21->BackColor = System::Drawing::Color::LimeGreen;
		break;
	}
}


void First_Wait(int process_number)
{
	switch (process_number)
	{
		case 0:
			w1->Text = "Waiting...";
			w1->ForeColor = System::Drawing::Color::Red;
			break;
		case 1:
			w2->Text = "Waiting...";
			w2->ForeColor = System::Drawing::Color::Red;
			break;
		case 2:
			w3->Text = "Waiting...";
			w3->ForeColor = System::Drawing::Color::Red;
			break;
		case 3:
			w4->Text = "Waiting...";
			w4->ForeColor = System::Drawing::Color::Red;
			break;
		case 4:
			w5->Text = "Waiting...";
			w5->ForeColor = System::Drawing::Color::Red;
			break;
		case 5:
			w6->Text = "Waiting...";
			w6->ForeColor = System::Drawing::Color::Red;
			break;
		case 6:
			w7->Text = "Waiting...";
			w7->ForeColor = System::Drawing::Color::Red;
			break;
		case 7:
			w8->Text = "Waiting...";
			w8->ForeColor = System::Drawing::Color::Red;
			break;
		case 8:
			w9->Text = "Waiting...";
			w9->ForeColor = System::Drawing::Color::Red;
			break;
		case 9:
			w10->Text = "Waiting...";
			w10->ForeColor = System::Drawing::Color::Red;
			break;
	}

}

void Best_Wait(int process_number)
{
	switch (process_number)
	{
	case 0:
		label48->Text = "Waiting...";
		label48->ForeColor = System::Drawing::Color::Red;
		break;
	case 1:
		label49->Text = "Waiting...";
		label49->ForeColor = System::Drawing::Color::Red;
		break;
	case 2:
		label50->Text = "Waiting...";
		label50->ForeColor = System::Drawing::Color::Red;
		break;
	case 3:
		label51->Text = "Waiting...";
		label51->ForeColor = System::Drawing::Color::Red;
		break;
	case 4:
		label52->Text = "Waiting...";
		label52->ForeColor = System::Drawing::Color::Red;
		break;
	case 5:
		label53->Text = "Waiting...";
		label53->ForeColor = System::Drawing::Color::Red;
		break;
	case 6:
		label54->Text = "Waiting...";
		label54->ForeColor = System::Drawing::Color::Red;
		break;
	case 7:
		label55->Text = "Waiting...";
		label55->ForeColor = System::Drawing::Color::Red;
		break;
	case 8:
		label56->Text = "Waiting...";
		label56->ForeColor = System::Drawing::Color::Red;
		break;
	case 9:
		label57->Text = "Waiting...";
		label57->ForeColor = System::Drawing::Color::Red;
		break;
	}

}

void Worst_Wait(int process_number)
{
	switch (process_number)
	{
	case 0:
		label58->Text = "Waiting...";
		label58->ForeColor = System::Drawing::Color::Red;
		break;
	case 1:
		label59->Text = "Waiting...";
		label59->ForeColor = System::Drawing::Color::Red;
		break;
	case 2:
		label60->Text = "Waiting...";
		label60->ForeColor = System::Drawing::Color::Red;
		break;
	case 3:
		label61->Text = "Waiting...";
		label61->ForeColor = System::Drawing::Color::Red;
		break;
	case 4:
		label62->Text = "Waiting...";
		label62->ForeColor = System::Drawing::Color::Red;
		break;
	case 5:
		label63->Text = "Waiting...";
		label63->ForeColor = System::Drawing::Color::Red;
		break;
	case 6:
		label64->Text = "Waiting...";
		label64->ForeColor = System::Drawing::Color::Red;
		break;
	case 7:
		label65->Text = "Waiting...";
		label65->ForeColor = System::Drawing::Color::Red;
		break;
	case 8:
		label66->Text = "Waiting...";
		label66->ForeColor = System::Drawing::Color::Red;
		break;
	case 9:
		label67->Text = "Waiting...";
		label67->ForeColor = System::Drawing::Color::Red;
		break;
	}

}

private: System::Void panel2_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {

}
private: System::Void Process_allocator_Load(System::Object^  sender, System::EventArgs^  e) {
	label48->Hide();
	label49->Hide();
	label50->Hide();
	label51->Hide();
	label52->Hide();
	label53->Hide();
	label54->Hide();
	label55->Hide();
	label56->Hide();
	label57->Hide();
	label58->Hide();
	label59->Hide();
	label60->Hide();
	label61->Hide();
	label62->Hide();
	label63->Hide();
	label64->Hide();
	label65->Hide();
	label66->Hide();
	label67->Hide();
	label68->Hide();
	label69->Hide();
	label70->Hide();
	label71->Hide();
	label72->Hide();
	label73->Hide();
	label74->Hide();
	label75->Hide();
	label76->Hide();
	label77->Hide();
	label78->Hide();
	label79->Hide();
	label80->Hide();
	label81->Hide();
	label82->Hide();
	label83->Hide();
	label84->Hide();
	label85->Hide();
	label86->Hide();
	label87->Hide();
	label88->Hide();
	label89->Hide();
	label90->Hide();
	label91->Hide();
	label92->Hide();
	label93->Hide();
	label94->Hide();
	label95->Hide();
	label96->Hide();
	label97->Hide();
	label98->Hide();
	label99->Hide();
	label100->Hide();
	label101->Hide();
	label102->Hide();
	label103->Hide();
	label104->Hide();
	label105->Hide();
	part_1->Hide();
	part_2->Hide();
	part_3->Hide();
	part_4->Hide();
	part_5->Hide();
	part_6->Hide();
	part_7->Hide();
	part_8->Hide();
	part_9->Hide();
	part_10->Hide();
}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}
private: System::Void label12_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label20_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label14_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	form2^ f = gcnew form2();
	f->ShowDialog();
}
private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
	button2->Hide();
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	button3->Hide();
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	button4->Hide();
}
private: System::Void p1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	button5->Hide();
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	button6->Hide();
}
private: System::Void button4_Click_1(System::Object^  sender, System::EventArgs^  e) {
	button4->Hide();
}
private: System::Void label59_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
