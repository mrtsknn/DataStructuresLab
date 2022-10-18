#include <iostream>

using namespace std;

int Sum(int number)
{
	if (number < 1)
		return number;
	return number + Sum(number - 1);
}

int main()
{
	int input;
	cout << "Enter a number" << endl;
	cin >> input;
	
	cout << Sum(input) << endl;

	system("pause");
}

//Time complexibility is O(n);