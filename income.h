#ifndef __INCOME_H__
#define __INCOME_H__
#include "Struct.h"
#include "product.h"

using namespace std;

class Income //доход
{
private:
    income1* ourIncome; // Указатель на структуру доходы
    int prodId; // id объекта дохода

public:
    Income();
    ~Income();
    void addIncome(Product&, int); // Создание объекта доходы
    void addStructIncome(int); // Выделение памяти под объект дохода
    void showIncome(); // Вывод таблицы доходов
    void totalIncomeSum(); // Общая сумма доходов

};
#endif