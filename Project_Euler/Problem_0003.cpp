#include "Problem_0003.h"

Problem_0003::Problem_0003() : Problems(3)
{
}

Problem_0003::~Problem_0003()
{
}

void Problem_0003::ExecuteSolution()
{
	unsigned long i;
	for (i = 2; i*i <= VALUE; i++)
	{
		if (VALUE % i == 0)
		{
			if (IsPrime(i))
			{
				biggestPrime = i;
			}
		}
	}

	m_Result = std::to_string(biggestPrime);
}

int Problem_0003::IsPrime(unsigned int number) {
	if (number <= 1) return 0; // zero and one are not prime
	unsigned int i;
	for (i = 2; i*i <= number; i++) {
		if (number % i == 0) return 0;
	}
	return 1;
}
