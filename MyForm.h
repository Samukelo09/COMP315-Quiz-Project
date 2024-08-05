#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <cliext/vector>
#include <vcclr.h>
#include <sstream>
#include <istream>
#include <fstream>
#include <cstring>
#include "Q.h"

namespace Project5 {

	using namespace std;
	using namespace System;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel9;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ checBoxQuestionPanel;
	private: System::Windows::Forms::Panel^ radioButtonQuestionPanel;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::LinkLabel^ linkLabel4;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::CheckBox^ checkBox7;
	private: System::Windows::Forms::CheckBox^ checkBox8;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::LinkLabel^ linkLabel3;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Panel^ quizDetailPanel;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Button^ button39;
	private: System::Windows::Forms::Button^ button38;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button34;
	private: System::Windows::Forms::Button^ button35;
	private: System::Windows::Forms::Button^ button36;
	private: System::Windows::Forms::Button^ button37;
	private: System::Windows::Forms::Button^ button28;
	private: System::Windows::Forms::Button^ button29;
	private: System::Windows::Forms::Button^ button30;
	private: System::Windows::Forms::Button^ button31;
	private: System::Windows::Forms::Button^ button32;
	private: System::Windows::Forms::Button^ button23;
	private: System::Windows::Forms::Button^ button24;
	private: System::Windows::Forms::Button^ button25;
	private: System::Windows::Forms::Button^ button26;
	private: System::Windows::Forms::Button^ button27;
	private: System::Windows::Forms::Button^ button18;
	private: System::Windows::Forms::Button^ button19;
	private: System::Windows::Forms::Button^ button20;
	private: System::Windows::Forms::Button^ button21;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::Button^ button15;
	private: System::Windows::Forms::Button^ button16;
	private: System::Windows::Forms::Button^ button17;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Panel^ typeInQuestionPanel;

	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::LinkLabel^ linkLabel5;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::TextBox^ textBox1;
		   /*PUBLIC MEMBERS HERE*/
		/*DECLARING A QUESTION BANK TO HOLD THE QUESTIONS*/
	public :
		cliext::vector<Q^>^ questionBank = gcnew cliext::vector<Q^>();
	private: 
		/*CREATE AN ARRAY OF BUTTON TO CONTROL THE PROGRESSS PANEL*/
		System::Windows::Forms::Button^ buttonArray ;
	public:
		/*INITIALIZING A FORM*/
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			/*POPULATING THE QUESTION BANK DATA STRUVC=UREN */
			loadQuestionsToQuestionBank("Text.txt");

			/*INITIALLY START WITH THE OTHER PANELS HIDDEN*/
			/*QUESTION TYPE PANELS*/
			radioButtonQuestionPanel->Hide();
			checBoxQuestionPanel1->Hide();
			typeInQuestionPanel->Hide();

			/*PROGRESS BAR PANEL*/
			panel2->Hide();
			button1->Hide();
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
private: System::Windows::Forms::Panel^ checBoxQuestionPanel1;
	protected:
	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->radioButtonQuestionPanel = (gcnew System::Windows::Forms::Panel());
			this->typeInQuestionPanel = (gcnew System::Windows::Forms::Panel());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->linkLabel5 = (gcnew System::Windows::Forms::LinkLabel());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->linkLabel4 = (gcnew System::Windows::Forms::LinkLabel());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checBoxQuestionPanel1 = (gcnew System::Windows::Forms::Panel());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->quizDetailPanel = (gcnew System::Windows::Forms::Panel());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->panel9->SuspendLayout();
			this->panel1->SuspendLayout();
			this->radioButtonQuestionPanel->SuspendLayout();
			this->typeInQuestionPanel->SuspendLayout();
			this->panel6->SuspendLayout();
			this->checBoxQuestionPanel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->quizDetailPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button7->Location = System::Drawing::Point(22, 640);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(226, 48);
			this->button7->TabIndex = 50;
			this->button7->Text = L"Log Out";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button6->Location = System::Drawing::Point(22, 577);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(226, 48);
			this->button6->TabIndex = 49;
			this->button6->Text = L"Physc Quiz Game";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button5->Location = System::Drawing::Point(22, 511);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(226, 48);
			this->button5->TabIndex = 48;
			this->button5->Text = L"Math Quiz Game";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button4->Location = System::Drawing::Point(22, 442);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(226, 48);
			this->button4->TabIndex = 47;
			this->button4->Text = L"ISTN Quiz Game";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button3->Location = System::Drawing::Point(22, 372);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(226, 48);
			this->button3->TabIndex = 46;
			this->button3->Text = L"Stat Quiz Game";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button2->Location = System::Drawing::Point(22, 301);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(226, 48);
			this->button2->TabIndex = 45;
			this->button2->Text = L"Comp Quiz Game";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->panel9->Controls->Add(this->label16);
			this->panel9->Location = System::Drawing::Point(22, 236);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(226, 48);
			this->panel9->TabIndex = 44;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(73, 10);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(98, 29);
			this->label16->TabIndex = 18;
			this->label16->Text = L"Student:";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Gainsboro;
			this->panel1->Controls->Add(this->radioButtonQuestionPanel);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->checBoxQuestionPanel1);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->quizDetailPanel);
			this->panel1->Location = System::Drawing::Point(269, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1102, 677);
			this->panel1->TabIndex = 43;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// radioButtonQuestionPanel
			// 
			this->radioButtonQuestionPanel->BackColor = System::Drawing::Color::Silver;
			this->radioButtonQuestionPanel->Controls->Add(this->typeInQuestionPanel);
			this->radioButtonQuestionPanel->Controls->Add(this->label23);
			this->radioButtonQuestionPanel->Controls->Add(this->linkLabel4);
			this->radioButtonQuestionPanel->Controls->Add(this->radioButton1);
			this->radioButtonQuestionPanel->Controls->Add(this->radioButton2);
			this->radioButtonQuestionPanel->Controls->Add(this->radioButton3);
			this->radioButtonQuestionPanel->Controls->Add(this->radioButton4);
			this->radioButtonQuestionPanel->Controls->Add(this->label24);
			this->radioButtonQuestionPanel->Location = System::Drawing::Point(30, 133);
			this->radioButtonQuestionPanel->Name = L"radioButtonQuestionPanel";
			this->radioButtonQuestionPanel->Size = System::Drawing::Size(780, 454);
			this->radioButtonQuestionPanel->TabIndex = 35;
			// 
			// typeInQuestionPanel
			// 
			this->typeInQuestionPanel->BackColor = System::Drawing::Color::Silver;
			this->typeInQuestionPanel->Controls->Add(this->label27);
			this->typeInQuestionPanel->Controls->Add(this->panel6);
			this->typeInQuestionPanel->Controls->Add(this->label25);
			this->typeInQuestionPanel->Controls->Add(this->linkLabel5);
			this->typeInQuestionPanel->Controls->Add(this->label26);
			this->typeInQuestionPanel->Location = System::Drawing::Point(0, 1);
			this->typeInQuestionPanel->Name = L"typeInQuestionPanel";
			this->typeInQuestionPanel->Size = System::Drawing::Size(780, 454);
			this->typeInQuestionPanel->TabIndex = 36;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->label27->Location = System::Drawing::Point(53, 209);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(84, 29);
			this->label27->TabIndex = 35;
			this->label27->Text = L"Aswer:";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->panel6->Controls->Add(this->textBox1);
			this->panel6->Location = System::Drawing::Point(143, 205);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(616, 36);
			this->panel6->TabIndex = 34;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->textBox1->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox1->Location = System::Drawing::Point(4, 4);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(609, 29);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Type answer....";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->label25->Location = System::Drawing::Point(53, 416);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(104, 29);
			this->label25->TabIndex = 33;
			this->label25->Text = L"Question";
			// 
			// linkLabel5
			// 
			this->linkLabel5->AutoSize = true;
			this->linkLabel5->Font = (gcnew System::Drawing::Font(L"Calibri", 11.8F, System::Drawing::FontStyle::Bold));
			this->linkLabel5->Location = System::Drawing::Point(54, 260);
			this->linkLabel5->Name = L"linkLabel5";
			this->linkLabel5->Size = System::Drawing::Size(116, 24);
			this->linkLabel5->TabIndex = 31;
			this->linkLabel5->TabStop = true;
			this->linkLabel5->Text = L"clear answer";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->label26->Location = System::Drawing::Point(53, 90);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(104, 29);
			this->label26->TabIndex = 26;
			this->label26->Text = L"Question";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->label23->Location = System::Drawing::Point(404, 102);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(104, 29);
			this->label23->TabIndex = 33;
			this->label23->Text = L"Question";
			// 
			// linkLabel4
			// 
			this->linkLabel4->AutoSize = true;
			this->linkLabel4->Font = (gcnew System::Drawing::Font(L"Calibri", 11.8F, System::Drawing::FontStyle::Bold));
			this->linkLabel4->Location = System::Drawing::Point(54, 373);
			this->linkLabel4->Name = L"linkLabel4";
			this->linkLabel4->Size = System::Drawing::Size(116, 24);
			this->linkLabel4->TabIndex = 31;
			this->linkLabel4->TabStop = true;
			this->linkLabel4->Text = L"clear answer";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->radioButton1->Location = System::Drawing::Point(58, 139);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(166, 33);
			this->radioButton1->TabIndex = 30;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"radioButton1";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->radioButton2->Location = System::Drawing::Point(58, 199);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(166, 33);
			this->radioButton2->TabIndex = 29;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"radioButton2";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->radioButton3->Location = System::Drawing::Point(58, 252);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(166, 33);
			this->radioButton3->TabIndex = 28;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"radioButton3";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->radioButton4->Location = System::Drawing::Point(58, 304);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(166, 33);
			this->radioButton4->TabIndex = 27;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"radioButton4";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->label24->Location = System::Drawing::Point(53, 71);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(104, 29);
			this->label24->TabIndex = 26;
			this->label24->Text = L"Question";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(28, 643);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(172, 29);
			this->label2->TabIndex = 23;
			this->label2->Text = L"File read output";
			// 
			// checBoxQuestionPanel1
			// 
			this->checBoxQuestionPanel1->BackColor = System::Drawing::Color::Silver;
			this->checBoxQuestionPanel1->Controls->Add(this->checkBox4);
			this->checBoxQuestionPanel1->Controls->Add(this->checkBox3);
			this->checBoxQuestionPanel1->Controls->Add(this->checkBox2);
			this->checBoxQuestionPanel1->Controls->Add(this->checkBox1);
			this->checBoxQuestionPanel1->Controls->Add(this->label1);
			this->checBoxQuestionPanel1->Controls->Add(this->linkLabel1);
			this->checBoxQuestionPanel1->Controls->Add(this->label6);
			this->checBoxQuestionPanel1->Location = System::Drawing::Point(30, 134);
			this->checBoxQuestionPanel1->Name = L"checBoxQuestionPanel1";
			this->checBoxQuestionPanel1->Size = System::Drawing::Size(780, 454);
			this->checBoxQuestionPanel1->TabIndex = 34;
			this->checBoxQuestionPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel4_Paint);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->checkBox4->Location = System::Drawing::Point(58, 297);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(141, 33);
			this->checkBox4->TabIndex = 37;
			this->checkBox4->Text = L"checkBox4";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->checkBox3->Location = System::Drawing::Point(58, 244);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(141, 33);
			this->checkBox3->TabIndex = 36;
			this->checkBox3->Text = L"checkBox3";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->checkBox2->Location = System::Drawing::Point(58, 194);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(141, 33);
			this->checkBox2->TabIndex = 35;
			this->checkBox2->Text = L"checkBox2";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->checkBox1->Location = System::Drawing::Point(58, 147);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(141, 33);
			this->checkBox1->TabIndex = 34;
			this->checkBox1->Text = L"checkBox1";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(404, 102);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(104, 29);
			this->label1->TabIndex = 33;
			this->label1->Text = L"Question";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Calibri", 11.8F, System::Drawing::FontStyle::Bold));
			this->linkLabel1->Location = System::Drawing::Point(54, 373);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(116, 24);
			this->linkLabel1->TabIndex = 31;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"clear answer";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel1_LinkClicked_2);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(53, 71);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(104, 29);
			this->label6->TabIndex = 26;
			this->label6->Text = L"Question";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->panel2->Controls->Add(this->button33);
			this->panel2->Controls->Add(this->button34);
			this->panel2->Controls->Add(this->button35);
			this->panel2->Controls->Add(this->button36);
			this->panel2->Controls->Add(this->button37);
			this->panel2->Controls->Add(this->button28);
			this->panel2->Controls->Add(this->button29);
			this->panel2->Controls->Add(this->button30);
			this->panel2->Controls->Add(this->button31);
			this->panel2->Controls->Add(this->button32);
			this->panel2->Controls->Add(this->button23);
			this->panel2->Controls->Add(this->button24);
			this->panel2->Controls->Add(this->button25);
			this->panel2->Controls->Add(this->button26);
			this->panel2->Controls->Add(this->button27);
			this->panel2->Controls->Add(this->button18);
			this->panel2->Controls->Add(this->button19);
			this->panel2->Controls->Add(this->button20);
			this->panel2->Controls->Add(this->button21);
			this->panel2->Controls->Add(this->button22);
			this->panel2->Controls->Add(this->button13);
			this->panel2->Controls->Add(this->button14);
			this->panel2->Controls->Add(this->button15);
			this->panel2->Controls->Add(this->button16);
			this->panel2->Controls->Add(this->button17);
			this->panel2->Controls->Add(this->button12);
			this->panel2->Controls->Add(this->button11);
			this->panel2->Controls->Add(this->button10);
			this->panel2->Controls->Add(this->button9);
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Location = System::Drawing::Point(822, 134);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(268, 454);
			this->panel2->TabIndex = 24;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// button33
			// 
			this->button33->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button33->Location = System::Drawing::Point(227, 268);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(38, 48);
			this->button33->TabIndex = 80;
			this->button33->Text = L"1";
			this->button33->UseVisualStyleBackColor = true;
			// 
			// button34
			// 
			this->button34->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button34->Location = System::Drawing::Point(227, 214);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(38, 48);
			this->button34->TabIndex = 79;
			this->button34->Text = L"1";
			this->button34->UseVisualStyleBackColor = true;
			// 
			// button35
			// 
			this->button35->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button35->Location = System::Drawing::Point(227, 106);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(38, 48);
			this->button35->TabIndex = 78;
			this->button35->Text = L"1";
			this->button35->UseVisualStyleBackColor = true;
			// 
			// button36
			// 
			this->button36->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button36->Location = System::Drawing::Point(227, 160);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(38, 48);
			this->button36->TabIndex = 77;
			this->button36->Text = L"1";
			this->button36->UseVisualStyleBackColor = true;
			// 
			// button37
			// 
			this->button37->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button37->Location = System::Drawing::Point(227, 52);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(38, 48);
			this->button37->TabIndex = 76;
			this->button37->Text = L"1";
			this->button37->UseVisualStyleBackColor = true;
			// 
			// button28
			// 
			this->button28->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button28->Location = System::Drawing::Point(184, 268);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(38, 48);
			this->button28->TabIndex = 75;
			this->button28->Text = L"1";
			this->button28->UseVisualStyleBackColor = true;
			// 
			// button29
			// 
			this->button29->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button29->Location = System::Drawing::Point(140, 268);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(38, 48);
			this->button29->TabIndex = 74;
			this->button29->Text = L"1";
			this->button29->UseVisualStyleBackColor = true;
			// 
			// button30
			// 
			this->button30->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button30->Location = System::Drawing::Point(96, 268);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(38, 48);
			this->button30->TabIndex = 73;
			this->button30->Text = L"1";
			this->button30->UseVisualStyleBackColor = true;
			// 
			// button31
			// 
			this->button31->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button31->Location = System::Drawing::Point(52, 268);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(38, 48);
			this->button31->TabIndex = 72;
			this->button31->Text = L"1";
			this->button31->UseVisualStyleBackColor = true;
			// 
			// button32
			// 
			this->button32->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button32->Location = System::Drawing::Point(8, 268);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(38, 48);
			this->button32->TabIndex = 71;
			this->button32->Text = L"1";
			this->button32->UseVisualStyleBackColor = true;
			// 
			// button23
			// 
			this->button23->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button23->Location = System::Drawing::Point(184, 214);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(38, 48);
			this->button23->TabIndex = 70;
			this->button23->Text = L"1";
			this->button23->UseVisualStyleBackColor = true;
			// 
			// button24
			// 
			this->button24->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button24->Location = System::Drawing::Point(140, 214);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(38, 48);
			this->button24->TabIndex = 69;
			this->button24->Text = L"1";
			this->button24->UseVisualStyleBackColor = true;
			// 
			// button25
			// 
			this->button25->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button25->Location = System::Drawing::Point(96, 214);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(38, 48);
			this->button25->TabIndex = 68;
			this->button25->Text = L"1";
			this->button25->UseVisualStyleBackColor = true;
			// 
			// button26
			// 
			this->button26->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button26->Location = System::Drawing::Point(52, 214);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(38, 48);
			this->button26->TabIndex = 67;
			this->button26->Text = L"1";
			this->button26->UseVisualStyleBackColor = true;
			// 
			// button27
			// 
			this->button27->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button27->Location = System::Drawing::Point(8, 214);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(38, 48);
			this->button27->TabIndex = 66;
			this->button27->Text = L"1";
			this->button27->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button18->Location = System::Drawing::Point(184, 106);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(38, 48);
			this->button18->TabIndex = 65;
			this->button18->Text = L"1";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button19->Location = System::Drawing::Point(140, 106);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(38, 48);
			this->button19->TabIndex = 64;
			this->button19->Text = L"1";
			this->button19->UseVisualStyleBackColor = true;
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button20->Location = System::Drawing::Point(96, 106);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(38, 48);
			this->button20->TabIndex = 63;
			this->button20->Text = L"1";
			this->button20->UseVisualStyleBackColor = true;
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button21->Location = System::Drawing::Point(52, 106);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(38, 48);
			this->button21->TabIndex = 62;
			this->button21->Text = L"1";
			this->button21->UseVisualStyleBackColor = true;
			// 
			// button22
			// 
			this->button22->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button22->Location = System::Drawing::Point(8, 106);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(38, 48);
			this->button22->TabIndex = 61;
			this->button22->Text = L"1";
			this->button22->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button13->Location = System::Drawing::Point(184, 160);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(38, 48);
			this->button13->TabIndex = 60;
			this->button13->Text = L"1";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button14->Location = System::Drawing::Point(140, 160);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(38, 48);
			this->button14->TabIndex = 59;
			this->button14->Text = L"1";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button15->Location = System::Drawing::Point(96, 160);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(38, 48);
			this->button15->TabIndex = 58;
			this->button15->Text = L"1";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button16->Location = System::Drawing::Point(52, 160);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(38, 48);
			this->button16->TabIndex = 57;
			this->button16->Text = L"1";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button17->Location = System::Drawing::Point(8, 160);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(38, 48);
			this->button17->TabIndex = 56;
			this->button17->Text = L"1";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button12->Location = System::Drawing::Point(184, 52);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(38, 48);
			this->button12->TabIndex = 55;
			this->button12->Text = L"1";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button11->Location = System::Drawing::Point(140, 52);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(38, 48);
			this->button11->TabIndex = 54;
			this->button11->Text = L"1";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button10->Location = System::Drawing::Point(96, 52);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(38, 48);
			this->button10->TabIndex = 53;
			this->button10->Text = L"1";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button9->Location = System::Drawing::Point(52, 52);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(38, 48);
			this->button9->TabIndex = 52;
			this->button9->Text = L"1";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button8->Location = System::Drawing::Point(8, 52);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(38, 48);
			this->button8->TabIndex = 51;
			this->button8->Text = L"1";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 12.8F, System::Drawing::FontStyle::Bold));
			this->label5->Location = System::Drawing::Point(3, 407);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(90, 27);
			this->label5->TabIndex = 25;
			this->label5->Text = L"00:00:00";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(3, 368);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(182, 29);
			this->label4->TabIndex = 26;
			this->label4->Text = L"Time Remaining:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(3, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(199, 29);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Question Number:";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 11.8F, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(994, 617);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(82, 43);
			this->button1->TabIndex = 16;
			this->button1->Text = L"NEXT";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold));
			this->label8->Location = System::Drawing::Point(22, 47);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(641, 46);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Create a Multiplechoice Question";
			// 
			// quizDetailPanel
			// 
			this->quizDetailPanel->BackColor = System::Drawing::Color::Silver;
			this->quizDetailPanel->Controls->Add(this->label10);
			this->quizDetailPanel->Controls->Add(this->label9);
			this->quizDetailPanel->Controls->Add(this->label14);
			this->quizDetailPanel->Controls->Add(this->label15);
			this->quizDetailPanel->Controls->Add(this->label11);
			this->quizDetailPanel->Controls->Add(this->label13);
			this->quizDetailPanel->Controls->Add(this->label20);
			this->quizDetailPanel->Controls->Add(this->label17);
			this->quizDetailPanel->Controls->Add(this->label18);
			this->quizDetailPanel->Controls->Add(this->label19);
			this->quizDetailPanel->Controls->Add(this->button39);
			this->quizDetailPanel->Controls->Add(this->button38);
			this->quizDetailPanel->Location = System::Drawing::Point(30, 134);
			this->quizDetailPanel->Name = L"quizDetailPanel";
			this->quizDetailPanel->Size = System::Drawing::Size(1046, 506);
			this->quizDetailPanel->TabIndex = 36;
			this->quizDetailPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::quizDetailPanel_Paint);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label10->Location = System::Drawing::Point(336, 52);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(395, 31);
			this->label10->TabIndex = 42;
			this->label10->Text = L"Duration of Quiz: 00:04 minutes";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label9->Location = System::Drawing::Point(153, 9);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(164, 31);
			this->label9->TabIndex = 41;
			this->label9->Text = L"Quiz details:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label14->Location = System::Drawing::Point(226, 214);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(211, 31);
			this->label14->TabIndex = 45;
			this->label14->Text = L"Content of Quiz:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label15->Location = System::Drawing::Point(443, 220);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(377, 31);
			this->label15->TabIndex = 46;
			this->label15->Text = L"*********************************";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label11->Location = System::Drawing::Point(402, 161);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(260, 31);
			this->label11->TabIndex = 43;
			this->label11->Text = L"Number of attempts:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->label13->Location = System::Drawing::Point(668, 161);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(29, 31);
			this->label13->TabIndex = 44;
			this->label13->Text = L"n";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(492, 289);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(302, 25);
			this->label20->TabIndex = 51;
			this->label20->Text = L"Grade to pass: 8.000 out of 16:00";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(245, 287);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(207, 29);
			this->label17->TabIndex = 47;
			this->label17->Text = L"Quiz Game Rules:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(359, 321);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(372, 25);
			this->label18->TabIndex = 48;
			this->label18->Text = L"1.*******************************************";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(359, 357);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(372, 25);
			this->label19->TabIndex = 49;
			this->label19->Text = L"2.*******************************************";
			// 
			// button39
			// 
			this->button39->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->button39->Font = (gcnew System::Drawing::Font(L"Calibri", 11.8F, System::Drawing::FontStyle::Bold));
			this->button39->ForeColor = System::Drawing::Color::Red;
			this->button39->Location = System::Drawing::Point(471, 399);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(176, 43);
			this->button39->TabIndex = 50;
			this->button39->Text = L"View all";
			this->button39->UseVisualStyleBackColor = false;
			// 
			// button38
			// 
			this->button38->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->button38->Font = (gcnew System::Drawing::Font(L"Calibri", 11.8F, System::Drawing::FontStyle::Bold));
			this->button38->ForeColor = System::Drawing::Color::Red;
			this->button38->Location = System::Drawing::Point(303, 460);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(504, 43);
			this->button38->TabIndex = 40;
			this->button38->Text = L"START QUIZ GAME ATTEMPT";
			this->button38->UseVisualStyleBackColor = false;
			this->button38->Click += gcnew System::EventHandler(this, &MyForm::button38_Click_1);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->ClientSize = System::Drawing::Size(1383, 702);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->panel9);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->radioButtonQuestionPanel->ResumeLayout(false);
			this->radioButtonQuestionPanel->PerformLayout();
			this->typeInQuestionPanel->ResumeLayout(false);
			this->typeInQuestionPanel->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->checBoxQuestionPanel1->ResumeLayout(false);
			this->checBoxQuestionPanel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->quizDetailPanel->ResumeLayout(false);
			this->quizDetailPanel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

	}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void linkLabel1_LinkClicked_1(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	button2->Focused;
	label8->Text = "COMP313W1 Computer Systems"; 
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	label8->Text = "Statistics *******************";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	label8->Text = "ISTN3SA System Analysis and Design";
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	label8->Text = "MATH236 Discrete Mathematics";
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	label8->Text = "PHYSC113 *******************";
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) 
{
	this->Close();
	/*ask if the user is sure if yes -> then ope the log in page*/
}	   
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		i++;
		displayQuestion();
}
private: System::Void panel3_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label18_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label15_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button38_Click(System::Object^ sender, System::EventArgs^ e) 
{
	/*ASK USER IF THEY SURE WITH CHOICE IF YES STRT ATTEMPT AND COUNT DOWN TIMWER*/
	//	MessageBox messageOne;
	//messageOne.Show("Are you sure to start attempt?");
}
private: System::Void panel6_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button38_Click_1(System::Object^ sender, System::EventArgs^ e) 
{
	quizDetailPanel->Hide();/*HIDDING THE QUIZ DETAIL PANEL BEFORE STARTING QUIZ*/
	panel2->Show();/*SHOWING PANEL PROGRESS THON TO ALLOW TO PROCEED TO THE NEXT QUESTION*/
	displayQuestion();/*PROUGHOUT THE QUIZ*/
	button1->Show();/*SHOWING THE NEXT BUTTTULLING THE OBJECTS FROM THE QUESTION BANK*/
}
private: System::Void quizDetailPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void linkLabel1_LinkClicked_2(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	
}
	void loadQuestionsToQuestionBank(string filename)
	{
		/*************ATTEMPTING TO READ FROM THE TEXT FILES*************/

		/*TEMPLATE VECTOR TO HOLD THE ANSWER CHOICES*/
		String^ correctAnswer;
		Q^ newQuestionToAdd;

		/*DECLARING FSTREM READING*/
		ifstream reader(filename);
		if (reader.is_open())
		{
			/*STRING TO HOLD THE LINE READ*/
			string line;

			/*WHILE FILE HAS MORE LINES KEEP READING*/
			while (std::getline(reader, line))
			{
				/*FINDIND POSITION OF THE QUESTION DELIMETER*/
				size_t position = line.find(":");
				size_t positionOfT = line.find("*");
				cliext::vector<String^>^ multipleChoiceAnswers = gcnew cliext::vector<String^>(4);
				if (position != string::npos)
				{
					String^ questionText = gcnew String(line.substr(1, position-1).c_str());
					string answersAndCorrect = line.substr(position + 1);
					String^ questionType = gcnew String(line.substr(0,1).c_str());

					/*SPLITING THE STRING CONTAINING ANSWERS AND CORRECT ANSWER USING SRTRING STREAM*/
					istringstream ss(answersAndCorrect);
					string stringToken;
					while (getline(ss, stringToken, ','))
					{
						if (stringToken.back() == ';')
						{
							correctAnswer = gcnew String(stringToken.substr(0, stringToken.size() - 1).c_str());
						}
						else
						{
							multipleChoiceAnswers->push_back(gcnew String(stringToken.c_str()));
						}
					}
					newQuestionToAdd = gcnew Q(questionText, multipleChoiceAnswers, correctAnswer,questionType);
					questionBank->push_back(newQuestionToAdd);
				}
			}
		reader.close();
		}
	}
	
	int i = 0;
	void displayQuestion()
	{
		if (questionBank[i]->questionType == "0")
		{
			label24->Text = questionBank[i]->question;
			radioButton1->Text = questionBank[i]->answers[4];
			radioButton2->Text = questionBank[i]->answers[5];
			radioButton3->Text = questionBank[i]->answers[6];
			radioButton4->Text = questionBank[i]->answers[7];
			label23->Text = questionBank[i]->correctAnswer;
			radioButtonQuestionPanel->Show();
			checBoxQuestionPanel1->Hide();
		}
		else if (questionBank[i]->questionType == "1")
		{
			label24->Text = questionBank[i]->question;
			radioButton1->Text = questionBank[i]->answers[4];
			radioButton2->Text = questionBank[i]->answers[5];
			radioButton3->Hide();
			radioButton4->Hide();
			label23->Text = questionBank[i]->correctAnswer;
			radioButtonQuestionPanel->Show();
			checBoxQuestionPanel1->Hide();
		}
		else if (questionBank[i]->questionType == "2")
		{
			label6->Text = questionBank[i]->question;
			checkBox1->Text = questionBank[i]->answers[4];
			checkBox2->Text = questionBank[i]->answers[5];
			checkBox3->Text = questionBank[i]->answers[6];
			checkBox4->Text = questionBank[i]->answers[7];
			label1->Text = questionBank[i]->correctAnswer;
			checBoxQuestionPanel1->Show();
			radioButtonQuestionPanel->Hide();
		}
		else if (questionBank[i]->questionType == "3")
		{
			label26->Text = questionBank[i]->question;
			label25->Text = questionBank[i]->correctAnswer;
			typeInQuestionPanel->Show();
			checBoxQuestionPanel1->Hide();
			radioButtonQuestionPanel->Hide();
		}
	}
};
}
