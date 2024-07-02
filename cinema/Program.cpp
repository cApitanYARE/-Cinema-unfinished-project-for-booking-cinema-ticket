#pragma once

#include "logIn.h"
#include "signIn.h"
#include "AdminSide.h"
#include "Movie.h"
#include "User.h"
#include "UserUI.h"
#include "MainForm.h"


using namespace System;
using namespace System::Windows::Forms;




int main(array<String^>^ args) {

    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    User^ user = nullptr;
    while (true) {
        cinema::logIn logIn;
        logIn.ShowDialog();

        if (logIn.switchToRegister) {
            cinema::signIn signIn;
            signIn.ShowDialog();

            if (signIn.switchToLogin) {
                continue;
            }
            else {
                user = signIn.user;
                break;
            }
        }
        else {
            user = logIn.user;
            break;
        }
    }

    if (user != nullptr) {
        if (user->isAdmin) {
            cinema::AdminSide adminSide(user);
            Application::Run(% adminSide);
        }
        else {
            cinema::MainForm mainForm(user);
            Application::Run(% mainForm);
        }
    }

   

    else {
        MessageBox::Show("Authentication Canceled", "Program.cpp", MessageBoxButtons::OK);
    }

    return 0;
}
