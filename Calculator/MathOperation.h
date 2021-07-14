#pragma once
#include "BinaryOperation.h"

template <typename T1, typename T2>
class MathOperation : public BinaryOperation<T1, T2>
{
public:
	MathOperation(T1 operandLeft, T2 operandRight, char sign) :
		BinaryOperation<T1, T2>(operandLeft, operandRight, sign) {}
	virtual double operator()() = 0;
	virtual double Execute() = 0;
};

