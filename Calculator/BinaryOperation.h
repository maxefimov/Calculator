#pragma once
template <typename T1, typename T2>
class BinaryOperation
{
protected:
	T1 operandLeft;
	T2 operandRight;
	char sign;
public:
	BinaryOperation(T1 operandLeft, T2 operandRight, char sign) :
		operandLeft{ operandLeft }, operandRight{ operandRight }, sign{ sign }{}
	virtual T1 operator()() = 0;
	virtual T1 Execute() = 0;

	T1& OperandLeft() { return operandLeft; }
	T2& OperandRight() { return operandRight; }
	char& Sign() { return sign; }
};

