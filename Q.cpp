#include "Q.h"

using namespace System;

Q::Q() { selected = false; }
Q::~Q() {  }

Q::Q(String^ question, cliext::vector<String^>^ answers, String^ correctAnswer,String^ questionType)
{
	this->question = question;
	this->answers = answers;
	this->correctAnswer = correctAnswer;
	this->questionType = questionType;
}
