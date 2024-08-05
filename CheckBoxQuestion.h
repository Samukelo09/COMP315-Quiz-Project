#pragma once

#include <cliext/vector>
#include <vcclr.h>
#include "Q.h"

ref class CheckBoxQuestion:Q
{
	/*CAN HAVE 1-4 ANSWERS SELECTED*/
	CheckBoxQuestion();
	~CheckBoxQuestion();
	CheckBoxQuestion(String^, cliext::vector<String^>^, String^);
	CheckBoxQuestion(String^, cliext::vector<String^>^, String^, String^);
	CheckBoxQuestion(String^, cliext::vector<String^>^, String^, String^, String^);
	CheckBoxQuestion(String^, cliext::vector<String^>^, String^, String^, String^, String^);
};

