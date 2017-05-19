#include "Problems.h"

class Problem_0004 : public Problems
{
public:
	Problem_0004();
	~Problem_0004();
	void ExecuteSolution();

private:

	static const int MAXVALUE = 999;
	static const int MINVALUE = 100;
	unsigned int largestPalindrome = 0;

	int IsPalindrome(unsigned int a, unsigned int b);
};