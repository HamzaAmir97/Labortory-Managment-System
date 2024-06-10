#include<Windows.h>
#include"messege1.h"
#pragma once
using namespace System::IO;
namespace Project8 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for getpatsheet
	/// </summary>
	public ref class getpatsheet : public System::Windows::Forms::Form
	{
	public:
		getpatsheet(void)
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
		~getpatsheet()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
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
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::PictureBox^  pictureBox2;

	private: System::Windows::Forms::Timer^  timer1;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(getpatsheet::typeid));
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
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::CornflowerBlue;
			this->label2->Location = System::Drawing::Point(311, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(219, 33);
			this->label2->TabIndex = 1;
			this->label2->Text = L"PatinetSheet";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(244, 120);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(374, 18);
			this->label3->TabIndex = 2;
			this->label3->Text = L"-------------------------------------------------------------";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Cooper Black", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Crimson;
			this->label4->Location = System::Drawing::Point(23, 173);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 21);
			this->label4->TabIndex = 3;
			this->label4->Text = L"the name ";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Cooper Black", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::Crimson;
			this->label5->Location = System::Drawing::Point(298, 173);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(89, 21);
			this->label5->TabIndex = 4;
			this->label5->Text = L"the Age ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Cooper Black", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::Crimson;
			this->label6->Location = System::Drawing::Point(466, 173);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(118, 21);
			this->label6->TabIndex = 5;
			this->label6->Text = L"the Weidth";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Cooper Black", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::Crimson;
			this->label7->Location = System::Drawing::Point(669, 173);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(84, 21);
			this->label7->TabIndex = 6;
			this->label7->Text = L"the test";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Cooper Black", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Crimson;
			this->label8->Location = System::Drawing::Point(23, 237);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(152, 21);
			this->label8->TabIndex = 7;
			this->label8->Text = L"the cost of test";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Cooper Black", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::Crimson;
			this->label9->Location = System::Drawing::Point(283, 237);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(124, 21);
			this->label9->TabIndex = 8;
			this->label9->Text = L"the Adreass";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Cooper Black", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Crimson;
			this->label10->Location = System::Drawing::Point(519, 237);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(152, 21);
			this->label10->TabIndex = 9;
			this->label10->Text = L"thephone.num";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Cooper Black", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::Crimson;
			this->label11->Location = System::Drawing::Point(23, 318);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(191, 21);
			this->label11->TabIndex = 10;
			this->label11->Text = L"the name of doctor";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(123, 176);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(65, 18);
			this->label12->TabIndex = 11;
			this->label12->Text = L"label12";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(386, 176);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(65, 18);
			this->label13->TabIndex = 12;
			this->label13->Text = L"label13";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(590, 176);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(65, 18);
			this->label14->TabIndex = 13;
			this->label14->Text = L"label14";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(759, 176);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(65, 18);
			this->label15->TabIndex = 14;
			this->label15->Text = L"label15";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(181, 240);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(65, 18);
			this->label16->TabIndex = 15;
			this->label16->Text = L"label16";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(409, 240);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(65, 18);
			this->label17->TabIndex = 16;
			this->label17->Text = L"label17";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(672, 240);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(65, 18);
			this->label18->TabIndex = 17;
			this->label18->Text = L"label18";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(222, 321);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(65, 18);
			this->label19->TabIndex = 18;
			this->label19->Text = L"label19";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::Control;
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(800, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(56, 68);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 19;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &getpatsheet::pictureBox1_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Cooper Black", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label20->ForeColor = System::Drawing::Color::Crimson;
			this->label20->Location = System::Drawing::Point(393, 321);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(155, 21);
			this->label20->TabIndex = 20;
			this->label20->Text = L"the date of test";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Tahoma", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(567, 323);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(65, 18);
			this->label21->TabIndex = 21;
			this->label21->Text = L"label21";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(351, 376);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 50);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 22;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &getpatsheet::pictureBox2_Click);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &getpatsheet::timer1_Tick);
			// 
			// getpatsheet
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(854, 448);
			this->ControlBox = false;
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
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
			this->Name = L"getpatsheet";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Load += gcnew System::EventHandler(this, &getpatsheet::getpatsheet_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {

				 getpatsheet::Visible=false;
			 }
private: System::Void getpatsheet_Load(System::Object^  sender, System::EventArgs^  e) {

			 label1->Text=DateTime::Now.ToString();
			 String^  file="pat-sheet.txt";
			 StreamReader^s=File::OpenText(file);
			 label12->Text= s->ReadLine();
			 label13->Text= s->ReadLine();
			 label14->Text= s->ReadLine();
			 label18->Text= s->ReadLine();
			 label17->Text= s->ReadLine();
			 label19->Text= s->ReadLine();
			 label16->Text= s->ReadLine();
			 label15->Text= s->ReadLine();
			 label21->Text= s->ReadLine();

			 s->Close();

		 }
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
			 StreamWriter ^in =gcnew StreamWriter("print.txt");
			 in->WriteLine(label2->Text);
			 in->WriteLine(label3->Text);
			 in->WriteLine("     ");

			 in->Write(label4->Text);
			 in->Write("    ");
			 in->Write(label12->Text);
			 in->Write("    ");
			  in->Write(label5->Text);
			  in->Write("    ");
			  in->WriteLine(label13->Text);

			   in->Write(label6->Text);
			   in->Write("    ");
			   in->Write(label14->Text);
			    in->Write("    ");
				 in->Write(label7->Text);
				 in->Write("    ");
			     in->WriteLine(label15->Text);

				 in->Write(label8->Text);
				 in->Write("    ");
			   in->Write(label16->Text);
			    in->Write("    ");
				 in->Write(label9->Text);
				 in->Write("    ");
			     in->WriteLine(label17->Text);
				 
				 in->Write(label10->Text);
				 in->Write("    ");
			     in->Write(label18->Text);
			    in->Write("    ");
				 in->Write(label11->Text);
				 in->Write("    ");
			     in->WriteLine(label19->Text);

				  in->Write(label20->Text);
				  in->Write("    ");
			   in->Write(label21->Text);

			     in->WriteLine("     ");
			    in->WriteLine(label3->Text);
			


				 in->Close();


           messege1 ^z=gcnew messege1();
		   z->Show();

		 }
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
			 DateTime t=DateTime::Now;
			 label1->Text=t.ToLongTimeString();
		 }
};
}
