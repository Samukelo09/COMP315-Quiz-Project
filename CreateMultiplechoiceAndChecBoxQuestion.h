#pragma once

namespace Project5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			/*INITIAL MULTIPLECHOICE THE SELECTED OPTION*/
			button2->Focus();
			button3->Enabled = false;
			button4->Enabled = false;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel9;
	protected:
	private: System::Windows::Forms::Label^ label16;












	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label7;

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
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->panel9->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel8->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel9
			// 
			this->panel9->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->panel9->Controls->Add(this->label16);
			this->panel9->Location = System::Drawing::Point(21, 233);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(226, 48);
			this->panel9->TabIndex = 36;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(73, 10);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(87, 29);
			this->label16->TabIndex = 18;
			this->label16->Text = L"Admin:";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Gainsboro;
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->panel6);
			this->panel1->Controls->Add(this->panel5);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->panel8);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(267, 13);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1088, 671);
			this->panel1->TabIndex = 29;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm1::panel1_Paint);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(302, 641);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(578, 17);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Addd a drop down here to add question as , multi, long, dropdown or true or false"
				L" question";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->panel6->Controls->Add(this->textBox5);
			this->panel6->Location = System::Drawing::Point(233, 586);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(625, 36);
			this->panel6->TabIndex = 19;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->textBox5->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox5->Location = System::Drawing::Point(4, 4);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(614, 29);
			this->textBox5->TabIndex = 0;
			this->textBox5->Text = L"Type something...";
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->panel5->Controls->Add(this->textBox4);
			this->panel5->Location = System::Drawing::Point(114, 528);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(904, 36);
			this->panel5->TabIndex = 18;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->textBox4->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox4->Location = System::Drawing::Point(4, 4);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(897, 29);
			this->textBox4->TabIndex = 0;
			this->textBox4->Text = L"Type something...";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->panel4->Controls->Add(this->textBox3);
			this->panel4->Location = System::Drawing::Point(114, 412);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(904, 36);
			this->panel4->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->textBox3->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox3->Location = System::Drawing::Point(4, 4);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(897, 29);
			this->textBox3->TabIndex = 0;
			this->textBox3->Text = L"Type something...";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->panel3->Controls->Add(this->textBox2);
			this->panel3->Location = System::Drawing::Point(114, 469);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(904, 36);
			this->panel3->TabIndex = 17;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->textBox2->ForeColor = System::Drawing::SystemColors::ScrollBar;
			this->textBox2->Location = System::Drawing::Point(4, 4);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(897, 29);
			this->textBox2->TabIndex = 0;
			this->textBox2->Text = L"Type something...";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Location = System::Drawing::Point(114, 356);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(904, 36);
			this->panel2->TabIndex = 5;
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
			this->textBox1->Size = System::Drawing::Size(897, 29);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Type something...";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm1::textBox1_TextChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 11.8F, System::Drawing::FontStyle::Bold));
			this->button1->ForeColor = System::Drawing::Color::Red;
			this->button1->Location = System::Drawing::Point(922, 625);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(163, 43);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Add Question";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label9->Location = System::Drawing::Point(77, 590);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(150, 24);
			this->label9->TabIndex = 15;
			this->label9->Text = L"Correct Answer :";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(72, 35);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(641, 46);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Create a Multiplechoice Question";
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(39)), static_cast<System::Int32>(static_cast<System::Byte>(41)),
				static_cast<System::Int32>(static_cast<System::Byte>(39)));
			this->panel8->Controls->Add(this->richTextBox1);
			this->panel8->Location = System::Drawing::Point(80, 133);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(938, 173);
			this->panel8->TabIndex = 4;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->richTextBox1->ForeColor = System::Drawing::Color::Black;
			this->richTextBox1->Location = System::Drawing::Point(6, 6);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(925, 161);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"Type in question...";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label6->Location = System::Drawing::Point(77, 421);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(22, 24);
			this->label6->TabIndex = 11;
			this->label6->Text = L"B";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label5->Location = System::Drawing::Point(77, 479);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(23, 24);
			this->label5->TabIndex = 10;
			this->label5->Text = L"C";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label4->Location = System::Drawing::Point(77, 538);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(23, 24);
			this->label4->TabIndex = 9;
			this->label4->Text = L"D";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label3->Location = System::Drawing::Point(77, 366);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(23, 24);
			this->label3->TabIndex = 4;
			this->label3->Text = L"A";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label2->Location = System::Drawing::Point(77, 324);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(158, 24);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Answers Choice :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->label1->Location = System::Drawing::Point(77, 103);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(146, 24);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Enter Question :";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button2->Location = System::Drawing::Point(21, 298);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(226, 48);
			this->button2->TabIndex = 37;
			this->button2->Text = L"Multiplechoice";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm1::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button3->Location = System::Drawing::Point(21, 369);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(226, 48);
			this->button3->TabIndex = 38;
			this->button3->Text = L"Multiselection ";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm1::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button4->Location = System::Drawing::Point(21, 439);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(226, 48);
			this->button4->TabIndex = 39;
			this->button4->Text = L"Long Question";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button5->Location = System::Drawing::Point(21, 508);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(226, 48);
			this->button5->TabIndex = 40;
			this->button5->Text = L"Dropdown Question";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button6->Location = System::Drawing::Point(21, 574);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(226, 48);
			this->button6->TabIndex = 41;
			this->button6->Text = L"True/False Question";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Calibri", 13.8F, System::Drawing::FontStyle::Bold));
			this->button7->Location = System::Drawing::Point(21, 637);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(226, 48);
			this->button7->TabIndex = 42;
			this->button7->Text = L"Log Out";
			this->button7->UseVisualStyleBackColor = false;
			// 
			// MyForm1
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
			this->Name = L"MyForm1";
			this->Text = L"CreateMultiplechoiceAndChecBoxQuestion";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
