#ifndef __EXPENSES_H__

#define __EXPENSES_H__

#include "Struct.h"

#include "Product.h"

using namespace std;

class Expenses // ������

{

private:

	expenses1* ourExpenses; // ��������� �� ��������� �������

public:

	Expenses();

	~Expenses();

	void addStructExpences(int); // �������� ������ ��� ������ ��������� ������

	void addExpenses(int); // ������� ������ ��������� ������

	void showExpences(int); // ����� ������� �������

	

};

#endif