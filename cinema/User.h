#pragma once

using namespace System;

public ref class User {
public:
	int id;
	String^ email;
	String^ password;
	bool isAdmin;
};