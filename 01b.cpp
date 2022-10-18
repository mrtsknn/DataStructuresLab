#include <iostream>

using namespace std;

int main()
{
	int input;
	int i=0;
	int sum = 0;
	cout << "Enter a number of consecutive positive integers" << endl;
	cin >> input;

	while (i <= input)
	{
		sum += i;
		i++;
	}

	cout <<sum<< endl;
	system("pause");


}

//time complexibility is O(n);