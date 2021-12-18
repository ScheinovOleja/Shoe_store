// файл Income.h

#ifndef __INCOME_H__
#define __INCOME_H__
#include "Struct.h"
#include "Product.h"

using namespace std;

class income //доход
{
	private:
		income1* ourIncome; // Указатель на структуру доходы
		int prodId; // id объекта дохода

	public:

		Income();
		~Income();
		void addIncome(Product&, int); // Создание объекта доходы
		void addStructI(int); // Выделение памяти под объект дохода
		void showI(); // Вывод таблицы доходов
		void totalIncomeSum(); // Общая сумма доходов

};
#endif