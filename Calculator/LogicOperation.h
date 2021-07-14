#pragma once
#include "BinaryOperation.h"

template <typename T1, typename T2>
class LogicOperation : public BinaryOperation<T1, T2>
{
	LogicOperation(T1 operandLeft, T2 operandRight, char sign) :
		BinaryOperation<T1, T2>(operandLeft, operandRight, sign) {}
	virtual bool operator()() = 0;
	virtual bool Execute() = 0;
};

