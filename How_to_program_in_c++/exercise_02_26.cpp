// exercise_02_26	190117

#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int x = 9, y = 11;

	if (x < 10)
		if (y > 10)
			cout << "*****" << endl;
		else
			cout << "#####" << endl;
	cout << "$$$$$" << endl;

	cout << endl;
	x = 11;
	y = 9;

	if (x < 10)
		if (y > 10)
			cout << "*****" << endl;
		else
			cout << "#####" << endl;
	cout << "$$$$$" << endl;

	cout << endl;
	x = 9;
	y = 11;

	if (x < 10)
	{
		if (y > 10)
			cout << "*****" << endl;
	}
	else
	{
		cout << "#####" << endl;
		cout << "$$$$$" << endl;
	}

	cout << endl;
	x = 11;
	y = 9;

	if (x < 10)
	{
		if (y > 10)
			cout << "*****" << endl;
	}
	else
	{
		cout << "#####" << endl;
		cout << "$$$$$" << endl;
	}
	return 0;
}