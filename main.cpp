#include "Product.h"
#include "Income.h"
#include "Expenses.h"
#include "function.h"
#include <iostream>
#include <windows.h>

using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int item;
	Product objectPr; // Создаем объект класса Product
	Income objectIn; // Создаем объект класса Income
	Expenses objectEx; // Создаем объект класса Expenses
	int productAmount = 0; // Начальное количество товаров 
	int incomeAmount = 0; // Начальный доход
	int expensesAmount = 0;	// Начальный расход
	objectIn.addStructIncome(incomeAmount);

	do { // Цикл меню программы
		menu(); // Вызов функции, отвечающей выводу основного меню программы
		cin >> item;
		system("cls"); // Очистка экрана

		switch (item)
		{
		case  1: // Добавление товара
		{
			objectPr.addStruct(productAmount); // Вызов метода объекта класса Product
			objectPr.addProduct(productAmount);
			productAmount++;
			break;
		}
		case  2: // Ввод расходов
			objectEx.addStructExpences(expensesAmount);  //Вызов метода объекта класса Expenses
			objectEx.addExpenses(expensesAmount);
			expensesAmount++;
			break;
		case  3: // Ввод доходов
			objectPr.copyProd(productAmount);
			objectIn.addIncome(objectPr, productAmount); //Вызов метода объекта класса Income
			objectPr.recopyProd(productAmount);
			break;
		case  4: // Вывод закупок
			objectEx.addStructExpences(expensesAmount);
			objectPr.copyProd(productAmount);
			objectEx.purchase(objectPr, productAmount, expensesAmount);
			objectPr.recopyProd(productAmount);
			expensesAmount++;
			break;
		case  5: // Редактирование/просмотр товаров
		{
			int action;
			punkt5(); // Вызов функции, отвечающей за вывод меню действия с товарами
			cin >> action;
			system("cls");
			switch (action)
			{
			case 1:	// Вывод списка товаров
			{
				if (productAmount != 0) {
					objectPr.showProd(productAmount);
				}
				else {
					cout << "Нет товаров" << endl;
				}
				break;
			}
			case 2:	// Редактирование товаров
			{
				objectPr.editProd(productAmount);
				break;
			}
			case 0:	// Выход в основное меню
			{
				break;
			}
			system("pause");
			default: // Если неверный case
				cout << "Такой операции не существует" << endl;
				break;
			}
		}
		break;
		case  6: // Вывод расходов
			objectIn.showIncome();
			cout << endl;
			break;
		case  7: // Вывод доходов
			objectEx.showExpences(expensesAmount);
			break;
		case  8: // Вывод годового отчета
			objectEx.dataReport(expensesAmount);
			objectIn.totalIncomeSum();
			objectPr.leftoversSum(productAmount);
			objectEx.annualReport();
			break;
		case  0: // Выход из программы
			return 0;
			break;

		default: // Если неверный case
			cout << "Такой операции не существует" << endl;
			break;
		}
		system("pause");
		system("cls");
	} while (item != 0); // Условие выхода из цикла

	return 0;
}
