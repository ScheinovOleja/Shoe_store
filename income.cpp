//���� income.cpp

#include "Income.h"
#include <iostream>
#include <iomanip>
#include "Struct.h"

using namespace std;

float insymm;

Income::Income() //�����������
{
	ourIncome = 0; //����������� ��������� �� ��������� ������� ��������
	prIdI = 0;
}

Income::~Income()  //���������
{
	delete[] ourIncome;
}

void Income::addStructI(int amount) //��������� ����� ��� ������ ���������
{
	ourIncome = new income1[amount + 1]; //��������� ������ ��� ������ ���������
}

void Income::addIncome(Product& objectPr, int amount) // ���������� ������� ���������
{

	int mes, idtov;
	float kolvotov;
	float symm;
	bool proverka = true;
	objectPr.showP(amount);
	cout << "������� id ������: ";
	cin >> idtov;
	cout << "������� ���������� ������: ";
	cin >> kolvotov;
	for (int i = 0; i < amount; i++)
	{
		if (idtov == objectPr.ourProduct1[i].id) // ���������� �� ����� �����
		{
			if (kolvotov > objectPr.ourProduct1[i].kolvo) // ������� �� ���������� �������
			{
				cout << "������������ ������" << endl;
				return;
			}
			else {
				objectPr.ourProduct1[i].kolvo = objectPr.ourProduct1[i].kolvo - kolvotov; // ��������� ���������� ������
				symm = kolvotov * objectPr.ourProduct1[i].price; // ���������� ����� ������������ ������
				cout << "����� ������: " << symm << endl;
				proverka = false;

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
				cin >> mes;
				switch (mes)
				{
					{
				case 1:
				{
					ourIncome[prIdI].Jan = symm + ourIncome[prIdI].Jan;
					break;
				}
				case 2:
				{
					ourIncome[prIdI].Feb = symm + ourIncome[prIdI].Feb;
					break;
				}
				case 3:
				{
					ourIncome[prIdI].Mar = symm + ourIncome[prIdI].Mar;
					break;
				}
				case 4:
				{
					ourIncome[prIdI].Apr = symm + ourIncome[prIdI].Apr;
					break;
				}
				case 5:
				{
					ourIncome[prIdI].May = symm + ourIncome[prIdI].May;
					break;
				}
				case 6:
				{
					ourIncome[prIdI].Jun = symm + ourIncome[prIdI].Jun;
					break;
				}
				case 7:
				{
					ourIncome[prIdI].Jul = symm + ourIncome[prIdI].Jul;
					break;
				}
				case 8:
				{
					ourIncome[prIdI].Aug = symm + ourIncome[prIdI].Aug;
					break;
				}
				case 9:
				{
					ourIncome[prIdI].Sep = symm + ourIncome[prIdI].Sep;
					break;
				}
				case 10:
				{
					ourIncome[prIdI].Oct = symm + ourIncome[prIdI].Oct;
					break;
				}
				case 11:
				{
					ourIncome[prIdI].Nov = symm + ourIncome[prIdI].Nov;
					break;
				}
				case 12:
				{
					ourIncome[prIdI].Dec = symm + ourIncome[prIdI].Dec;
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

		if (proverka == true)
		{
			cout << "id ������ �� ������" << endl;
		}
	}

