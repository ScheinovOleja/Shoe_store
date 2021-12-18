#ifndef __PRODUCT_H__
#define __PRODUCT_H__
#include "Struct.h"
using namespace std;


class Product  // Товар
{
private:
	int prodId; // id товара
	product1* ourProduct; // Указатель на структуру товары
public:
	product1* ourProduct1; // Временный указатель на структуру, который очистится 
	Product(); // Конструктор
	~Product(); // Деструктор
	void copyProd(int); // Копирование объектов во временный указатель
	void recopyProd(int); // Присваивание измененных данных объектов структур
	void addStruct(int); // Выделение памяти под объект структуры
	void addStructProd1(int); // Выделение памяти под временый объект структуры
	void addProduct(int); // Создание объекта товара
	void showProd(int); // Вывод товара
	void editProd(int); // Редактирование товара
	void leftoversSum(int); // Сумма остатков
};


#endif