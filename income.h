// ���� Income.h

#ifndef __INCOME_H__
#define __INCOME_H__
#include "Struct.h"
#include "Product.h"

using namespace std;

class income //�����
{
	private:
		income1* ourIncome; // ��������� �� ��������� ������
		int prodId; // id ������� ������

	public:

		Income();
		~Income();
		void addIncome(Product&, int); // �������� ������� ������
		void addStructI(int); // ��������� ������ ��� ������ ������
		void showI(); // ����� ������� �������
		void totalIncomeSum(); // ����� ����� �������

};
#endif