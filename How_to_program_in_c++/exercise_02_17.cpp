// exercise_02_17	070117
/*���������� ������:
* ������������ ��������� �� C++, ������� ����� ����������, �� ��������� �� ������� �������, �������� ���������� 
* ����, ������� �������. ��� ������� ������� �������� ��������� ������:
* 1. ����� ����� (�����).
* 2. ������ � ������ ������.
* 3. ����� ���� �������� ������� ������� � ������� ������.
* 4. ����� ���� �������� �� ���� ������� ������� � ������� ������.
* 5. ���������� ������ �������.
* ��������� ������ ������ ��� ��� ������, ���������� ����� ������ (������ ���������� ������� + ������ - ������) � 
* ����������, �� �������� �� ����� ������ ������� ������� �������. ���  ���� �������, ��� ������ ��������, ��������� 
* ������ ������� �� ����� ����� ����� �������, ������ �������, ����� ������ � ��������� "������ ������� ��������"
* 
* ��������� �����������:
 * ��� 1:
 * 1.1 ��������������� ������ � ����� ������� (������, ������, ������), ��������� ������� ������ ����� ������� �
 * �� ��������� ���������� � ������� ������� ������� ������� ������ � ��� �������� �� ��� ������.
 * ��� 2:
 * 2.1 ������������� ����������.
 * 2.2 ���� ������ � ������ ������� �������.
 * 2.3 ������ ������ � ����� � �������� ������� � ���������� ������� ����� �������.
 * ��� 3:
 * 3.1
 *		accountNumber; // ����� �����
 *		
 *		balanceBeginningOfTheMonth = 0, // ������ � ������ ������
 *		costs = 0, // �������
 *		incoming = 0, // �����������
 *		permissibleAmountOfLoan = 0; // ���������� ������ �������
 *		balance = 0; // ������� ������
 * 3.2
 * while(true)
 *		������ ����� �����
 *		if(����� ����� == -1) brake;
 *		������� ��������� ������
 *		������� ����� ��������
 *		������� ����� ��������
 *		������� ������ �������
 *		������ ������� �������
 * 3.3
 * if(������ > ������� �������)
 *		������� ����� �����
 *		������� ������ �������
 *		������� ������
 *		������� ��������� "������ ������� ��������"
 *		
 * ������� � ��������� � �� ������� �� ����������
 * - ������� ����� ����� (-1, ���� ���� ��������): - Enter account number (-1 if the input is finished)
 * - ������� ��������� ������ - Enter the opening balance
 * - ������� ����� �������� - Enter the amount of expenses
 * - ������� ����� ������� - Enter the amount of the receipts
 * - ������� ������ ������� - Enter the credit limit
 * - ���� - Account
 * - ������ ������� - Credit limit
 * - ������ - Balance
 * - ������ ������� �������� - The credit limit is exceeded
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char* argv[])
{
	int accountNumber; // ����� �����
	
	double balanceBeginningOfTheMonth = 0, // ������ � ������ ������
	costs = 0, // �������
	incoming = 0, // �����������
	permissibleAmountOfLoan = 0, // ���������� ������ �������
	balance = 0; // ������� ������

	while (true)
	{
		cout << "Enter account number (-1 if the input is finished): ";
		cin >> accountNumber;
		if (accountNumber <= -1) break;
		cout << "Enter the opening balance: ";
		cin >> balanceBeginningOfTheMonth;
		cout << "Enter the amount of expenses: ";
		cin >> costs;
		cout << "Enter the amount of the receipts: ";
		cin >> incoming;
		cout << "Enter the credit limit: ";
		cin >> permissibleAmountOfLoan;
		balance = balanceBeginningOfTheMonth + costs - incoming;
		if (balance > permissibleAmountOfLoan)
		{
			cout << "Account: " << accountNumber << endl;
			cout << "Credit limit: " << setiosflags(ios::fixed | ios::showpoint) << setprecision(2)
				<< permissibleAmountOfLoan << endl;
			cout << "Balance: " << balance << endl;
			cout << "The credit limit is exceeded" << endl << endl;
		}
	}
	return 0;
}
