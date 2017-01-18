// exercise_02_22	170117
/*
 * ���������:
 * ���� (������� <= 10)
 *		������� �����
 *		���� (����� == 1)
 *			�������_1 = �������_2 = �����
 *		���� (����� > ��������_1)
 *			�������_2 = �������_1
 *			�������_1 = �����
 *		����� ���� (����� > �������_2)
 *			�������_2 = �����
 *		++�������	
 */

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char* argv[])
{
	int counter = 0,
		number = 0,
		largest = 0,
		veryLargest = 0;
	vector<int> v(10); // ������ ��� �������� 10 �����
	//cout << v[0] << endl;
	while (counter < 10) // ������� ����� 10 �����
	{
		cout << "Enter the number(" << counter + 1 << "): "; // ������� �����
		cin >> number;
		for (int i = counter; i >= 0; i--) // �������� ������� �� ������� ��������� �����
		{
			if(v[i] == number) // ���� ��������� ����� ��� ����...
			{
				cout << "This number already!" << endl;
				break; // �� ����������
			}
			if(i == 0) // ���� ��������� ��� � ����� �� �������� ��������
			{
				v[counter] = number; // ���������� ����� � ������
				if (counter == 0) veryLargest = largest = number; // ������ ����� ����� ����� ����������
				if (veryLargest < number) // ���� ������� ����� ������ ������ ������ ��������
				{
					largest = veryLargest; // ����������� ����� �������� �������� ��������
					veryLargest = number; // �������� ����� ����������� �������� ��������
				}
				else if (largest < number) // ��������� ����� �������� � ������� ������
				{
					largest = number;
				}
				++counter; // �������
			}
		}
		
	}
	cout << "The so largest number is: " << veryLargest << endl;
	cout << "The largest number is: " << largest << endl << endl;

	return 0;
}