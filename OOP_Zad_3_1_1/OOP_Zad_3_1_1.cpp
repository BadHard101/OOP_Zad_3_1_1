#include <iostream>
#include "Calculator.h"
using namespace std;

int main()
{
	int a;
	int b;
	char op;
	int ot;

	cin >> a;
	ot = a;

	do
	{
		cin >> op;
		if (op == 'c')
			break;
		cin >> b;
		Calculator calc(ot, op, b);

		ot = calc.answer();
		cout << ot << endl;
	} while (op != 'c');
	
}