//файл income.cpp

#include "Income.h"
#include <iostream>
#include <iomanip>
#include "Struct.h"

using namespace std;

float totalSum;  //переменная для итоговой суммы

Income::Income() //Конструктор
{
	ourIncome = 0; //присваиваем указателю на структуру нулевое значение
	prodId = 0; //ID продукта
}


Income::~Income() //Дестуктор
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
	float countProd; //количество товара
	float sum;
	bool check = true;
	objectPr.showProd(amount);//отображение списка товаров
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
				cout << "Недостаточно товара" << endl; //Если недостаточно выбранного товара
				return;
			}
			else {
				objectPr.ourProduct1[i].count = objectPr.ourProduct1[i].count - countProd; // Изменение количества товара
				sum = countProd * objectPr.ourProduct1[i].price; // Авторасчет суммы продаваемого товара
				cout << "Сумма дохода: " << sum << endl;
				check = false;

				cout << endl;
				cout << "1) Январь" << endl;
				cout << "2) Февраль" << endl;
				cout << "3) Март" << endl;
				cout << "4) Апрель" << endl;
				cout << "5) Май" << endl;
				cout << "6) Июнь" << endl;
				cout << "7) Июль" << endl;
				cout << "8) Август" << endl;
				cout << "9) Сентябрь" << endl;
				cout << "10) Октябрь" << endl;
				cout << "110 Ноябрь" << endl;
				cout << "12) Декабрь" << endl;
				cout << "Выберите месяц: ";

				cin >> month;
				switch (month)

				{
					{
				case 1:
				{
					ourIncome[prodId].Jan = sum + ourIncome[prodId].Jan;
					break;
				}
				case 2:
				{
					ourIncome[prodId].Feb = sum + ourIncome[prodId].Feb;
					break;
				}
				case 3:
				{
					ourIncome[prodId].Mar = sum + ourIncome[prodId].Mar;
					break;
				}
				case 4:
				{
					ourIncome[prodId].Apr = sum + ourIncome[prodId].Apr;
					break;
				}
				case 5:
				{
					ourIncome[prodId].May = sum + ourIncome[prodId].May;
					break;
				}
				case 6:
				{
					ourIncome[prodId].Jun = sum + ourIncome[prodId].Jun;
					break;
				}
				case 7:
				{
					ourIncome[prodId].Jul = sum + ourIncome[prodId].Jul;
					break;
				}
				case 8:
				{
					ourIncome[prodId].Aug = sum + ourIncome[prodId].Aug;
					break;
				}
				case 9:
				{
					ourIncome[prodId].Sep = sum + ourIncome[prodId].Sep;
					break;
				}
				case 10:
				{
					ourIncome[prodId].Oct = sum + ourIncome[prodId].Oct;
					break;
				}
				case 11:
				{
					ourIncome[prodId].Nov = sum + ourIncome[prodId].Nov;
					break;
				}
				case 12:
				{
					ourIncome[prodId].Dec = sum + ourIncome[prodId].Dec;
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
		cout << setw(10) << ourIncome[prodId].Jan << setw(10) << ourIncome[prodId].Feb << setw(10) << ourIncome[prodId].Mar << setw(10) << ourIncome[prodId].Apr << setw(10) << ourIncome[prodId].May << setw(10) << ourIncome[prodId].Jun << setw(10) << ourIncome[prodId].Jul << setw(10) << ourIncome[prodId].Aug << setw(10) << ourIncome[prodId].Sep << setw(10) << ourIncome[prodId].Oct << setw(10) << ourIncome[prodId].Nov << setw(10) << ourIncome[prodId].Dec << endl;
	}

	void Income::totalIncomeSum() // Общая сумма доходов
	{
		totalSum = 0;
		totalSum = ourIncome[prodId].Jan + ourIncome[prodId].Feb + ourIncome[prodId].Mar + ourIncome[prodId].Apr + ourIncome[prodId].May + ourIncome[prodId].Jun + ourIncome[prodId].Jul + ourIncome[prodId].Aug + ourIncome[prodId].Sep + ourIncome[prodId].Oct + ourIncome[prodId].Nov + ourIncome[prodId].Dec;
	}

