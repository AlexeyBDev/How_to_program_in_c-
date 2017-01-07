// exercise_02_16	070117
/*���������� ������:
 * ��-�� ������� ���� ������� �������� ��������� ��������� ������� ����� �����������. ���� �������� ���� 
 * � ���� ��������� �������� �������, ��������� ���������� ���� � ������, ��������� ���������� ���� � ������, 
 * �������������� �� ������ �������. ������������ ��������� �� C++, ������� ������� �� ������ � ����� � ������,
 * �������������� �� ������ �������. ��������� ������ ������������ � �������� �� ����� ����� ���� �� ������ ��� 
 * ������ �������. ����� ����� �������� ������ ��������� ������ ���������� � ���������� �������� �������� ����� 
 * ���� �� ������, ���������� ��� ���� ��������. 
 * 
 * ������:
 * 1. �������� ���������� ������.
 * 2. ������������� ��������, ��������� ��������� � ���������� ��������� �����������.
 * 3. �������� ��������� �� C++.
 * 4. ���������, �������� � ��������� ��������� �� C++.
 * 
 * ��������� �����������:
 * ��� 1:
 * 1.1 ��������� ������� ������ ������� �������� ������� ������ �� ����������� ���� � ������ �������. ����������
 * ������� ������ ������ �� ����������� ���� � ������������ �������.
 * ��� 2:
 * 2.1 ������������� ����������.
 * 2.2 ������ ������ �� ������� ������� (� ������) � ����������� ���� (� ����������), ��������� ������� ������
 * �� ������ �������.
 * 2.3 ���������� ������� ������ ��� ���� ��������.
 * ��� 3:
 * 3.1 ����������:
 *		fuelConsumption = 0; / ������ �������
 *		passedWay = 0; / ���������� ����
 *		averageConsumption; / ������� ������
 *		
 *		total�uelConsumption = 0; / ��������� ������ �������
 *		totalPassedWay = 0; / ��������� ���������� ����
 *		totalAverageConsumption; / ��������� ������� ������
 *		
 *	3.2 while()
 *			������ ������ �������
 *			if(fuelConsumption �� ����� -1) break;
 *			������ ���������� ����
 *			������� ������� ������
 *			�������� ������� ������ ������� � ���������� �������
 *			�������� ������� ���������� ���� � ���������� ����������� ����
 *	3.3 ����� ������ �� ����� ���������� � ������� ������� ������ �� ���� ��������.
 *	
 *	������� � ��������� � �� ������� �� ����������
 *	- ������� ������ ������� (-1, ���� ���� ��������): - Enter the consumption of gasoline (-1 if the input is finished):
 *	- ������� ���������� ����: - Enter the path:
 *	- ��� ���� ������� �������� (���������� / ����): - For this capacity received (kilometers / liter):
 *	- ������� ������ �������: - Average fuel consumption:
 */

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setiosflags;

int main(int argc, char* argv[])
{
	double fuelConsumption = 0, // ������ �������
		passedWay = 0, // ���������� ����
		averageConsumption; // ������� ������

	double totalFuelConsumption = 0, // ��������� ������ �������
		totalPassedWay = 0, // ��������� ���������� ����
		totalAverageConsumption; // ��������� ������� ������

	while (true)
	{
		cout << "Enter the consumption of gasoline (-1 if the input is finished): ";
		cin >> fuelConsumption;
		if(fuelConsumption == -1) break;
		cout << "Enter the path: ";
		cin >> passedWay;
		averageConsumption = passedWay / fuelConsumption;
		cout << "For this capacity received (kilometers / liter): "
			<< setiosflags(std::ios::showpoint | std::ios::fixed)
			<< std::setprecision(6) << averageConsumption << endl << endl;
		totalFuelConsumption += fuelConsumption;
		totalPassedWay += passedWay;
	}
	totalAverageConsumption = totalPassedWay / totalFuelConsumption;
	cout << "Average fuel consumption: " << setiosflags(std::ios::showpoint | std::ios::fixed)
		<< std::setprecision(6) << totalAverageConsumption << endl << endl;

	return 0;	
}
