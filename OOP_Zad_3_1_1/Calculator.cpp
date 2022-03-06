#include "Calculator.h"
using namespace std;

Calculator::Calculator(int a, char op, int b)
{
	this->a = a;
	this->b = b;
	this->op = op;
}

Calculator::~Calculator() {
}

int Calculator::answer()
{
	if (op == '+')
		return a + b;
	if (op == '-')
		return a - b;
	if (op == '*')
		return a * b;
	if (op == '%')
		return a / b;
}