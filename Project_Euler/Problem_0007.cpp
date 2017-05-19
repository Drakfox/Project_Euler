#include "Problem_0007.h"

Problem_0007::Problem_0007() : Problems(7)
{
}

Problem_0007::~Problem_0007()
{
}

void Problem_0007::ExecuteSolution()
{
	unsigned int count = 0;
	unsigned int iterator = 0;

	while (count < LIMIT)
	{
		iterator++;
		if (IsPrime(iterator))
			count++;
	}

	m_Result = std::to_string(iterator);
}

unsigned int Problem_0007::IsPrime(unsigned int number)
{
	if (number <= 1) return 0; // zero and one are not prime
	unsigned int i;
	for (i = 2; i*i <= number; i++) {
		if (number % i == 0) return 0;
	}
	return 1;
}
