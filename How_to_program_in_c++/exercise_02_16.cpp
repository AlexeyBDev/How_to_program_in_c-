// exercise_02_16	070117
/*Постановка задачи:
 * Из-за высокой цены бензина водители озабочены затратами топлива своих автомобилей. Один водитель взял 
 * в рейс несколько емкостей бензина, записывая пройденные мили и бензин, записывая пройденные мили и бензин, 
 * использованный из каждой емкости. Разработайте программу на C++, которая вводила бы пробег в милях и бензин,
 * использованный из каждой емкости. Программа должна рассчитывать и выводить на экран число миль на галлон для 
 * каждой емкости. После ввода исходных данных программа должна рассчитать и напечатать значение среднего числа 
 * миль на галлон, полученное для всех емкостей. 
 * 
 * Задача:
 * 1. Прочтите постановку задачи.
 * 2. Сформулируйте алгоритм, используя псевдокод и нисходящую пошаговую детализацию.
 * 3. Напишите программу на C++.
 * 4. Проверьте, отладьте и выполните программу на C++.
 * 
 * Пошаговая детализация:
 * Шаг 1:
 * 1.1 Расчитать средний расход бензина накаждую емкость исходя из пройденного пути и объема емкости. Подсчитать
 * средний расход исходя из пройденного пути и затраченного топлива.
 * Шаг 2:
 * 2.1 Инициализация переменных.
 * 2.2 Ввести данные по расходу бензина (в литрах) и пройденному пути (в километрах), расчитать средний расход
 * по каждой емкости.
 * 2.3 Подсчитать средний расход для всех емкостей.
 * Шаг 3:
 * 3.1 Переменные:
 *		fuelConsumption = 0; / расход бензина
 *		passedWay = 0; / пройденные путь
 *		averageConsumption; / средний расход
 *		
 *		totalАuelConsumption = 0; / суммарный расход бензина
 *		totalPassedWay = 0; / суммарный пройденный путь
 *		totalAverageConsumption; / суммарный средний расход
 *		
 *	3.2 while()
 *			ввести расход бензина
 *			if(fuelConsumption не равна -1) break;
 *			ввести пройденный путь
 *			вывести средний расход
 *			добавить текущий расход бензина к суммарному расходу
 *			добавить текущий пройденный путь к суммарному пройденному пути
 *	3.3 После выхода из цикла подсчитать и вывести средний расход по всем емкостям.
 *	
 *	Запросы в программе и их перевод на английский
 *	- Введите расход бензина (-1, если ввод закончен): - Enter the consumption of gasoline (-1 if the input is finished):
 *	- Введите пройденный путь: - Enter the path:
 *	- Для этой емкости получено (километров / литр): - For this capacity received (kilometers / liter):
 *	- средний расход бензина: - Average fuel consumption:
 */

#include <iostream>
#include <iomanip>

using std::cout;
using std::cin;
using std::endl;
using std::setiosflags;

int main(int argc, char* argv[])
{
	double fuelConsumption = 0, // расход бензина
		passedWay = 0, // пройденные путь
		averageConsumption; // средний расход

	double totalFuelConsumption = 0, // суммарный расход бензина
		totalPassedWay = 0, // суммарный пройденный путь
		totalAverageConsumption; // суммарный средний расход

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
