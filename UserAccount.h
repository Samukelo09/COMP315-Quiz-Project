#pragma once

#ifndef HEADER_H
#define HEADER_H

#include <cliext/vector>
#include <vcclr.h>

using namespace System;

ref class UserAccount
{
public:
	UserAccount();
	~UserAccount();
	UserAccount(String^, String^);
	String^ username;
	String^ password;
};

#endif USERACCOUNT.H

