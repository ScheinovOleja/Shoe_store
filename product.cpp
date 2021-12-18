#include "Product.h"
#include <iostream>
#include "Struct.h"
using namespace std;

float leftovers; // переменная остатки

Product::Product() // конструктор
{
	ourProduct = 0;
	prodId = 0;
}

Product::~Product() // деструктор
{
	delete[] ourProduct;
}

void Product::leftoversSum(int amount) // Сумма остатков товара
{
	leftovers = 0;
	for (int i = 0; i < amount; i++)
	{
		leftovers = leftovers + (ourProduct[i].count * ourProduct[i].price); // суммирование остатков всех товаров
	}
}


void Product::copyProd(int amount) // Копирование данных основного объекта структуры во временный
{
	ourProduct1 = new product1[amount];
	for (int i = 0; i < amount; i++)
	{
		ourProduct1[i].id = ourProduct[i].id;
		ourProduct1[i].name = ourProduct[i].name;
		ourProduct1[i].view = ourProduct[i].view;
		ourProduct1[i].count = ourProduct[i].count;
		ourProduct1[i].price = ourProduct[i].price;

	}
}

void Product::recopyProd(int amount) // Копируем измененные данные временного объекта структуры в основной объект структуры
{
	for (int i = 0; i < amount; i++)
	{
		ourProduct[i].id = ourProduct1[i].id;
		ourProduct[i].name = ourProduct1[i].name;
		ourProduct[i].view = ourProduct1[i].view;
		ourProduct[i].count = ourProduct1[i].count;
		ourProduct[i].price = ourProduct1[i].price;

	}
	delete[] ourProduct1;
}

void Product::addStructProd1(int amount) // Выделение памяти под временный объект структуры
{
	if (amount == 0)
	{
		ourProduct1 = new product1[amount + 1]; // выделение памяти для первой структуры
		ourProduct1[amount].id = 0;
	}
	else
	{
		product1* tempObjEx = new product1[amount + 1];
		for (int i = 0; i < amount; i++)
		{
			tempObjEx[i] = ourProduct1[i]; // копируем во временный объект
		}
		delete[] ourProduct1;

		ourProduct1 = tempObjEx;
		prodId++;
		ourProduct1[amount].id = prodId;

	}
}

void Product::addStruct(int amount) // Выделение памяти под основной объект структуры
{
	if (amount == 0)
	{
		ourProduct = new product1[amount + 1]; // выделение памяти для первой структуры
		ourProduct[amount].id = 0;
	}
	else
	{
		product1* tempObj = new product1[amount + 1];
		for (int i = 0; i < amount; i++)
		{
			tempObj[i] = ourProduct[i]; // копируем во временный объект
		}
		delete[] ourProduct;

		ourProduct = tempObj;
		prodId++;
		ourProduct[amount].id = prodId;
	}
}

void Product::addProduct(int amount) // Заполняем объект структуры
{
	cout << "Введите название товара: ";
	cin >> ourProduct[amount].name;
	cout << endl;
	cout << "Введите вид товара: ";
	cin >> ourProduct[amount].view;
	cout << endl;
	cout << "Введите количество товарв: ";
	cin >> ourProduct[amount].count;
	cout << endl;
	cout << "Введите цену товара: ";
	cin >> ourProduct[amount].price;

}


void Product::showProd(int amount) // Вывод объектов структуры
{
	for (int i = 0; i < amount; i++)
	{
		cout
			<< "id " << ourProduct[i].id << '\n'
			<< "Наименование товара: " << ourProduct[i].name << '\n'
			<< "Вид товара: " << ourProduct[i].view << '\n'
			<< "Количество товара: " << ourProduct[i].count << '\n'
			<< "Цена товара: " << ourProduct[i].price << '\n'
			<< "=================================\n";
	}
}

void Product::editProd(int amount) // Редактирование объета структуры
{
	int id_editable, item;

	cout << "|---------------------------|" << endl;
	cout << "|Пункты редактирования:     |" << endl;
	cout << "|---------------------------|" << endl;
	cout << "|1. Наименование            |" << endl;
	cout << "|---------------------------|" << endl;
	cout << "|2. Вид                     |" << endl;
	cout << "|---------------------------|" << endl;
	cout << "|3. Количество              |" << endl;
	cout << "|---------------------------|" << endl;
	cout << "|4. Цена                    |" << endl;
	cout << "|---------------------------|" << endl;
	cout << "|0. Вернуться в меню        |" << endl;
	cout << "|---------------------------|" << endl;
	cout << "Введите пункт, который хотите отредактировать у товара: ";
	cin >> item;

	system("cls");

	switch (item)
	{
	case 1:
	{
		string rename;
		bool check = true;
		showProd(amount);
		cout << "Введите id товара: ";
		cin >> id_editable;
		cout << endl;
		for (int i = 0; i < amount; i++)
		{
			if (id_editable == ourProduct[i].id) // Существует ли товар
			{
				cout << "Введите новое наименование товара: ";
				cin >> rename;
				ourProduct[i].name = rename;
				cout << "Наименование изменено" << endl;
				check = false;
			}
		}
		if (check == true)
		{
			cout << "id не найден" << endl;
		}
		break;
	}
	case 2:
	{
		string review;
		bool check = true;
		showProd(amount);
		cout << "Введите id товара: ";
		cin >> id_editable;
		cout << endl;
		for (int i = 0; i < amount; i++)
		{
			if (id_editable == ourProduct[i].id)
			{
				cout << "Введите новый вид товара: ";
				cin >> review;
				ourProduct[i].view = review;
				cout << "Вид товара изменен" << endl;
				check = false;
			}
		}
		if (check == true)
		{
			cout << "id не найден" << endl;
		}
		break;
	}
	case 3:
	{
		float recount;
		bool check = true;
		showProd(amount);
		cout << "Введите id товара: ";
		cin >> id_editable;
		cout << endl;
		for (int i = 0; i < amount; i++)
		{
			if (id_editable == ourProduct[i].id)
			{
				cout << "Введите новое количество товара: ";
				cin >> recount;
				ourProduct[i].count = recount;
				cout << "Количество товара изменено" << endl;
				check = false;
			}
		}
		if (check == true)
		{
			cout << "id не найден" << endl;
		}
		break;
	}
	case 4:
	{
		float reprice;
		bool check = true;
		showProd(amount);
		cout << "Введите id товара: ";
		cin >> id_editable;
		cout << endl;
		for (int i = 0; i < amount; i++)
		{
			if (id_editable == ourProduct[i].id)
			{
				cout << "Введите новую цену товара: ";
				cin >> reprice;
				ourProduct[i].price = reprice;
				cout << "Цена товара изменена" << endl;
				check = false;
			}
		}
		if (check == true)
		{
			cout << "id не найден" << endl;
		}
		break;
	}

	system("pause");
	default:
		cout << "Такого действия не существует" << endl;
		break;
	}

}
