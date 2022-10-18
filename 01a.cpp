#include <iostream>

using namespace std;

int main()
{
	int input;
	cout << "Enter a number" << endl;
	cin >> input;

	for (int i = input; i >= 0; i--)
	{
		cout << i << " ";
	}
	
	cout << endl;
	system("pause");


}

//time complexibility is O(n);