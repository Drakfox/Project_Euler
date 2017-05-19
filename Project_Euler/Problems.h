#ifndef PROBLEM_H
#define PROBLEM_H

#include "stdafx.h"

class Problems
{
public:
	Problems(int ProblemId);

	virtual void SolveProblem();
	virtual void InitializeProblem();
	virtual void ExecuteSolution() = 0;
	virtual void FinalizeProblem();

	std::string m_Result;

private:
	int m_ProblemId;
};
#endif //PROBLEM_H