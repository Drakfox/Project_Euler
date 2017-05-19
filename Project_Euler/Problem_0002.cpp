#include "Problem_0002.h"

Problem_0002::Problem_0002() : Problems(2)
{
}

Problem_0002::~Problem_0002()
{
}

void Problem_0002::ExecuteSolution()
{
	sum += 2;
	RecursiveFibSum(1, 2);
	m_Result = std::to_string(sum);
}


void Problem_0002::RecursiveFibSum(int fibA, int fibB)
{
	int fibC = fibA + fibB;

	if (fibC % 2 == 0)
	{
		sum += fibC;
	}

	if (fibC < MAXVALUE)
	{
		RecursiveFibSum(fibB, fibC);
	}
}

