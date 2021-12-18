#ifndef __STRUCT_H__
#define __STRUCT_H__
#include <string>
using namespace std;

struct itreport // ��������� ������ ��������� ��������
{
	float HCS; // ���
	float rapair; // ������
	float advert; // �������
	float unsurance; // ���������
	float tax; // ����� �� ������������
	float accessor; // ��������������
	float purchase; // �������
	float sumProd; // ����� ����� �������
};

struct product1 // ��������� ������ � �������
{
	unsigned short int id;
	float count; // ���������� ������
	float price; // ���� ������
	string name; // ������������ ������
	string view; // ��� ������
};

struct income1 // ��������� ������ � �������
{
	float Jan = 0, Feb = 0, Mar = 0, Apr = 0, May = 0, Jun = 0, Jul = 0, Aug = 0, Sep = 0, Oct = 0, Nov = 0, Dec = 0; //����� �� �������

};

struct expenses1 // ��������� ������ � ��������
{
	string data; // ����� 
	string recipient; // ����������
	float sum; // ����� �������
	string categories; // ��������� ��������
};

#endif