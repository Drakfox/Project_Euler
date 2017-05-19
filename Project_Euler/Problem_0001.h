#include "Problems.h"

class Problem_0001 : public Problems
{
public:
	Problem_0001();
	~Problem_0001();
	void ExecuteSolution();

private:
	static const int SIZE = 1000;
	int sum = 0;
};