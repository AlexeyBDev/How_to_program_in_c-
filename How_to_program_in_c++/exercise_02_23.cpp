// exercise_02_23	180117

//#include <iostream>
//
//using namespace std;
//
//int main(int argc, char* argv[])
//{
//	int passes = 0,
//		failures = 0,
//		studentCounter = 1,
//		result;
//
//	while (studentCounter <= 10)
//	{
//		cout << "Enter result (1 - passed, 2 - not passed) - " << studentCounter <<  ": ";
//		cin >> result;
//		if (result != 1 && result != 2)
//		{
//			cout << "Error, wrong data!" << endl;
//			continue;
//		}
//
//		if (result == 1) ++passes;
//		else ++failures;
//		++studentCounter;
//	}
//
//	cout << "Passed: " << passes << endl;
//	cout << "Not passed: " << failures << endl;
//
//	if (passes > 8)	cout << "To raise tuition fees!" << endl;
//
//	return 0;
//}
