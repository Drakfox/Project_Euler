#include "Problems.h"

class Problem_0023 : public Problems
{
public:
	Problem_0023();
	~Problem_0023();
	void ExecuteSolution();

private:
	static const unsigned int MINABUNDANT = 12;
	static const unsigned int MAXABUNDANT = 28124;

	static const unsigned int MAXLIMIT = 28124;

	std::vector<int>* abundantNumbers;
	std::vector<int>* sumOfAbundantNumbers;
	std::vector<int>* sumOfSortedAbundantNumbers;

};