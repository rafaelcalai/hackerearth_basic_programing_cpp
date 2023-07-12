#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int num;
	cin >> num;

	int input_data[num];
	long long int final_sum = 0;
	for (int i = num; i > 0; i--)
	{
		cin >> input_data[num-i];
		input_data[num-i] %= 10;
	}

	if (input_data[num-1])
	{
	 	std::cout << "No" << std::endl;
	}
	else
	{
		std::cout << "Yes" << std::endl;
	}
	return 0;
}