#ifndef __EXPENSES_H__

#define __EXPENSES_H__

#include "Struct.h"
#include "product.h"

class Expenses // Расход
{
private:
    expenses1 *ourExpenses; // Указатель на структуру расходы
public:
    Expenses();

    ~Expenses();

    void addStructExpenses(int); // Выделить память под объект структуры товара
    void addExpenses(int); // Создать объект структуры товара
    void showExpenses(int); // Вывод таблицы расходы
    void purchase(Product &, int &, int); // Закупки
    void annualReport(); // Вывод годового отчета
    void dataReport(int); // Формирование данных для годового отчета
};

#endif