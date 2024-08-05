#pragma once
#include <cliext/vector>
#include <vcclr.h>
#include "MultipleChoiceQuestion.h"

/*SINGLE INHERITANCE WITH MTL* QUESTION*/
ref class TrueOrFalseQuestion:MultipleChoiceQuestion
{
	TrueOrFalseQuestion();
	~TrueOrFalseQuestion();
	TrueOrFalseQuestion(String^, cliext::vector<String^>^, String^);
};

