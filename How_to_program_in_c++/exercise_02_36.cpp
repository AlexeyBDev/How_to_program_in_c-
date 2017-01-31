// exercise_02_36	310117

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
//	double hipotinuza = 0;
//	if (a == max) hipotinuza = sqrt(b * b + c * c);
//	if (b == max) hipotinuza = sqrt(a * a + c * c);
//	if (c == max) hipotinuza = sqrt(b * b + a * a);
//
//	if (hipotinuza == max) {
//		cout << "This is triangle!" << endl;
//	}
//	else {
//		cout << "This is don't triangle!" << endl;
//	}
//
//	return 0;
//}