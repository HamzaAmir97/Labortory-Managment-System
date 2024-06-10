#include<Windows.h>
#include<fstream>
#include"patinet.h"
#include"classes.h"
#include"searchpatinet.h"
#include"getpatsheet.h"
#include"testsearch.h"
#include"addres.h"
using namespace std;

ifstream infile;

ofstream o;
#pragma once

namespace Project8 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
		{
			InitializeComponent();
			timer1->Start();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label4;
	protected: 
	private: System::Windows::Forms::PictureBox^  pictureBox2;

	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  button7;

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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm3::typeid));
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button7 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::White;
			this->label4->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Black;
			this->label4->Location = System::Drawing::Point(672, 39);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 29);
			this->label4->TabIndex = 25;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(441, 573);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(82, 76);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 24;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &MyForm3::pictureBox2_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Red;
			this->button6->Font = (gcnew System::Drawing::Font(L"Freestyle Script", 20.25F, System::Drawing::FontStyle::Bold));
			this->button6->Location = System::Drawing::Point(202, 488);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(184, 67);
			this->button6->TabIndex = 22;
			this->button6->Text = L"change to them3";
			this->button6->UseVisualStyleBackColor = false;
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Red;
			this->button5->Font = (gcnew System::Drawing::Font(L"Freestyle Script", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(12, 561);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(184, 67);
			this->button5->TabIndex = 21;
			this->button5->Text = L"get a patinet sheet";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm3::button5_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Red;
			this->button4->Font = (gcnew System::Drawing::Font(L"Freestyle Script", 20.25F, System::Drawing::FontStyle::Bold));
			this->button4->Location = System::Drawing::Point(202, 415);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(184, 67);
			this->button4->TabIndex = 20;
			this->button4->Text = L"search about test";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm3::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Red;
			this->button3->Font = (gcnew System::Drawing::Font(L"Freestyle Script", 20.25F, System::Drawing::FontStyle::Bold));
			this->button3->Location = System::Drawing::Point(12, 488);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(184, 67);
			this->button3->TabIndex = 19;
			this->button3->Text = L"search about patinet";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm3::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Red;
			this->button2->Font = (gcnew System::Drawing::Font(L"Freestyle Script", 20.25F, System::Drawing::FontStyle::Bold));
			this->button2->Location = System::Drawing::Point(12, 415);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(184, 67);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Add Patinet";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm3::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label2->Font = (gcnew System::Drawing::Font(L"Kristen ITC", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Black;
			this->label2->Location = System::Drawing::Point(440, 356);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 47);
			this->label2->TabIndex = 17;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Forte", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Crimson;
			this->label1->Location = System::Drawing::Point(253, 83);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 26);
			this->label1->TabIndex = 16;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::MintCream;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(904, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(56, 68);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 15;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm3::pictureBox1_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm3::timer1_Tick);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Red;
			this->button7->Font = (gcnew System::Drawing::Font(L"Freestyle Script", 20.25F, System::Drawing::FontStyle::Bold));
			this->button7->Location = System::Drawing::Point(202, 561);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(184, 67);
			this->button7->TabIndex = 26;
			this->button7->Text = L"write the result";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm3::button7_Click);
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Red;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(960, 672);
			this->ControlBox = false;
			this->Controls->Add(this->button7);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->MaximumSize = System::Drawing::Size(976, 688);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(492, 280);
			this->Name = L"MyForm3";
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Show;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &MyForm3::MyForm3_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
o.open("tests-name.txt",ios::trunc);
			o.clear();
			
			for(int i=0 ;i<50;i++){
			o<<te.getname(i)<<endl;

			}
			o.close();

			///////////////////
			o.open("tests-num.txt",ios::trunc);
			o.clear();
			
			
			for(int i=0 ;i<50;i++){
			o<<te.getnum(i)<<endl;

			}
			o.close();

			///////////
			o.open("tests-costs.txt",ios::trunc);
			o.clear();
			
			for(int i=0 ;i<50;i++){
			o<<te.getcost(i)<<endl;

			}
			o.close();
			/////////////
			o.open("tests-result.txt",ios::trunc);
			o.clear();
			
			for(int i=0 ;i<50;i++){
			o<<te.getres(i)<<endl;

			}
			o.close();
			////////////////////
			o.open("pat-name.txt",ios::trunc);
			o.clear();
			
			for(int i=0 ;i<50;i++){
			o<<Pat.getname(i)<<endl;

		}
			o.close();
			//////////////
			o.open("Pat-pass.txt",ios::trunc);
			
			o.clear();
			
			for(int i=0 ;i<50;i++){
			o<<Pat.getpass(i)<<endl;

			}
			o.close();
			///////////////
			
			o.open("Pat-Age.txt",ios::trunc);
			
			o.clear();
			
			for(int i=0 ;i<50;i++){
			o<<Pat.getAge(i)<<endl;

			}
			o.close();
			///////////////
			
			o.open("Weidth.txt",ios::trunc);
			o.clear();
			
			for(int i=0 ;i<50;i++){
			o<<Pat.getWeight(i)<<endl;

			}
			o.close();
			///////////////

			
			o.open("Pat-Doc.txt",ios::trunc);
				o.clear();
			
			for(int i=0 ;i<50;i++){
			o<<Pat.getDoctor(i)<<endl;

			}
			o.close();
			///////////////
             exit(0);
			 
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

			 patinet ^d=gcnew patinet();
			 d->Show();

		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

			 
			 searchpatinet ^a=gcnew searchpatinet();
			 a->Show();
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 testsearch ^a= gcnew testsearch();
			 a->Show();
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			  getpatsheet^ a=gcnew getpatsheet();
			 a->Show();
		 }
private: System::Void MyForm3_Load(System::Object^  sender, System::EventArgs^  e) {

			 				
string a;
String ^filename ="textfile.txt";

StreamReader^ din= File::OpenText(filename);
String ^str;

str=din->ReadLine();
	label2->Text=str;
	din->Close();
		 }
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 MyForm3::Visible=false;
		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

			 
			
	         
       	label4->Text=DateTime::Now.ToString();

		 }
private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label3_Click_1(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {

			 addres ^p= gcnew addres();
			 p->Show();


		 }
};
}
