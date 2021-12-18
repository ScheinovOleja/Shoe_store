//файл income.cpp

#include "Income.h"
#include <iostream>
#include <iomanip>
#include "Struct.h"

using namespace std;

float totalSum;  //переменная

Income::Income() //конструктор
{
	ourIncome = 0; //присваиваем указателю на структуру нулевое значение
	prodId = 0;
}


Income::~Income() //дестуктор
{
	delete[] ourIncome;
}

void Income::addStructIncome(int amount) //выделение памят под объект структуры
{
	ourIncome = new income1[amount + 1]; //выделение памяти для первой структуры
}

void Income::addIncome(Product& objectPr, int amount) // Заполнение объекта структуры
{

	int month, idProd;
	float countProd;
	float sum;
	bool check = true;
	objectPr.showP(amount);
	cout << "Введите id товара: ";
	cin >> idProd;
	cout << "Введите количество товара: ";
	cin >> countProd;
	for (int i = 0; i < amount; i++)
	{
		if (idProd == objectPr.ourProduct1[i].id) // Существует ли такой товар
		{
			if (countProd > objectPr.ourProduct1[i].count) // Хватает ли количества товаров
			{
				cout << "Недостаточно товара" << endl;
				return;
			}
			else {
				objectPr.ourProduct1[i].count = objectPr.ourProduct1[i].count - countProd; // Изменение количества товара
				sum = countProd * objectPr.ourProduct1[i].price; // Авторасчет суммы продаваемого товара
				cout << "Сумма дохода: " << sum << endl;
				check = false;

				cout << endl;
				cout << "1)Январь" << endl;
				cout << "2)Февраль" << endl;
				cout << "3)Март" << endl;
				cout << "4)Апрель" << endl;
				cout << "5)Май" << endl;
				cout << "6)Июнь" << endl;
				cout << "7)Июль" << endl;
				cout << "8)Август" << endl;
				cout << "9)Сентябрь" << endl;
				cout << "10)Октябрь" << endl;
				cout << "110Ноябрь" << endl;
				cout << "12)Декабрь" << endl;
				cout << "Выберите месяц: ";

				cin >> month;
				switch (month)

				{
					{
				case 1:
				{
					ourIncome[prIdI].Jan = sum + ourIncome[prIdI].Jan;
					break;
				}
				case 2:
				{
					ourIncome[prIdI].Feb = sum + ourIncome[prIdI].Feb;
					break;
				}
				case 3:
				{
					ourIncome[prIdI].Mar = sum + ourIncome[prIdI].Mar;
					break;
				}
				case 4:
				{
					ourIncome[prIdI].Apr = sum + ourIncome[prIdI].Apr;
					break;
				}
				case 5:
				{
					ourIncome[prIdI].May = sum + ourIncome[prIdI].May;
					break;
				}
				case 6:
				{
					ourIncome[prIdI].Jun = sum + ourIncome[prIdI].Jun;
					break;
				}
				case 7:
				{
					ourIncome[prIdI].Jul = sum + ourIncome[prIdI].Jul;
					break;
				}
				case 8:
				{
					ourIncome[prIdI].Aug = sum + ourIncome[prIdI].Aug;
					break;
				}
				case 9:
				{
					ourIncome[prIdI].Sep = sum + ourIncome[prIdI].Sep;
					break;
				}
				case 10:
				{
					ourIncome[prIdI].Oct = sum + ourIncome[prIdI].Oct;
					break;
				}
				case 11:
				{
					ourIncome[prIdI].Nov = sum + ourIncome[prIdI].Nov;
					break;
				}
				case 12:
				{
					ourIncome[prIdI].Dec = sum + ourIncome[prIdI].Dec;
					break;
				}
				system("pause");
				default:
					cout << "Месяц не найден" << endl;
					break;

					}
				}
			}
		}

		if (check == true)
		{
			cout << "id товара не найден" << endl;
		}
	}

	void Income::showIncome() // Вывод таблицы доходов
	{
		cout << setw(10) << "Jan" << setw(10) << "Feb" << setw(10) << "Mar" << setw(10) << "Apr" << setw(10) << "May" << setw(10) << "Jun" << setw(10) << "Jul" << setw(10) << "Aug" << setw(10) << "Sep" << setw(10) << "Oct" << setw(10) << "Nov" << setw(10) << "Dec" << endl;
		cout << endl;
		cout << endl;
		cout << setw(10) << ourIncome[prIdI].Jan << setw(10) << ourIncome[prIdI].Feb << setw(10) << ourIncome[prIdI].Mar << setw(10) << ourIncome[prIdI].Apr << setw(10) << ourIncome[prIdI].May << setw(10) << ourIncome[prIdI].Jun << setw(10) << ourIncome[prIdI].Jul << setw(10) << ourIncome[prIdI].Aug << setw(10) << ourIncome[prIdI].Sep << setw(10) << ourIncome[prIdI].Oct << setw(10) << ourIncome[prIdI].Nov << setw(10) << ourIncome[prIdI].Dec << endl;
	}

	void Income::totalIncomeSum() // Общая сумма доходов
	{
		totalSum = 0;
		totalSum = ourIncome[prIdI].Jan + ourIncome[prIdI].Feb + ourIncome[prIdI].Mar + ourIncome[prIdI].Apr + ourIncome[prIdI].May + ourIncome[prIdI].Jun + ourIncome[prIdI].Jul + ourIncome[prIdI].Aug + ourIncome[prIdI].Sep + ourIncome[prIdI].Oct + ourIncome[prIdI].Nov + ourIncome[prIdI].Dec;
	}

