#include <vector>
#include <iostream>

int test()
{
	std::vector<int> array { 0, 1, 2 };
	array.resize(5); // set size to 5

	std::cout << "The length is: " << array.size() << '\n';

	for (auto const &element : array)
		std::cout << element << ' ';
	
	std::vector<bool> arrays { true, false, false, true, true };
	std::cout << "The length of arrays is: " << arrays.size() << '\n';

	for (auto const &element : arrays)
		std::cout << element << ' ';

	std::cout <<std::endl<<"The febonacci sequence is: \n1 1 2 ";

	std::vector < long > arr;
	arr.resize(2);
	arr[0] = 1;
	arr[1] = 2;
	long sum = 0;
	int i = 2;

	do
	{
		arr.push_back(arr[i - 1] + arr[i - 2]);
		if (arr[i] == arr[i - 1] + arr[i - 2]) {
			sum += arr[i]; 
			std::cout << arr[i] << ' ';
		}
		++i;
	} while (arr[i-1] < 4000000);

	std::cout << sum << std::endl;

	std::cin >> i;

	return 0;
}