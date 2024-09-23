#include <iostream>
#include <vector>
#include <stdio.h>
#include <time.h>


//измененно infoli

int main()
{
	setlocale (LC_ALL, "Rus");
	time_t start, end;
	time(&start);
	int n = 0;
	std::vector<int> v1;
	while (n < 5000)
	{
		v1.push_back(n);
		std::cout << n;
		n += 2;

	}
	std::cout << std::endl;
	time(&end);
	double seconds = difftime(end, start);
	printf("The time: %f seconds\n", seconds);

}
