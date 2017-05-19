#include "Problems.h"

class Problem_0005 : public Problems
{
public:
	Problem_0005();
	~Problem_0005();
	void ExecuteSolution();

private:
	static const unsigned int VALUE = 20;

	std::vector<int>* primes;
	std::vector<int>* primesNumber;

	int IsPrime(unsigned int number);
};