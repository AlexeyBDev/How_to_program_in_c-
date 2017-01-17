// exercise_02_21	170117

/* ���������� ������: ������������ ��������� �� C++, ������� ������ ���������� ���������� ����� ��� �������
 * �� ���������� ��������. �������� ����������� ������� ��������� ����������� �������� �� ������ 40 �����
 * ������ � ����������� � ���������� ������� �� ��� ������� ���� ����� 40. ��� ��� ������ ����������� ��������, 
 * ����� �����, ������������ ������ �� ��������� ������, � ��������� ������ ������� ����������. �������� ������
 * ������ ��� ������ ��� ������� ����������, ��������� � ������� �� ����� ��� ��������� ��������. 
 * 
 * ��������� �����������:
 *  ��� 1:
 *  1.1 ��� ������� ���������� �������� ��������� ���������� ����� � ������������ � ��������:
 *		- ������ �� 40 �����;
 *		- 1.5 * ������ �� ��� ��� ����� 40;
 *	��� 2:
 *	2.1 ������������� ����������;
 *	2.2 ���������� ���������� ����� � ����� �� �� �����;
 *	��� 3:
 *	3.1 ����� ������������ ����� = 0;
 *		������ ���������� ����� = 0;
 *		�������� = 0;
 *	3.2 ���� (������������_���� != -1)
 *			������� ����� ����� ������������ �����������:
 *			���� (����� ������������ ����� == -1) �����;
 *			������� ������ ���������� ����� ����������:
 *			���� (����� ������������ ����� <= 40)
 *				�������� = ����� ������������ ����� * ������
 *			�����
 *				�������� = ����� ������������ ����� * ������ + (����� ������������ ����� - 40) * ������ * 1.5
 *				
 *	������ ����������:
 *  - earnings - ���������;
 *  - hoursWorked - ������������ ����;
 *  - rate - ������;
 *  
 * ������� � ��������� � �� ������� �� ����������
 *  - ������� ����� ������� ����� (-1, ���� ���� ��������): - Enter the number of hours worked 
 *  (-1, if the entry is completed):
 *  - ������� ��������� ������ ���������: - Enter hourly rate of worker:
 *  - ���������: - Earnings:		
 */
//
//#include <iostream>
//#include <iomanip>
//
//using namespace std;
//
//int main(int argc, char* argv[])
//{
//	double earnings = 0.0,			// ���������;
//		hoursWorked = 0.0,		// ������������ ����;
//		rate = 0.0;				// ������;
//
//	while(hoursWorked != -1)
//	{
//		cout << "Enter the number of hours worked (-1, if the entry is completed):    ";
//		cin >> hoursWorked;
//		if (hoursWorked == -1) break;
//
//		cout << "Enter hourly rate of worker ($00.00):    ";
//		cin >> rate;
//
//		if (hoursWorked <= 40.0)
//		{
//			earnings = hoursWorked * rate;
//		}
//		else
//		{
//			earnings = 40.0 * rate + (hoursWorked - 40.0) * rate * 1.5;
//		}
//
//		cout << "Earnings:   " << setprecision(2) << setiosflags(ios::fixed | ios::showpoint)
//			<< earnings << endl;
//	}
//	cout << endl;
//
//	return 0;
//}
