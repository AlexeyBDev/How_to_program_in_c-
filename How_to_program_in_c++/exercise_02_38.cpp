// exercise_02_35	310117

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

unsigned long long factorial(unsigned long long f);

int main()
{
	/*int r = 0;*/
	/*while (true)
	{
		cout << "Enter the number: ";
		cin >> r;
		if (r == 0) break;
		cout << "Factorial " << r << " = " << factorial(r) << endl;
	}*/

	double e = 1;
	for (int i = 1; i < 50; i++)
	{
		e += (1.0 / long double(factorial(i)));
	}
	cout << setprecision(18) << "e = " << e << endl;


	return 0;
}

unsigned long long factorial(unsigned long long f)
{
	unsigned long long k = 1;
	while (f != 0)
	{
		k *= f;
		--f;
	}
	return k;
}