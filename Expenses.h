#ifndef __EXPENSES_H__

#define __EXPENSES_H__

#include "Struct.h"

#include "Product.h"

using namespace std;

class Expenses // Расход

{

private:

	expenses1* ourExpenses; // Указатель на структуру расходы

public:

	Expenses();

	~Expenses();

	void addStructExpences(int); // Выделить память под объект структуры товара

	void addExpenses(int); // Создать объект структуры товара

	void showExpences(int); // Вывод таблицы расходы

	

};

#endif