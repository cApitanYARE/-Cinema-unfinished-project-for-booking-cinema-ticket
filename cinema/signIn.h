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
	/// Summary for signIn
	/// </summary>
	public ref class signIn : public System::Windows::Forms::Form
	{
	public:
		signIn(void)
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
		~signIn()
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
	private: System::Windows::Forms::TextBox^ confPass;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ btnBack;

	private: System::Windows::Forms::Button^ btnOk;

	private: System::Windows::Forms::LinkLabel^ logInLink;
	private: System::Windows::Forms::Label^ label5;



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
			this->confPass = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btnBack = (gcnew System::Windows::Forms::Button());
			this->btnOk = (gcnew System::Windows::Forms::Button());
			this->logInLink = (gcnew System::Windows::Forms::LinkLabel());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"MS Gothic", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(341, 45);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Registration";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"MS Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(15, 85);
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
			this->label3->Location = System::Drawing::Point(15, 144);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(106, 24);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password";
			// 
			// EmailBox
			// 
			this->EmailBox->Location = System::Drawing::Point(127, 83);
			this->EmailBox->Name = L"EmailBox";
			this->EmailBox->Size = System::Drawing::Size(226, 31);
			this->EmailBox->TabIndex = 3;
			this->EmailBox->TextChanged += gcnew System::EventHandler(this, &signIn::EmailBox_TextChanged);
			// 
			// PassBox
			// 
			this->PassBox->Location = System::Drawing::Point(127, 142);
			this->PassBox->Name = L"PassBox";
			this->PassBox->PasswordChar = '*';
			this->PassBox->Size = System::Drawing::Size(226, 31);
			this->PassBox->TabIndex = 4;
			// 
			// confPass
			// 
			this->confPass->Location = System::Drawing::Point(127, 206);
			this->confPass->Name = L"confPass";
			this->confPass->PasswordChar = '*';
			this->confPass->Size = System::Drawing::Size(226, 31);
			this->confPass->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"MS Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 197);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(106, 55);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Confirm password";
			// 
			// btnBack
			// 
			this->btnBack->Font = (gcnew System::Drawing::Font(L"MS Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnBack->Location = System::Drawing::Point(12, 291);
			this->btnBack->Name = L"btnBack";
			this->btnBack->Size = System::Drawing::Size(106, 38);
			this->btnBack->TabIndex = 7;
			this->btnBack->Text = L"Back";
			this->btnBack->UseVisualStyleBackColor = true;
			this->btnBack->Click += gcnew System::EventHandler(this, &signIn::btnBack_Click);
			// 
			// btnOk
			// 
			this->btnOk->Font = (gcnew System::Drawing::Font(L"MS Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnOk->Location = System::Drawing::Point(124, 291);
			this->btnOk->Name = L"btnOk";
			this->btnOk->Size = System::Drawing::Size(229, 38);
			this->btnOk->TabIndex = 8;
			this->btnOk->Text = L"Ok";
			this->btnOk->UseVisualStyleBackColor = true;
			this->btnOk->Click += gcnew System::EventHandler(this, &signIn::btnOk_Click);
			// 
			// logInLink
			// 
			this->logInLink->AutoSize = true;
			this->logInLink->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->logInLink->Location = System::Drawing::Point(311, 356);
			this->logInLink->Name = L"logInLink";
			this->logInLink->Size = System::Drawing::Size(43, 16);
			this->logInLink->TabIndex = 10;
			this->logInLink->TabStop = true;
			this->logInLink->Text = L"Log In";
			this->logInLink->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &signIn::logInLink_LinkClicked);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(124, 356);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(188, 16);
			this->label5->TabIndex = 9;
			this->label5->Text = L"You already have an account\?";
			// 
			// signIn
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(364, 391);
			this->Controls->Add(this->logInLink);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->btnOk);
			this->Controls->Add(this->btnBack);
			this->Controls->Add(this->confPass);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->PassBox);
			this->Controls->Add(this->EmailBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"signIn";
			this->Text = L"signIn";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void btnBack_Click(System::Object^ sender, System::EventArgs^ e) {
	this -> Close();
}
	   public: bool switchToLogin = false;
private: System::Void logInLink_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	switchToLogin = true;
	this -> Close();
}

	   public: User^ user = nullptr;
private: System::Void btnOk_Click(System::Object^ sender, System::EventArgs^ e) {
	String^	 email = EmailBox->Text;
	String^ password = PassBox->Text;
	String^ conf_password = confPass->Text;

	if (email->Length == 0 || password->Length == 0 || conf_password->Length == 0) {
		MessageBox::Show("Please enter all the fields", "One or more empty fields", MessageBoxButtons::OK);
		return;
	}

	if (String::Compare(password, conf_password) != 0) {
		MessageBox::Show("Password and Confirm Passowrd do not a same", "Password Error", MessageBoxButtons::OK);
		return;
	}

	try
	{
		String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=msdb;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "INSERT INTO [User] (email, password) VALUES (@Email, @Password)";


		SqlCommand command(sqlQuery, % sqlConn);

		command.Parameters->AddWithValue("@email", email);
		command.Parameters->AddWithValue("@password", password);

		command.ExecuteNonQuery();
		user = gcnew User;
		user->email = email;
		user->password = password;

		this->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Failed to register new user" + ex->Message, "Register Error", MessageBoxButtons::OK);
	}
}
private: System::Void EmailBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
