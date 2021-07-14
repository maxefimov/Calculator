#pragma once
#include "MathOperation.h"

template <typename T1, typename T2>
class AddOperation : public MathOperation<T1, T2>
{
public:
	AddOperation(T1 operandLeft, T2 operandRight) :
		MathOperation<T1, T2>(operandLeft, operandRight, '+') {}
	virtual double Execute() override { return operandLeft + operandRigh; }
	virtual double operator()() override { return Execute(); }
};

