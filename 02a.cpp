#include <iostream>

using namespace std;

void printrepeatly(int number)
{
	if (number)
		printrepeatly(number - 1);
	else
		return;

	cout << " " << number << " ";
}

int main()
{
	int input;
	cout << "Enter a number" << endl;
	cin >> input;

	printrepeatly(input);
	system("pause");
}

//Time complexibility is O(n);