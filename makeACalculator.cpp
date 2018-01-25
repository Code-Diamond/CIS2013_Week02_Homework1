#include <iostream>
using namespace std;

int main()
{
	int x;
	int y;
	char operation;
	//constexpr commands[] = {'+', '-', '/', '*'};

	cin >> x;
	cin >> y;

	cout << "Do you want to do addition subtraction or multiplication?";
	cin >> operation;

	switch (operation)
	{
		case '+':
			cout << x+y;
			break;
		case '-':
			cout << x-y;
			break;
		case '/':
			cout << x/y;
			break;
		case '*':
			cout << x*y;
			break;
	}

	//cout << commands[0];

	return 0;
}