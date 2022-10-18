#include <iostream>

using namespace std;

int main()
{
	int input;
	int i=0;
	int sum=0;
	cout << "Enter a number" << endl;
	cin >> input;
	do
	{
		sum += i;
		i++;
	} while (i <=input);
	cout << sum;
	cout << endl;
	system("pause");


}
//Time complexibility is O(n);