#include "Problem_0023.h"

Problem_0023::Problem_0023() : Problems(23)
{
	abundantNumbers = new std::vector<int>();
	sumOfAbundantNumbers = new std::vector<int>();
	sumOfSortedAbundantNumbers = new std::vector<int>();
}

Problem_0023::~Problem_0023()
{
	delete abundantNumbers;
	delete sumOfAbundantNumbers;
	delete sumOfSortedAbundantNumbers;
}

void Problem_0023::ExecuteSolution()
{
	unsigned int iterator = MINABUNDANT;

	unsigned long long count = (MAXLIMIT) * (MAXLIMIT + 1) / 2;

	std::cout << count << std::endl;

	for (int i = MINABUNDANT; i < MAXABUNDANT; i++)
	{
		int sum = 1;
		for (int j = 2; j*j < i; j++)
		{
			if (i%j == 0)
			{
				sum = sum + j;
				sum = sum + i / j;
			}
		}

		if (sum > i)
			abundantNumbers->push_back(i);
	}

	std::ofstream myfile;
	myfile.open("Problem_0028.txt");

	for (int j = 0; j < abundantNumbers->size(); j++)
	{
		myfile << abundantNumbers->at(j) << std::endl;
	}

	myfile.close();
	unsigned long sum = 0;
	for (int j = 0; j < abundantNumbers->size(); j++)
	{
		for (int k = j; k < abundantNumbers->size(); k++)
		{
			sum = abundantNumbers->at(j) + abundantNumbers->at(k);
			if (sum <= MAXLIMIT)
				sumOfAbundantNumbers->push_back(abundantNumbers->at(j) + abundantNumbers->at(k));
			else
				break;
		}
	}


	std::cout << "Finished calculating sums" << std::endl;

	std::sort(sumOfAbundantNumbers->begin(), sumOfAbundantNumbers->end());
	sumOfAbundantNumbers->erase(std::unique(sumOfAbundantNumbers->begin(), sumOfAbundantNumbers->end()), sumOfAbundantNumbers->end());

	std::cout << "Finished sorting sums" << std::endl;

	myfile.open("Problem_0028_Sum.txt");

	for (int j = 0; j < sumOfAbundantNumbers->size(); j++)
	{
		myfile << sumOfAbundantNumbers->at(j) << std::endl;
	}

	myfile.close();

	
	for (int i = 0; i < sumOfAbundantNumbers->size(); i++)
	{
		count = count - sumOfAbundantNumbers->at(i);
	}
	

	m_Result = std::to_string(count);
}
