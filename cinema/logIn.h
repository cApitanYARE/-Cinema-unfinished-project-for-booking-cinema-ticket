#pragma once

#include "User.h"

namespace cinema {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for logIn
	/// </summary>
	public ref class logIn : public System::Windows::Forms::Form
	{
	public:
		logIn(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~logIn()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ EmailBox;
	private: System::Windows::Forms::TextBox^ PassBox;


	private: System::Windows::Forms::Button^ btnBack;
	private: System::Windows::Forms::Button^ btnOk;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::LinkLabel^ signInLink;



	protected:

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->EmailBox = (gcnew System::Windows::Forms::TextBox());
			this->PassBox = (gcnew System::Windows::Forms::TextBox());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->btnOk = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->signInLink = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(340, 57);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Log In";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"MS Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(13, 113);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 24);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Email";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"MS Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 192);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password";
			// 
			// EmailBox
			// 
			this->EmailBox->Location = System::Drawing::Point(125, 111);
			this->EmailBox->Name = L"EmailBox";
			this->EmailBox->Size = System::Drawing::Size(227, 31);
			this->EmailBox->TabIndex = 3;
			this->EmailBox->TextChanged += gcnew System::EventHandler(this, &logIn::EmailBox_TextChanged);
			// 
			// PassBox
			// 
			this->PassBox->Location = System::Drawing::Point(125, 190);
			this->PassBox->Name = L"PassBox";
			this->PassBox->Size = System::Drawing::Size(227, 31);
			this->PassBox->TabIndex = 4;
			// 
			// btnBack
			// 
			this->btnBack->Font = (gcnew System::Drawing::Font(L"MS Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnBack->Location = System::Drawing::Point(17, 296);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(101, 38);
			this->btnBack->TabIndex = 5;
			this->btnBack->Text = L"Back";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &logIn::btnBack_Click);
			// 
			// btnOk
			// 
			this->btnOk->Font = (gcnew System::Drawing::Font(L"MS Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnOk->Location = System::Drawing::Point(125, 296);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(229, 38);
			this->btnOk->TabIndex = 6;
			this->btnOk->Text = L"Ok";
			this->btnOk->UseVisualStyleBackColor = true;
			this->btnOk->Click += gcnew System::EventHandler(this, &logIn::btnOk_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(117, 357);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 25);
			this->label4->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(153, 357);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(146, 16);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Don\'t have an account\?";
			this->label5->Click += gcnew System::EventHandler(this, &logIn::label5_Click);
			// 
			// signInLink
			// 
			this->signInLink->AutoSize = true;
			this->signInLink->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->signInLink->Location = System::Drawing::Point(305, 357);
			this->signInLink->Name = L"signInLink";
			this->signInLink->Size = System::Drawing::Size(47, 16);
			this->signInLink->TabIndex = 11;
			this->signInLink->TabStop = true;
			this->signInLink->Text = L"Sign In";
			this->signInLink->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &logIn::signInLink_LinkClicked);
			// 
			// logIn
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(364, 391);
			this->Controls->Add(this->signInLink);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btnOk);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->PassBox);
			this->Controls->Add(this->EmailBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"logIn";
			this->Text = L"logIn";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
		   public: User^ user = nullptr;
private: System::Void btnOk_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ email = EmailBox->Text;
	String^ password = PassBox->Text;

	if (email->Length == 0 || password->Length == 0) {
		MessageBox::Show("Please enter all the fields", "One or more empty fields", MessageBoxButtons::OK);
		return;
	}


	try
	{
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=msdb;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "SELECT * FROM [User] WHERE email=@email AND password=@pwd;";

		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@email", email);
		command.Parameters->AddWithValue("@pwd", password);

		SqlDataReader^ reader = command.ExecuteReader();
		
		if (reader->Read()) {

			user = gcnew User;

			user->id = reader->GetInt32(0);
			user->email = reader->GetString(1);
			user->password = reader->GetString(2);
			user->isAdmin = reader->GetBoolean(3);

			this->Close();
		}
		else {
			MessageBox::Show("Email or password is incorrect", "Email or Password Error", MessageBoxButtons::OK);
		}

	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Failed to connect to database: " + ex->Message, "Database Connection Error", MessageBoxButtons::OK);
	}
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}

	public: bool switchToRegister = false;
private: System::Void signInLink_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

		this->switchToRegister = true;
		this->Close();
}
private: System::Void EmailBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
