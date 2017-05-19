#include "Problem_0001.h"

Problem_0001::Problem_0001() : Problems(1)
{
}

Problem_0001::~Problem_0001()
{
}

void Problem_0001::ExecuteSolution()
{
	for (int i = 0; i < SIZE; i++)
	{
		if ((i % 3) == 0)
		{
			sum += i;
		}
		else if ((i % 5) == 0)
		{
			sum += i;
		}
	}

	m_Result = std::to_string(sum);
}

