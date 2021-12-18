#ifndef __STRUCT_H__
#define __STRUCT_H__
#include <string>
using namespace std;

struct itreport // Структура данных категорий расходов
{
	float HCS; // ЖКХ
	float rapair; // Ремонт
	float advert; // Реклама
	float unsurance; // Страховка
	float tax; // Налог на недвижимость
	float accessor; // Принадлежности
	float purchase; // Закупка
	float sumProd; // Общая сумма доходов
};

struct product1 // Структура данных о товарах
{
	unsigned short int id;
	float count; // Количество товара
	float price; // Цена товара
	string name; // Наименование товара
	string view; // Вид товара
};

struct income1 // Структура данных о доходах
{
	float Jan = 0, Feb = 0, Mar = 0, Apr = 0, May = 0, Jun = 0, Jul = 0, Aug = 0, Sep = 0, Oct = 0, Nov = 0, Dec = 0; //Сумма по месяцам

};

struct expenses1 // Структура данных о расходах
{
	string data; // Месяц 
	string recipient; // Получатель
	float sum; // Сумма расхода
	string categories; // Категория расходов
};

#endif