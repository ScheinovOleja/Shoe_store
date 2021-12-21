#include "product.h"
#include <iostream>
#include "Struct.h"
using namespace std;

float leftovers; // ���������� �������

Product::Product() // �����������
{
	ourProduct = 0;
	prodId = 0;
}

Product::~Product() // ����������
{
	delete[] ourProduct;
}

void Product::leftoversSum(int amount) // ����� �������� ������
{
	leftovers = 0;
	for (int i = 0; i < amount; i++)
	{
		leftovers = leftovers + (ourProduct[i].count * ourProduct[i].price); // ������������ �������� ���� �������
	}
}


void Product::copyProd(int amount) // ����������� ������ ��������� ������� ��������� �� ���������
{
	ourProduct1 = new product1[amount];
	for (int i = 0; i < amount; i++)
	{
		ourProduct1[i].id = ourProduct[i].id;
		ourProduct1[i].name = ourProduct[i].name;
		ourProduct1[i].count = ourProduct[i].count;
		ourProduct1[i].price = ourProduct[i].price;

	}
}

void Product::recopyProd(int amount) // �������� ���������� ������ ���������� ������� ��������� � �������� ������ ���������
{
	for (int i = 0; i < amount; i++)
	{
		ourProduct[i].id = ourProduct1[i].id;
		ourProduct[i].name = ourProduct1[i].name;
		ourProduct[i].count = ourProduct1[i].count;
		ourProduct[i].price = ourProduct1[i].price;

	}
	delete[] ourProduct1;
}

void Product::addStructProd1(int amount) // ��������� ������ ��� ��������� ������ ���������
{
	if (amount == 0)
	{
		ourProduct1 = new product1[amount + 1]; // ��������� ������ ��� ������ ���������
		ourProduct1[amount].id = 0;
	}
	else
	{
		product1* tempObjEx = new product1[amount + 1];
		for (int i = 0; i < amount; i++)
		{
			tempObjEx[i] = ourProduct1[i]; // �������� �� ��������� ������
		}
		delete[] ourProduct1;

		ourProduct1 = tempObjEx;
		prodId++;
		ourProduct1[amount].id = prodId;

	}
}

void Product::addStruct(int amount) // ��������� ������ ��� �������� ������ ���������
{
	if (amount == 0)
	{
		ourProduct = new product1[amount + 1]; // ��������� ������ ��� ������ ���������
		ourProduct[amount].id = 0;
	}
	else
	{
		product1* tempObj = new product1[amount + 1];
		for (int i = 0; i < amount; i++)
		{
			tempObj[i] = ourProduct[i]; // �������� �� ��������� ������
		}
		delete[] ourProduct;

		ourProduct = tempObj;
		prodId++;
		ourProduct[amount].id = prodId;
	}
}

void Product::addProduct(int amount) // ��������� ������ ���������
{
	cout << "������� �������� ������: ";
	cin >> ourProduct[amount].name;
	cout << endl;
	cout << "������� ���������� ������: ";
	cin >> ourProduct[amount].count;
	cout << endl;
	cout << "������� ���� ������: ";
	cin >> ourProduct[amount].price;

}


void Product::showProd(int amount) // ����� �������� ���������
{
	for (int i = 0; i < amount; i++)
	{
		cout
			<< "id " << ourProduct[i].id << '\n'
			<< "������������ ������: " << ourProduct[i].name << '\n'
			<< "���������� ������: " << ourProduct[i].count << '\n'
			<< "���� ������: " << ourProduct[i].price << '\n'
			<< "=================================\n";
	}
}

void Product::editProd(int amount) // �������������� ������ ���������
{
	int id_editable, item;

	cout << "|---------------------------|" << endl;
	cout << "|������ ��������������:     |" << endl;
	cout << "|---------------------------|" << endl;
	cout << "|1. ������������            |" << endl;
	cout << "|---------------------------|" << endl;
	cout << "|2. ����������              |" << endl;
	cout << "|---------------------------|" << endl;
	cout << "|3. ����                    |" << endl;
	cout << "|---------------------------|" << endl;
	cout << "|0. ��������� � ����        |" << endl;
	cout << "|---------------------------|" << endl;
	cout << "������� �����, ������� ������ ��������������� � ������: ";
	cin >> item;

	system("cls");

	switch (item)
	{
	case 1:
	{
		string rename;
		bool check = true;
		showProd(amount);
		cout << "������� id ������: ";
		cin >> id_editable;
		cout << endl;
		for (int i = 0; i < amount; i++)
		{
			if (id_editable == ourProduct[i].id) // ���������� �� �����
			{
				cout << "������� ����� ������������ ������: ";
				cin >> rename;
				ourProduct[i].name = rename;
				cout << "������������ ��������" << endl;
				check = false;
			}
		}
		if (check == true)
		{
			cout << "id �� ������" << endl;
		}
		break;
	}
	case 2:
	{
		float recount;
		bool check = true;
		showProd(amount);
		cout << "������� id ������: ";
		cin >> id_editable;
		cout << endl;
		for (int i = 0; i < amount; i++)
		{
			if (id_editable == ourProduct[i].id)
			{
				cout << "������� ����� ���������� ������: ";
				cin >> recount;
				ourProduct[i].count = recount;
				cout << "���������� ������ ��������" << endl;
				check = false;
			}
		}
		if (check == true)
		{
			cout << "id �� ������" << endl;
		}
		break;
	}
	case 3:
	{
		float reprice;
		bool check = true;
		showProd(amount);
		cout << "������� id ������: ";
		cin >> id_editable;
		cout << endl;
		for (int i = 0; i < amount; i++)
		{
			if (id_editable == ourProduct[i].id)
			{
				cout << "������� ����� ���� ������: ";
				cin >> reprice;
				ourProduct[i].price = reprice;
				cout << "���� ������ ��������" << endl;
				check = false;
			}
		}
		if (check == true)
		{
			cout << "id �� ������" << endl;
		}
		break;
	}

	system("pause");
	default:
		cout << "������ �������� �� ����������" << endl;
		break;
	}

}
