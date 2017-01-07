// exercise_02_17	070117
/*Постановка задачи:
* Разработайте программу на C++, которая будет определять, не превысили ли расходы клиента, имеющего депозитный 
* счет, предела кредита. Для каждого клиента известны следующие данные:
* 1. Номер счета (целое).
* 2. баланс с начала месяца.
* 3. Сумма всех расходов данного клиента в течение месяца.
* 4. Сумма всех приходов на счет данного клиента в течение месяца.
* 5. Допустимый размер кредита.
* Программа должна ввести все эти данные, рассчитать новый баланс (равный начальному балансу + расход - приход) и 
* определить, не превысли ли новый баланс предела кредита клиента. Для  того клиента, чей кредит превышен, программа 
* должна вывести на экран номер счета клиента, предел кредита, новый баланс и сообщение "Предел кредита превышен"
* 
* Пошаговая детализация:
 * Шаг 1:
 * 1.1 Проанализировав данные о счете клиента (баланс, расход, приход), вычислить текущий баланс счета клиента и
 * на основании информации о пределе кредита клиента вывести данные о том превышен ли его предел.
 * Шаг 2:
 * 2.1 Инициализация переменных.
 * 2.2 Ввод данных и расчет баланса клиента.
 * 2.3 Анализ данные о счете и принятие решения о превышении предела счета клиента.
 * Шаг 3:
 * 3.1
 *		accountNumber; // номер счета
 *		
 *		balanceBeginningOfTheMonth = 0, // баланс с начала месяца
 *		costs = 0, // расходы
 *		incoming = 0, // поступления
 *		permissibleAmountOfLoan = 0; // допустимый размер кредита
 *		balance = 0; // текущий баланс
 * 3.2
 * while(true)
 *		ввести номер счета
 *		if(номер счета == -1) brake;
 *		введите начальный баланс
 *		введите сумму расходов
 *		введите сумму приходов
 *		введите предел кредита
 *		расчет баланса клиента
 * 3.3
 * if(баланс > предела кредита)
 *		вывести номер счета
 *		вывести предел кредита
 *		вывести баланс
 *		вывести сообщение "Предел кредита превышен"
 *		
 * Запросы в программе и их перевод на английский
 * - Введите номер счета (-1, если ввод закончен): - Enter account number (-1 if the input is finished)
 * - Введите начальный баланс - Enter the opening balance
 * - Введите сумму расходов - Enter the amount of expenses
 * - Введите сумму прихода - Enter the amount of the receipts
 * - Введите предел кредита - Enter the credit limit
 * - Счет - Account
 * - Предел кредита - Credit limit
 * - Баланс - Balance
 * - Предел кредита превышен - The credit limit is exceeded
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char* argv[])
{
	int accountNumber; // номер счета
	
	double balanceBeginningOfTheMonth = 0, // баланс с начала месяца
	costs = 0, // расходы
	incoming = 0, // поступления
	permissibleAmountOfLoan = 0, // допустимый размер кредита
	balance = 0; // текущий баланс

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
