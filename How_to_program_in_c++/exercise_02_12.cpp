#include <iostream>
#include <iomanip>

using namespace std;

// exercise 02.12 'a'
int main(int argc, char* argv[])
{
	int sum = 0,
		count = 1;
	for ( ; count <= 99; count++)
	{
		sum += count;
	}

	cout << "sum equal: " << sum << endl;
	return 0;
}

// exercise 02.12 'b'
