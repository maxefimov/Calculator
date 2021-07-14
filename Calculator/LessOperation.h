#pragma once
#include "LogicOperation.h"

template <typename T1, typename T2>
class LessOperation :
    public LogicOperation<T1, T2>
{
public:
	LessOperation(T1 operandLeft, T2 operandRight) :
		LogicOperation<T1, T2>(operandLeft, operandRight '<') {}
	virtual bool Execute() { return operandLeft < operandRight; }
	virtual bool operator()() { return Execute(); }
};

