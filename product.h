#ifndef __PRODUCT_H__
#define __PRODUCT_H__
#include "Struct.h"
using namespace std;


class Product  // �����
{
private:
	int prodId; // id ������
	product1* ourProduct; // ��������� �� ��������� ������
public:	// ���������� �������
	product1* ourProduct1; // ��������� ��������� �� ���������, ������� ���������
	Product(); // �����������
	~Product(); // ����������
	void copyProd(int); // ����������� �������� �� ��������� ���������
	void recopyProd(int); // ������������ ���������� ������ �������� ��������
	void addStruct(int); // ��������� ������ ��� ������ ���������
	void addStructProd1(int); // ��������� ������ ��� �������� ������ ���������
	void addProduct(int); // �������� ������� ������
	void showProd(int); // ����� ������
	void editProd(int); // �������������� ������
	void leftoversSum(int); // ����� ��������
};


#endif