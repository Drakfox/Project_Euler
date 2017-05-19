#include "Problem_0004.h"

Problem_0004::Problem_0004() : Problems(4)
{
}

Problem_0004::~Problem_0004()
{
}

void Problem_0004::ExecuteSolution()
{
	int a = MAXVALUE;
	int b = MAXVALUE;

	while (a >= MINVALUE)
	{
		b = MAXVALUE;
		while (b >= a)
		{
			if (a*b <= largestPalindrome)
				break;

			if (IsPalindrome(a, b))
				largestPalindrome = a * b;
			b--;
		}
		a--;
	}

	m_Result = std::to_string(largestPalindrome);
}

int Problem_0004::IsPalindrome(unsigned int a, unsigned int b) 
{
	std::string number = std::to_string(a*b);
	
	unsigned int i = 0;
	unsigned int size = number.length();
	while(i <= size / 2)
	{
		if (number.at(i) != number.at(size - i - 1))
			return 0; 
		i++;
	}

	return 1;
}
