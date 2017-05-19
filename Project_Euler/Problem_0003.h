#include "Problems.h"

class Problem_0003 : public Problems
{
public:
	Problem_0003();
	~Problem_0003();
	void ExecuteSolution();

private:
	static const unsigned long long VALUE = 600851475143;
	long biggestPrime = 0;

	int IsPrime(unsigned int number);
};