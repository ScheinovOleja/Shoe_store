#ifndef __EXPENSES_H__

#define __EXPENSES_H__

#include "Struct.h"
#include "product.h"

using namespace std;

class Expenses // ������
{
private:
	expenses1* ourExpenses; // ��������� �� ��������� �������
public:
	Expenses();	// �����������
	~Expenses(); // ����������
	void addStructExpenses(int); // �������� ������ ��� ������ ��������� ������
	void addExpenses(int); // ������� ������ ��������� ������
	void showExpenses(int); // ����� ������� �������
	void purchase(Product&, int&, int); // �������
	void annualReport(); // ����� �������� ������
	void dataReport(int); // ������������ ������ ��� �������� ������
};

#endif