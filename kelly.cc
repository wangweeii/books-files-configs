#include <iostream>
#include <vector>


int main(int argc, char *argv[])
{
	std::vector<double> probablity;
	std::vector<double> bonus;
	for (double p = 0.86; p < 1; )
	{
		probablity.push_back(p);
		p += 0.01;
	}
	for (double b = 0.01; b < 0.21; )
	{
		bonus.push_back(b);
		b += 0.005;
	}

	// f=(bp-q)/b
	printf("kellybonus");
	for (double p : probablity)
	{
		printf("%10.2f", p);
	}
	for (const double &b : bonus)
	{
		std::cout << std::endl;
		printf("%10.3f", b);
		for (const double &p:probablity)
		{
			printf("%10.2f", 100 * (b * p + p - 1) / b);
		}
	}
	printf("\n");

	return 0;
}
