// exercise_02_22	170117
/*
 * Псевдокод:
 * ПОКА (Счетчик <= 10)
 *		Введите Число
 *		ЕСЛИ (Число == 1)
 *			Большое_1 = Большое_2 = Число
 *		ЕСЛИ (Число > Большого_1)
 *			Большое_2 = Большое_1
 *			Большое_1 = Число
 *		ИНАЧЕ ЕСЛИ (Число > Большое_2)
 *			Большое_2 = Число
 *		++Счетчик	
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
	vector<int> v(10); // массив для хранения 10 чисел
	//cout << v[0] << endl;
	while (counter < 10) // счетчик ввода 10 чисел
	{
		cout << "Enter the number(" << counter + 1 << "): "; // введите число
		cin >> number;
		for (int i = counter; i >= 0; i--) // проверка массива на наличие введнного числа
		{
			if(v[i] == number) // если введенное число уже было...
			{
				cout << "This number already!" << endl;
				break; // то прерывание
			}
			if(i == 0) // если проверели все и дошли до нулевого элемента
			{
				v[counter] = number; // записываем число в массив
				if (counter == 0) veryLargest = largest = number; // первое число равно нашим переменным
				if (veryLargest < number) // если текущее число больше нашего самого большого
				{
					largest = veryLargest; // присваиваем числу поменьше значение большого
					veryLargest = number; // большому числу присваиваем значение текущего
				}
				else if (largest < number) // сравнение числа поменьше с текущим числом
				{
					largest = number;
				}
				++counter; // счетчик
			}
		}
		
	}
	cout << "The so largest number is: " << veryLargest << endl;
	cout << "The largest number is: " << largest << endl << endl;

	return 0;
}