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
	Product objectPr; // ������� ������ ������ Product
	Income objectIn; // ������� ������ ������ Income
	Expenses objectEx; // ������� ������ ������ Expenses
	int productAmount = 0; // ��������� ���������� ������� 
	int incomeAmount = 0; // ��������� �����
	int expensesAmount = 0;	// ��������� ������
	objectIn.addStructIncome(incomeAmount);

	do { // ���� ���� ���������
		menu(); // ����� �������, ���������� ������ ��������� ���� ���������
		cin >> item;
		system("cls"); // ������� ������

		switch (item)
		{
		case  1: // ���������� ������
		{
			objectPr.addStruct(productAmount); // ����� ������ ������� ������ Product
			objectPr.addProduct(productAmount);
			productAmount++;
			break;
		}
		case  2: // ���� ��������
			objectEx.addStructExpences(expensesAmount);  //����� ������ ������� ������ Expenses
			objectEx.addExpenses(expensesAmount);
			expensesAmount++;
			break;
		case  3: // ���� �������
			objectPr.copyProd(productAmount);
			objectIn.addIncome(objectPr, productAmount); //����� ������ ������� ������ Income
			objectPr.recopyProd(productAmount);
			break;
		case  4: // ����� �������
			objectEx.addStructExpences(expensesAmount);
			objectPr.copyProd(productAmount);
			objectEx.purchase(objectPr, productAmount, expensesAmount);
			objectPr.recopyProd(productAmount);
			expensesAmount++;
			break;
		case  5: // ��������������/�������� �������
		{
			int action;
			punkt5(); // ����� �������, ���������� �� ����� ���� �������� � ��������
			cin >> action;
			system("cls");
			switch (action)
			{
			case 1:	// ����� ������ �������
			{
				if (productAmount != 0) {
					objectPr.showProd(productAmount);
				}
				else {
					cout << "��� �������" << endl;
				}
				break;
			}
			case 2:	// �������������� �������
			{
				objectPr.editProd(productAmount);
				break;
			}
			case 0:	// ����� � �������� ����
			{
				break;
			}
			system("pause");
			default: // ���� �������� case
				cout << "����� �������� �� ����������" << endl;
				break;
			}
		}
		break;
		case  6: // ����� ��������
			objectIn.showIncome();
			cout << endl;
			break;
		case  7: // ����� �������
			objectEx.showExpences(expensesAmount);
			break;
		case  8: // ����� �������� ������
			objectEx.dataReport(expensesAmount);
			objectIn.totalIncomeSum();
			objectPr.leftoversSum(productAmount);
			objectEx.annualReport();
			break;
		case  0: // ����� �� ���������
			return 0;
			break;

		default: // ���� �������� case
			cout << "����� �������� �� ����������" << endl;
			break;
		}
		system("pause");
		system("cls");
	} while (item != 0); // ������� ������ �� �����

	return 0;
}
