#include <iostream>
#include "test_class.h"

int getPort()
{
	int e[] = { 9, 6, 3, 5, 6, 4, 5, 6, 7, 8, 2, 3, 4, 5 };

	int accum = 0;
	for (int i = 0; i < 3; ++i)
	{
		accum += e[i * 2];
	}
	return accum;
}

int main(int argc, char** argv)
{
	sizeof(test_class);
	test_class* tcs = static_cast<test_class*>(malloc(sizeof(test_class) * 30));

	std::cout << "key : " << tcs[15].generate() + getPort();

	int a, b, c;

	getf(a);
	getf(b);
	getf(c);

	for (int i = 0; i < 3; ++i)
	{
		regain(a, b, c);
	}

	free(tcs);
}

void getf(int& obj)
{
	obj = rand() % 10000;
	obj += 120;
}

int regain(int a, int b, int c)
{
	return a - b + c;
}

