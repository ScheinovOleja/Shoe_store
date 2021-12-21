#include "Expenses.h"
#include <iostream>
#include <iomanip>
#include "Struct.h"
using namespace std;

itreport report; // ���������� ������ ���������
extern float  totalSum; // ���������� ���������� ����� ����� �������
extern float  leftovers; // ���������� ���������� ������� �������

void Expenses::dataReport(int amountEx) // ���������� ������� ��������� ������ ����� ��������� �������
{
	report.HCS = 0;
	report.repair = 0;
	report.advert = 0;
	report.unsurance = 0;
	report.tax = 0;
	report.accessor = 0;
	report.purchase = 0;
	for (int i = 0; i < amountEx; i++) // ���������� ����� ��� �������� ������.
	{
		if (ourExpenses[i].categories == "���")
		{
			report.HCS = ourExpenses[i].sum + report.HCS;
		}
		if (ourExpenses[i].categories == "������")
		{
			report.repair = ourExpenses[i].sum + report.repair;
		}
		if (ourExpenses[i].categories == "�������")
		{
			report.advert = ourExpenses[i].sum + report.advert;
		}
		if (ourExpenses[i].categories == "���������")
		{
			report.unsurance = ourExpenses[i].sum + report.unsurance;
		}
		if (ourExpenses[i].categories == "����� �� ������������")
		{
			report.tax = ourExpenses[i].sum + report.tax;
		}
		if (ourExpenses[i].categories == "��������������")
		{
			report.accessor = ourExpenses[i].sum + report.accessor;
		}
		if (ourExpenses[i].categories == "�������")
		{
			report.purchase = ourExpenses[i].sum + report.purchase;
		}

		report.sumProd = report.HCS + report.repair + report.advert + report.unsurance + report.tax + report.accessor;
	}
}

Expenses::Expenses() // �����������
{
	ourExpenses = 0; // ����������� ��������� �� ��������� ������� ��������
}

Expenses::~Expenses() // ����������
{
	delete[] ourExpenses;
}

void Expenses::addStructExpenses(int amount) // ��������� ������ ��� ������ ���������
{
	if (amount == 0)
	{
		ourExpenses = new expenses1[amount + 1]; // ��������� ������ ��� ������ ���������
	}
	else
	{

		expenses1* tempObjExpenses = new expenses1[amount + 1];
		for (int i = 0; i < amount; i++)
		{
			tempObjExpenses[i] = ourExpenses[i];// �������� �� ��������� ������
		}
		delete[] ourExpenses;

		ourExpenses = tempObjExpenses;
	}
}

void Expenses::addExpenses(int amount){// ���������� ������ � ������ ���������
	int date;
	int categories;
	cout << "�����:" << endl;
	cout << "1. ������" << endl;
	cout << "2. �������" << endl;
	cout << "3. ����" << endl;
	cout << "4. ������" << endl;
	cout << "5. ���" << endl;
	cout << "6. ����" << endl;
	cout << "7. ����" << endl;
	cout << "8. ������" << endl;
	cout << "9. ��������" << endl;
	cout << "10. �������" << endl;
	cout << "11. ������" << endl;
	cout << "12. �������" << endl;
	cout << "�������� �����: ";
	cin >> date;
	switch (date)
	{
	case 1:
	{
		ourExpenses[amount].data = "������";
		break;
	}
	case 2:
	{
		ourExpenses[amount].data = "�������";
		break;
	}
	case 3:
	{
		ourExpenses[amount].data = "����";
		break;
	}
	case 4:
	{
		ourExpenses[amount].data = "������";
		break;
	}
	case 5:
	{
		ourExpenses[amount].data = "���";
		break;
	}
	case 6:
	{
		ourExpenses[amount].data = "����";
		break;
	}
	case 7:
	{
		ourExpenses[amount].data = "����";
		break;
	}
	case 8:
	{
		ourExpenses[amount].data = "������";
		break;
	}
	case 9:
	{
		ourExpenses[amount].data = "��������";
		break;
	}
	case 10:
	{
		ourExpenses[amount].data = "�������";
		break;
	}
	case 11:
	{
		ourExpenses[amount].data = "������";
		break;
	}
	case 12:
	{
		ourExpenses[amount].data = "�������";
		break;
	}
	system("pause");
	default:
		cout << "����� �� ������" << endl;
		return;
		break;

	}
	cout << endl;

	cout << "������� ����������: ";
	cin >> ourExpenses[amount].recipient;
	cout << "������� ����� �������: ";
	cin >> ourExpenses[amount].sum;
	cout << "�������� ���������: " << endl;
	cout << "1. ���" << endl;
	cout << "2. ����� �� ������������" << endl;
	cout << "3. ���������" << endl;
	cout << "4. ��������������" << endl;
	cout << "5. ������" << endl;
	cout << "6. �������" << endl;
	cout << "������� ����� ���������: ";
	cin >> categories;

	switch (categories)
	{
	case 1:
	{
		ourExpenses[amount].categories = "���";
		break;
	}
	case 2:
	{
		ourExpenses[amount].categories = "����� �� ������������";
		break;
	}
	case 3:
	{
		ourExpenses[amount].categories = "���������";
		break;
	}
	case 4:
	{
		ourExpenses[amount].categories = "��������������";
		break;
	}
	case 5:
	{
		ourExpenses[amount].categories = "������";
		break;
	}
	case 6:
	{
		ourExpenses[amount].categories = "�������";
		break;
	}
	system("pause");
	default:
		cout << "��������� �� �������" << endl;
		break;

	}
}

void Expenses::showExpenses(int amount) // ����� ������� ��������
{
	cout << setw(10) << "����� " << setw(25) << "����������" << setw(25) << "�����" << setw(25) << "���������" << endl;
	cout << "--------------------------------------------------------------------------------------" << endl;
	for (int i = 0; i < amount; i++)
	{
		cout << setw(10) << ourExpenses[i].data << setw(25) << ourExpenses[i].recipient << setw(25) << ourExpenses[i].sum << setw(25) << ourExpenses[i].categories << endl;
		cout << "--------------------------------------------------------------------------------------" << endl;
	}
}

void Expenses::purchase(Product& objectPr, int& amountPr, int amountEx) // ������� �������
{
	string prodName;
	int prodCount;
	int date;
	bool check = true;
	cout << "������� �������� ������: ";
	cin >> prodName;
	for (int i = 0; i < amountPr; i++)
	{
		if (prodName == objectPr.ourProduct1[i].name) // ��������, ���������� �� �����
		{
			cout << "������� ����������: ";
			cin >> prodCount;
			objectPr.ourProduct1[i].count = objectPr.ourProduct1[i].count + prodCount; // ��������� ���������� �������
			check = false;
		}
	}
	if (check == true) // ���� ���������� che�k = true, ������, ��� ������ ��� � �� ������� �����
	{
		objectPr.addStructProd1(amountPr); // ��������� ������ ��� ��������� ������ ���������
		objectPr.addStruct(amountPr); // ��������� ������ ��� �������� ������ ���������
		objectPr.ourProduct1[amountPr].name = prodName;
		cout << "������� ����������: ";
		cin >> objectPr.ourProduct1[amountPr].count;
		cout << "������� ���� ������ ��� �������: ";
		cin >> objectPr.ourProduct1[amountPr].price;
		amountPr++;
	}

	cout << "�����:" << endl;
	cout << "1. ������" << endl;
	cout << "2. �������" << endl;
	cout << "3. ����" << endl;
	cout << "4. ������" << endl;
	cout << "5. ���" << endl;
	cout << "6. ����" << endl;
	cout << "7. ����" << endl;
	cout << "8. ������" << endl;
	cout << "9. ��������" << endl;
	cout << "10. �������" << endl;
	cout << "11. ������" << endl;
	cout << "12. �������" << endl;
	cout << "�������� �����: ";
	cin >> date;
	switch (date)
	{
	case 1:
	{
		ourExpenses[amountEx].data = "������";
		break;
	}
	case 2:
	{
		ourExpenses[amountEx].data = "�������";
		break;
	}
	case 3:
	{
		ourExpenses[amountEx].data = "����";
		break;
	}
	case 4:
	{
		ourExpenses[amountEx].data = "������";
		break;
	}
	case 5:
	{
		ourExpenses[amountEx].data = "���";
		break;
	}
	case 6:
	{
		ourExpenses[amountEx].data = "����";
		break;
	}
	case 7:
	{
		ourExpenses[amountEx].data = "����";
		break;
	}
	case 8:
	{
		ourExpenses[amountEx].data = "������";
		break;
	}
	case 9:
	{
		ourExpenses[amountEx].data = "��������";
		break;
	}
	case 10:
	{
		ourExpenses[amountEx].data = "�������";
		break;
	}
	case 11:
	{
		ourExpenses[amountEx].data = "������";
		break;
	}
	case 12:
	{
		ourExpenses[amountEx].data = "�������";
		break;
	}
	system("pause");
	default:
		cout << "����� �� ������" << endl;
		break;
	}
	cout << endl;

	cout << "������� ����������: ";
	cin >> ourExpenses[amountEx].recipient;
	cout << "������� ����� �������: ";
	cin >> ourExpenses[amountEx].sum;
	ourExpenses[amountEx].categories = "�������";

}
void Expenses::annualReport() // ����� �������� ������
{
	cout << "������" << endl;
	cout << "	���: " << report.HCS << endl;
	cout << "	������: " << report.repair << endl;
	cout << "	�������: " << report.advert << endl;
	cout << "	���������: " << report.unsurance << endl;
	cout << "	����� �� ������������: " << report.tax << endl;
	cout << "	��������������: " << report.accessor << endl;
	cout << "	�����: " << report.sumProd << endl;
	cout << "�����" << endl;
	cout << "	�����: " << totalSum << endl;
	cout << "�������" << endl;
	cout << "	�����: " << leftovers << endl;

}


