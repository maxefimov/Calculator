#pragma once
#include "LogicOperation.h"

class BoolAddOperation :
    public LogicOperation<bool, bool>
{
	BoolAddOperation(bool operandLeft, bool operandRight) :
		LogicOperation(operandLeft, operandRight, '&') {}
	virtual bool operator()();
	virtual bool Execute();
};

