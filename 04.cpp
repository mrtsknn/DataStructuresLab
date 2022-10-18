#include<iostream>
using namespace std;
int Fibonacci(int number)
{
	if (number == 0)
		return 0;
	else if (number == 1)
		return 1;
	else
		return (Fibonacci(number - 1) + Fibonacci(number - 2));
}

int main()
{
	int i = 0;
	int input;
	cout << "Enter a number" << endl;
	cin >> input;

	for (int j = 1; j <= input; j++)
	{
		cout << Fibonacci(i)<<" ";
		i++;
	}

	system("pause");
}
//time complexibility is O(n);

