#include <iostream>
#include "test_class.h"

int main(int argc, char** argv)
{
	sizeof(test_class);
	test_class* tcs = static_cast<test_class*>(malloc(sizeof(test_class) * 30));

	std::cout << "key : " << tcs[15].generate();

	free(tcs);
}

