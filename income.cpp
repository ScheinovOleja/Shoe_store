//���� income.cpp

#include "Income.h"
#include <iostream>
#include <iomanip>
#include "Struct.h"

using namespace std;

float totalSum;  //����������

Income::Income() //�����������
{
	ourIncome = 0; //����������� ��������� �� ��������� ������� ��������
	prodId = 0;
}


Income::~Income() //���������
{
	delete[] ourIncome;
}

void Income::addStructIncome(int amount) //��������� ����� ��� ������ ���������
{
	ourIncome = new income1[amount + 1]; //��������� ������ ��� ������ ���������
}

void Income::addIncome(Product& objectPr, int amount) // ���������� ������� ���������
{

	int month, idProd;
	float countProd;
	float sum;
	bool check = true;
	objectPr.showP(amount);
	cout << "������� id ������: ";
	cin >> idProd;
	cout << "������� ���������� ������: ";
	cin >> countProd;
	for (int i = 0; i < amount; i++)
	{
		if (idProd == objectPr.ourProduct1[i].id) // ���������� �� ����� �����
		{
			if (countProd > objectPr.ourProduct1[i].count) // ������� �� ���������� �������
			{
				cout << "������������ ������" << endl;
				return;
			}
			else {
				objectPr.ourProduct1[i].count = objectPr.ourProduct1[i].count - countProd; // ��������� ���������� ������
				sum = countProd * objectPr.ourProduct1[i].price; // ���������� ����� ������������ ������
				cout << "����� ������: " << sum << endl;
				check = false;

				cout << endl;
				cout << "1)������" << endl;
				cout << "2)�������" << endl;
				cout << "3)����" << endl;
				cout << "4)������" << endl;
				cout << "5)���" << endl;
				cout << "6)����" << endl;
				cout << "7)����" << endl;
				cout << "8)������" << endl;
				cout << "9)��������" << endl;
				cout << "10)�������" << endl;
				cout << "110������" << endl;
				cout << "12)�������" << endl;
				cout << "�������� �����: ";

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
					cout << "����� �� ������" << endl;
					break;

					}
				}
			}
		}

		if (check == true)
		{
			cout << "id ������ �� ������" << endl;
		}
	}

	void Income::showIncome() // ����� ������� �������
	{
		cout << setw(10) << "Jan" << setw(10) << "Feb" << setw(10) << "Mar" << setw(10) << "Apr" << setw(10) << "May" << setw(10) << "Jun" << setw(10) << "Jul" << setw(10) << "Aug" << setw(10) << "Sep" << setw(10) << "Oct" << setw(10) << "Nov" << setw(10) << "Dec" << endl;
		cout << endl;
		cout << endl;
		cout << setw(10) << ourIncome[prIdI].Jan << setw(10) << ourIncome[prIdI].Feb << setw(10) << ourIncome[prIdI].Mar << setw(10) << ourIncome[prIdI].Apr << setw(10) << ourIncome[prIdI].May << setw(10) << ourIncome[prIdI].Jun << setw(10) << ourIncome[prIdI].Jul << setw(10) << ourIncome[prIdI].Aug << setw(10) << ourIncome[prIdI].Sep << setw(10) << ourIncome[prIdI].Oct << setw(10) << ourIncome[prIdI].Nov << setw(10) << ourIncome[prIdI].Dec << endl;
	}

	void Income::totalIncomeSum() // ����� ����� �������
	{
		totalSum = 0;
		totalSum = ourIncome[prIdI].Jan + ourIncome[prIdI].Feb + ourIncome[prIdI].Mar + ourIncome[prIdI].Apr + ourIncome[prIdI].May + ourIncome[prIdI].Jun + ourIncome[prIdI].Jul + ourIncome[prIdI].Aug + ourIncome[prIdI].Sep + ourIncome[prIdI].Oct + ourIncome[prIdI].Nov + ourIncome[prIdI].Dec;
	}

