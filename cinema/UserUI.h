#pragma once

#include "User.h"
#include "Movie.h"

namespace cinema {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;
    using namespace System::Data::SqlClient;

    public ref class UserUI : public System::Windows::Forms::Form
    {
    public:
        UserUI(User^ user)
        {
            InitializeComponent();
            nameUser->Text = user->email;
            LoadIntoUserBooking();
            CheckDuplicateEmails();
        }

    protected:
        ~UserUI()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::Label^ name;
    private: System::Windows::Forms::Label^ nameUser;
    private: System::Windows::Forms::Button^ button1;
    private: System::ComponentModel::Container^ components;
    private: System::Windows::Forms::Panel^ scrollPanel; // New scrollable panel

#pragma region Windows Form Designer generated code
           void InitializeComponent(void)
           {
               this->name = (gcnew System::Windows::Forms::Label());
               this->nameUser = (gcnew System::Windows::Forms::Label());
               this->button1 = (gcnew System::Windows::Forms::Button());
               this->scrollPanel = (gcnew System::Windows::Forms::Panel());
               this->SuspendLayout();
               // 
               // name
               // 
               this->name->AutoSize = true;
               this->name->Font = (gcnew System::Drawing::Font(L"MS Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->name->Location = System::Drawing::Point(12, 9);
               this->name->Name = L"name";
               this->name->Size = System::Drawing::Size(55, 16);
               this->name->TabIndex = 2;
               this->name->Text = L"Name: ";
               this->name->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
               // 
               // nameUser
               // 
               this->nameUser->Font = (gcnew System::Drawing::Font(L"MS Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->nameUser->ImageAlign = System::Drawing::ContentAlignment::TopCenter;
               this->nameUser->Location = System::Drawing::Point(59, 9);
               this->nameUser->Name = L"nameUser";
               this->nameUser->Size = System::Drawing::Size(177, 16);
               this->nameUser->TabIndex = 3;
               this->nameUser->Text = L"-";
               // 
               // button1
               // 
               this->button1->Font = (gcnew System::Drawing::Font(L"MS Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                   static_cast<System::Byte>(204)));
               this->button1->Location = System::Drawing::Point(12, 346);
               this->button1->Name = L"button1";
               this->button1->Size = System::Drawing::Size(290, 33);
               this->button1->TabIndex = 1;
               this->button1->Text = L"Close";
               this->button1->UseVisualStyleBackColor = true;
               this->button1->Click += gcnew System::EventHandler(this, &UserUI::button1_Click);
               // 
               // scrollPanel
               // 
               this->scrollPanel->AutoScroll = true;
               this->scrollPanel->Location = System::Drawing::Point(12, 38);
               this->scrollPanel->Name = L"scrollPanel";
               this->scrollPanel->Size = System::Drawing::Size(290, 300);
               this->scrollPanel->TabIndex = 4;
               // 
               // UserUI
               // 
               this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
               this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
               this->ClientSize = System::Drawing::Size(314, 391);
               this->Controls->Add(this->scrollPanel);
               this->Controls->Add(this->nameUser);
               this->Controls->Add(this->name);
               this->Controls->Add(this->button1);
               this->Name = L"UserUI";
               this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
               this->Text = L"UserUI";
               this->Load += gcnew System::EventHandler(this, &UserUI::UserUI_Load);
               this->ResumeLayout(false);
               this->PerformLayout();

           }
#pragma endregion

    private: System::Void UserUI_Load(System::Object^ sender, System::EventArgs^ e) {
        LoadIntoUserBooking();
        CheckDuplicateEmails();
    }

    private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
        this->Close();
    }

    private: void LoadIntoUserBooking()
    {
        try
        {
            String^ email = nameUser->Text;
            String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=msdb;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
            SqlConnection^ sqlConn = gcnew SqlConnection(connString);
            sqlConn->Open();

            String^ sqlQuery = "SELECT name, day, time, count FROM [Booking] WHERE email = @Email";
            SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);
            command->Parameters->AddWithValue("@Email", email);

            SqlDataReader^ reader = command->ExecuteReader();

            int yOffset = 0; // Initial offset for the first group box
            while (reader->Read())
            {
                System::Windows::Forms::GroupBox^ groupBox1 = gcnew System::Windows::Forms::GroupBox();
                System::Windows::Forms::Label^ countL = gcnew System::Windows::Forms::Label();
                System::Windows::Forms::Label^ label5 = gcnew System::Windows::Forms::Label();
                System::Windows::Forms::Label^ timeL = gcnew System::Windows::Forms::Label();
                System::Windows::Forms::Label^ dayL = gcnew System::Windows::Forms::Label();
                System::Windows::Forms::Label^ label6 = gcnew System::Windows::Forms::Label();
                System::Windows::Forms::Label^ movieName = gcnew System::Windows::Forms::Label();
                System::Windows::Forms::Label^ label2 = gcnew System::Windows::Forms::Label();
                System::Windows::Forms::Label^ label1 = gcnew System::Windows::Forms::Label();

                // groupBox1
                groupBox1->BackColor = System::Drawing::Color::Snow;
                groupBox1->Controls->Add(countL);
                groupBox1->Controls->Add(label5);
                groupBox1->Controls->Add(timeL);
                groupBox1->Controls->Add(dayL);
                groupBox1->Controls->Add(label6);
                groupBox1->Controls->Add(movieName);
                groupBox1->Controls->Add(label2);
                groupBox1->Controls->Add(label1);
                groupBox1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
                groupBox1->Location = System::Drawing::Point(5, yOffset);
                groupBox1->Name = L"groupBox1";
                groupBox1->Size = System::Drawing::Size(246, 112);
                groupBox1->TabIndex = 0;
                groupBox1->TabStop = false;
                groupBox1->Text = L"Ticket";

                // countL
                countL->Location = System::Drawing::Point(177, 76);
                countL->Name = L"countL";
                countL->Size = System::Drawing::Size(60, 21);
                countL->TabIndex = 9;
                countL->Text = reader["count"]->ToString();

                // label5
                label5->AutoSize = true;
                label5->Location = System::Drawing::Point(111, 76);
                label5->Name = L"label5";
                label5->Size = System::Drawing::Size(75, 21);
                label5->TabIndex = 8;
                label5->Text = L"Count:";

                // timeL
                timeL->Location = System::Drawing::Point(53, 76);
                timeL->Name = L"timeL";
                timeL->Size = System::Drawing::Size(60, 21);
                timeL->TabIndex = 7;
                timeL->Text = reader["time"]->ToString();

                // dayL
                dayL->Location = System::Drawing::Point(53, 55);
                dayL->Name = L"dayL";
                dayL->Size = System::Drawing::Size(167, 21);
                dayL->TabIndex = 6;
                dayL->Text = reader["day"]->ToString();

                // label6
                label6->AutoSize = true;
                label6->Location = System::Drawing::Point(7, 76);
                label6->Name = L"label6";
                label6->Size = System::Drawing::Size(52, 21);
                label6->TabIndex = 4;
                label6->Text = L"Time:";

                // movieName
                movieName->Location = System::Drawing::Point(53, 32);
                movieName->Name = L"movieName";
                movieName->Size = System::Drawing::Size(167, 21);
                movieName->TabIndex = 5;
                movieName->Text = reader["name"]->ToString();

                // label2
                label2->AutoSize = true;
                label2->Location = System::Drawing::Point(7, 55);
                label2->Name = L"label2";
                label2->Size = System::Drawing::Size(48, 21);
                label2->TabIndex = 1;
                label2->Text = L"Day:";

                // label1
                label1->AutoSize = true;
                label1->Location = System::Drawing::Point(7, 32);
                label1->Name = L"label1";
                label1->Size = System::Drawing::Size(56, 21);
                label1->TabIndex = 0;
                label1->Text = L"Film:";

                this->scrollPanel->Controls->Add(groupBox1); // Add groupBox to scrollPanel

                yOffset += 122; // Adjust offset for the next group box
            }

            reader->Close();
            sqlConn->Close();
        }
        catch (Exception^ ex)
        {
            MessageBox::Show("Failed to load data: " + ex->Message, "Error", MessageBoxButtons::OK);
        }
    }

    private: void CheckDuplicateEmails()
    {
        try
        {
            String^ email = nameUser->Text;
            String^ connString = "Data Source=localhost\\sqlexpress;Initial Catalog=msdb;Integrated Security=True;Encrypt=True;TrustServerCertificate=True";
            SqlConnection^ sqlConn = gcnew SqlConnection(connString);
            sqlConn->Open();

            String^ sqlQuery = "SELECT COUNT(*) AS emailCount FROM [Booking] WHERE email = @Email";
            SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);
            command->Parameters->AddWithValue("@Email", email);

            int emailCount = (int)command->ExecuteScalar();

            sqlConn->Close();
        }
        catch (Exception^ ex)
        {
            MessageBox::Show("Failed to check duplicate emails: " + ex->Message, "Error", MessageBoxButtons::OK);
        }
    }
    };
}
