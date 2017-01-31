//// exercise_02_35	310117
//
//#include <iostream>
//#include <iomanip>
//#include <cmath>
//
//using namespace std;
//
//int main()
//{
//	double a, b, c;
//	a = b = c = 0;
//	double max = 0;
//
//	cin >> a >> b >> c;
//
//	max = a;
//	if (b > max) max = b;
//	if (c > max) max = c;
//
//	double summOfSides = 0;
//	if (a == max) summOfSides = b + c;
//	if (b == max) summOfSides = a + c;
//	if (c == max) summOfSides = b + a;
//
//	if (summOfSides > max) {
//		cout << "It can be a triangle!" << endl;
//	}
//	else {
//		cout << "It can't be a triangle!" << endl;
//	}
//
//	return 0;
//}