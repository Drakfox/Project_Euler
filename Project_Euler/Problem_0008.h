#ifndef PROBLEM_0008_H
#define PROBLEM_0008_H

#include "Problems.h"

class Problem_0008 : public Problems
{
public:
	Problem_0008();
	~Problem_0008();
	void ExecuteSolution();

private:
	static const unsigned int CALCULATIONLENGTH = 13;

	std::vector<int>* numbers;
};

#endif //PROBLEM_0008_H