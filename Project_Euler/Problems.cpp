#include "Problems.h"

Problems::Problems(int ProblemId)
{
	m_ProblemId = ProblemId;
}

void Problems::SolveProblem()
{
	InitializeProblem();
	ExecuteSolution();
	FinalizeProblem();
}

void Problems::InitializeProblem()
{
	std::cout << "Solving Problem " << m_ProblemId << std::endl;
	std::cout << "##############################################" << std::endl;
	std::cout << "Debug Output" << std::endl;
	std::cout << "##############################################" << std::endl;

}

void Problems::FinalizeProblem()
{
	std::cout << "##############################################" << std::endl;
	std::cout << "Result of problem is : " << m_Result << std::endl;
}
