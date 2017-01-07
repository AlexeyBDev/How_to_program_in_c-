// exercise_02_12	060117
#include <iostream>
#include <iomanip>

using namespace std;

// exercise 02.12 'a'

//int main(int argc, char* argv[])
//{
//	int sum = 0,
//		count = 1;
//	for ( ; count <= 99; count++)
//	{
//		sum += count;
//	}
//
//	cout << "sum equal: " << sum << endl;
//	return 0;
//}

// exercise 02.12 'b'

//int main(int argc, char* argv[])
//{
//	double d = 333.546372;
//
//	cout << setiosflags(ios::showpoint | ios::fixed | ios::left)
//		<< setw(15) << setprecision(1) << d 
//		<< setw(15) << setprecision(2) << d 
//		<< setw(15) << setprecision(3) << d << endl << endl;
//
//	return 0;
//}

// exercise 02.12 'c'

//int main()
//{
//	double d;
//
//	d = pow(2.5, 3.0);
//	cout << setiosflags(ios::left) << setprecision(2)
//		<< setw(10) << d << endl;
//
//	return 0;
//}

// exercise 02.12 'd'

//int main(int argc, char* argv[])
//{
//	int x = 1;
//	while (x <= 20)
//	{
//		cout << x << '\t';
//		if (x % 5 == 0)
//		{
//			cout << endl;
//		}
//		++x;
//	}
//	return 0;
//}

// exercise 02.12 'e'

int main(int argc, char* argv[])
{
	int x;
	for (x = 1; x <= 20; x++)
	{
		cout << x << '\t';
		if (x % 5 == 0)
		{
			cout << endl;
		}
	}
	return 0;
}


