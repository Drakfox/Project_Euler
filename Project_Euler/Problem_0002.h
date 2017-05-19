#include "Problems.h"

class Problem_0002 : public Problems
{
public:
	Problem_0002();
	~Problem_0002();
	void ExecuteSolution();

private:
	static const int MAXVALUE = 4000000;
	int sum = 0;

	void RecursiveFibSum(int fibA, int fibB);
};