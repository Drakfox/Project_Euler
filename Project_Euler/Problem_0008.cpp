#include "Problem_0008.h"

Problem_0008::Problem_0008() : Problems(8)
{
	numbers = new std::vector<int>();
}

Problem_0008::~Problem_0008()
{
	delete numbers;
}

void Problem_0008::ExecuteSolution()
{
	std::string line;
	std::ifstream myfile("Resources/Problem_0008.txt");

	if (myfile.is_open())
	{
		while (std::getline(myfile, line))
		{
			for (int i = 0; i < line.size(); i++)
			{
				numbers->push_back(CharToInt(line.at(i)));
			}
		}
		myfile.close();

		unsigned long long BiggestProduct = 0;
		for (int i = 0; i < numbers->size() - CALCULATIONLENGTH; i++)
		{
			unsigned long long Product = 1L;
			for (int j = 0; j < CALCULATIONLENGTH; j++)
			{
				Product = Product * numbers->at(i + j);
			}

			if (BiggestProduct < Product)
				BiggestProduct = Product;
		}
		m_Result = std::to_string(BiggestProduct);
	}
	else
	{
		std::cout << "Unable to open file" << std::endl;
		m_Result = std::to_string(0);
	}

}

