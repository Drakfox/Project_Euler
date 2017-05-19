#include "Problem_0006.h"

Problem_0006::Problem_0006() : Problems(6)
{
}

Problem_0006::~Problem_0006()
{
}

void Problem_0006::ExecuteSolution()
{
	std::cout << LIMIT << std::endl;
	unsigned long long sum = LIMIT * (LIMIT + 1) / 2;
	std::cout << sum << std::endl;
	unsigned long long sum_sq = (2 * LIMIT + 1) * (LIMIT + 1) * LIMIT / 6;
	std::cout << sum_sq << std::endl;

	unsigned long long value = sum * sum - sum_sq;
	std::cout << value << std::endl;

	m_Result = std::to_string(value);
}