#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator
{
public:
	Calculator(int, char, int);
	~Calculator();
	int answer();
private:
	int a;
	int b;
	char op;
};

#endif // !CALCULATOR_H
