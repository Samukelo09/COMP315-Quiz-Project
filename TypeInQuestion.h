#pragma once

#include <cliext/vector>
#include <vcclr.h>
#include "Q.h"

ref class TypeInQuestion:Q
{
	TypeInQuestion();
	~TypeInQuestion();
	TypeInQuestion(String^, String^);/*ONLY HAS ANSWER AND A QUESTION*/
};

