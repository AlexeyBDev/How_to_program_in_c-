// exercise_02_22	170117

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[])
{
	int counter = 1,
		number = 0,
		largest = 0,
		soLargest = 0;
	vector<int> v(10); // массив для хранения 10 чисел
	//cout << v[0] << endl;
	while (counter <= 10)
	{
		cout << "Enter the number(" << counter << "): ";
		cin >> number;
		if (counter == 1) soLargest = largest = number;
		if (soLargest < number)
		{
			largest = soLargest;
			soLargest = number;
		}
		++counter;
	}
	cout << "The so largest number is: " << soLargest << endl;
	cout << "The largest number is: " << largest << endl << endl;

	return 0;
}