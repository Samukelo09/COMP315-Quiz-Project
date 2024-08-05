#pragma 
#ifndef HEADER_H
#define HEADER_H

#include <cliext/vector>
#include <vcclr.h>

using namespace System;

ref class Q
{
public:
	String^ question;
	cliext::vector<String^>^ answers = gcnew cliext::vector<String^>();;
	String^ correctAnswer;
	String^ questionType;
	bool selected;

	Q();
	~Q();
	Q(String^, cliext::vector<String^>^, String^,String^);
};

#endif  // HEADER_H