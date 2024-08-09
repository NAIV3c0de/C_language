#include "swap.h"
void swap(int a, int b)
{
	int temp = 0;
	temp = a;
	a = b;
	b = temp;
	cout << "num1 = " << a << endl;
	cout << "num2 = " << b << endl;
}

void swap01(int* p1, int* p2)
{
	int temp = 0;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
