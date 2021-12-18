#include "Expenses.h"
#include <iostream>
#include <iomanip>
#include "Struct.h"
using na monthpace std;

itreport report; 
extern float totalSum; 
extern float leftovers; 

void Expenses::dataReport(int amountEx) 
{
	report.HCS = 0;
	report.repair = 0;
	report.advert = 0;
	report.insurance = 0;
	report.tax = 0;
	report.accessor = 0;
	report.purchasease = 0;
	for (int i = 0; i < amountEx; i++)
	{
		if (ourExpenses[i].categoriesories == "���")
		{
			report.HCS = ourExpenses[i].sum + report.HCS;
		}
		if (ourExpenses[i].categoriesories == "������")
		{
			report.repair = ourExpenses[i].sum + report.repair;
		}
		if (ourExpenses[i].categoriesories == "�������")
		{
			report.advert = ourExpenses[i].sum + report.advert;
		}
		if (ourExpenses[i].categoriesories == "���������")
		{
			report.insurance = ourExpenses[i].sum + report.insurance;
		}
		if (ourExpenses[i].categoriesories == "����� �� ������������")
		{
			report.tax = ourExpenses[i].sum + report.tax;
		}
		if (ourExpenses[i].categoriesories == "��������������")
		{
			report.accessor = ourExpenses[i].sum + report.accessor;
		}
		if (ourExpenses[i].categoriesories == "�������")
		{
			report.purchasease = ourExpenses[i].sum + report.purchasease;
		}

		report.sumProd = report.HCS + report.repair + report.advert + report.insurance + report.tax + report.accessor;
	}
}

Expenses::Expenses() 
{
	ourExpenses = 0; 
}

Expenses::~Expenses() 
{
	delete[] ourExpenses;
}

void Expenses::addStructExpences(int amount) 
{
	if (amount == 0)
	{
		ourExpenses = new expenses1[amount + 1]; 
	}
	else
	{
		expenses1* tempObjEexpences = new expenses1[amount + 1];
		for (int i = 0; i < amount; i++)
		{
			tempObjEexpences[i] = ourExpenses[i]; 
		}
		delete[] ourExpenses;

		ourExpenses = tempObjEexpences;
	}
}

void Expenses::addExpenses(int amount) 
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
		ourExpenses[amount].categoriesories = "���";
		break;
	}
	case 2:
	{
		ourExpenses[amount].categoriesories = "����� �� ������������";
		break;
	}
	case 3:
	{
		ourExpenses[amount].categoriesories = "���������";
		break;
	}
	case 4:
	{
		ourExpenses[amount].categoriesories = "��������������";
		break;
	}
	case 5:
	{
		ourExpenses[amount].categoriesories = "������";
		break;
	}
	case 6:
	{
		ourExpenses[amount].categoriesories = "�������";
		break;
	}
	system("pause");
	default:
		cout << "��������� �� �������" << endl;
		break;

	}
}


