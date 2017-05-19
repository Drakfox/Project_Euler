#include "Problems.h"

class Problem_0007 : public Problems
{
public:
	Problem_0007();
	~Problem_0007();
	void ExecuteSolution();

private:
	static const unsigned int LIMIT = 10001;

	unsigned int IsPrime(unsigned int number);
};