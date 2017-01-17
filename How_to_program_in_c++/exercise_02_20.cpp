// exercise_02_20	170117

/* Псевдокод:
 * 1. Счетчик в значение = 0;
 * 2. Текущее значение = 0;
 * 3. ПОКА (счетчик меньше 10)
 *		ввести текущее значение
 *		ЕСЛИ (счетчик равен 0)
 *			максимальное значение = текущему значение
 *		ЕСЛИ (максимальное значение < текущего значения)
 *			максимальное значение = текущему значению
 *		увеличить счетчик на 1
 * 4. Вывести максимальное значение
 * 
 *  Переменные:
 *  - counter - счетчик;
 *  - number - текущее число;
 *  - largest - максимальное число;
 */

//#include <iostream>
//
//using namespace std;
//
//int main(int argc, char* argv[])
//{
//	int counter = 1,
//		number = 0,
//		largest = 0;
//	while (counter <= 10)
//	{
//		cout << "Enter the number(" << counter << "): ";
//		cin >> number;
//		if (counter == 1) largest = number;
//		if (largest < number) largest = number;
//		++counter;
//	}
//	cout << "The largest number is: " << largest << endl << endl;
//
//	return 0;
//}
