#ifndef __PRODUCT_H__
#define __PRODUCT_H__
#include "Struct.h"
using namespace std;


class Product  // �����
{
private:
	int prId; // id ������
	product1* ourProduct; // ��������� �� ��������� ������
public:
	product1* ourProduct1; // ��������� ��������� �� ���������, ������� ��������� 
	Product(); // �����������
	~Product(); // ����������
	void copyProd(int); // ����������� �������� �� ��������� ���������
	void recopyProd(int); // ������������ ���������� ������ �������� ��������
	void addStruct(int); // ��������� ������ ��� ������ ���������
	void addStructPr1(int); // ��������� ������ ��� ������� ������ ���������
	void addProduct(int); // �������� ������� ������
	void showP(int); // ����� ������
	void editP(int); // �������������� ������
	void ostatkiP(int); // ����� ��������
};


#endif