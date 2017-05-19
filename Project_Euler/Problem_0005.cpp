#include "Problem_0005.h"

Problem_0005::Problem_0005() : Problems(5)
{
	primes = new std::vector<int>();
	primesNumber = new std::vector<int>();
}

Problem_0005::~Problem_0005()
{
	delete primes;
	delete primesNumber;
}

void Problem_0005::ExecuteSolution()
{
	for (unsigned int i = 0; i < VALUE; i++)
	{
		if (IsPrime(i))
		{
			primes->push_back(i);
		}
	}

	for (unsigned int i = 0; i < primes->size(); i++)
	{
		int x = primes->at(i);
		int y = x;
		int count = 1;
		while ((x = x * y) < VALUE)
		{
			count++;
		}
		primesNumber->push_back(count);
	}

	unsigned int product = 1;
	for (unsigned int i = 0; i < primes->size(); i++)
	{
		unsigned int number = primes->at(i);
		unsigned int power = 1;
		for (unsigned int j = 0; j < primesNumber->at(i); j++)
		{
			power = power * number;
		}
		product = product * power;
	}

	m_Result = std::to_string(product);
}

int Problem_0005::IsPrime(unsigned int number) {
	if (number <= 1) return 0; // zero and one are not prime
	unsigned int i;
	for (i = 2; i*i <= number; i++) {
		if (number % i == 0) return 0;
	}
	return 1;
}
