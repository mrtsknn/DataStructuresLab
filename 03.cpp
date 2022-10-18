#include <iostream>

using namespace std;

int factorial(int number)
{
	if (number == 0 || number== 1)
		return 1;
	return number * factorial(number - 1);
}

int main()
{
	int input;
	cout << "Enter a number" << endl;
	cin >> input;

	cout << "Factorial is " << input << ":  "<< factorial(input) << endl;

	system("pause");
}

//Time complexibility is O(n);