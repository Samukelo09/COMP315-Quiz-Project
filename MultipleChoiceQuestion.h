#pragma once
#include <cliext/vector>
#include <vcclr.h>
#include "Q.h"

using namespace System;

 ref class MultipleChoiceQuestion:Q
{
public:
	MultipleChoiceQuestion();
	~MultipleChoiceQuestion();
	MultipleChoiceQuestion(String^, cliext::vector<String^>^, String^);
};
