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
		if (ourExpenses[i].categoriesories == "ЖКХ")
		{
			report.HCS = ourExpenses[i].sum + report.HCS;
		}
		if (ourExpenses[i].categoriesories == "Ремонт")
		{
			report.repair = ourExpenses[i].sum + report.repair;
		}
		if (ourExpenses[i].categoriesories == "Реклама")
		{
			report.advert = ourExpenses[i].sum + report.advert;
		}
		if (ourExpenses[i].categoriesories == "Страховка")
		{
			report.insurance = ourExpenses[i].sum + report.insurance;
		}
		if (ourExpenses[i].categoriesories == "Налог на недвижимость")
		{
			report.tax = ourExpenses[i].sum + report.tax;
		}
		if (ourExpenses[i].categoriesories == "Принадлежности")
		{
			report.accessor = ourExpenses[i].sum + report.accessor;
		}
		if (ourExpenses[i].categoriesories == "Закупки")
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
	cout << "Месяц:" << endl;
	cout << "1. Январь" << endl;
	cout << "2. Февраль" << endl;
	cout << "3. Март" << endl;
	cout << "4. Апрель" << endl;
	cout << "5. Май" << endl;
	cout << "6. Июнь" << endl;
	cout << "7. Июль" << endl;
	cout << "8. Август" << endl;
	cout << "9. Сентябрь" << endl;
	cout << "10. Октябрь" << endl;
	cout << "11. Ноябрь" << endl;
	cout << "12. Декабрь" << endl;
	cout << "Выберите месяц: ";
	cin >> date;
	switch (date)
	{
	case 1:
	{
		ourExpenses[amount].data = "Январь";
		break;
	}
	case 2:
	{
		ourExpenses[amount].data = "Февраль";
		break;
	}
	case 3:
	{
		ourExpenses[amount].data = "Март";
		break;
	}
	case 4:
	{
		ourExpenses[amount].data = "Апрель";
		break;
	}
	case 5:
	{
		ourExpenses[amount].data = "Май";
		break;
	}
	case 6:
	{
		ourExpenses[amount].data = "Июнь";
		break;
	}
	case 7:
	{
		ourExpenses[amount].data = "Июль";
		break;
	}
	case 8:
	{
		ourExpenses[amount].data = "Август";
		break;
	}
	case 9:
	{
		ourExpenses[amount].data = "Сентябрь";
		break;
	}
	case 10:
	{
		ourExpenses[amount].data = "Октябрь";
		break;
	}
	case 11:
	{
		ourExpenses[amount].data = "Ноябрь";
		break;
	}
	case 12:
	{
		ourExpenses[amount].data = "Декабрь";
		break;
	}
	system("pause");
	default:
		cout << "Месяц не найден" << endl;
		return;
		break;

	}
	cout << endl;

	cout << "Введите получателя: ";
	cin >> ourExpenses[amount].recipient;
	cout << "Введите сумму расхода: ";
	cin >> ourExpenses[amount].sum;
	cout << "Выберите категорию: " << endl;
	cout << "1. ЖКХ" << endl;
	cout << "2. Налог на недвижимость" << endl;
	cout << "3. Страховка" << endl;
	cout << "4. Принадлежности" << endl;
	cout << "5. Ремонт" << endl;
	cout << "6. Реклама" << endl;
	cout << "Введите номер категорию: ";
	cin >> categories;

	switch (categories)
	{
	case 1:
	{
		ourExpenses[amount].categoriesories = "ЖКХ";
		break;
	}
	case 2:
	{
		ourExpenses[amount].categoriesories = "Налог на недвижимость";
		break;
	}
	case 3:
	{
		ourExpenses[amount].categoriesories = "Страховка";
		break;
	}
	case 4:
	{
		ourExpenses[amount].categoriesories = "Принадлежности";
		break;
	}
	case 5:
	{
		ourExpenses[amount].categoriesories = "Ремонт";
		break;
	}
	case 6:
	{
		ourExpenses[amount].categoriesories = "Реклама";
		break;
	}
	system("pause");
	default:
		cout << "Категория не найдена" << endl;
		break;

	}
}


