#include "test_class.h"
#include <cstdint>
#include <random>

float test_class::generate()
{
	srand(0);
	int idx = rand() % 5;

	uint8_t f = m_lcs[idx];
	data += f + 8;
	return data;
}

void test_class::func1()
{

}

void test_class::func2(int, void*)
{

}
