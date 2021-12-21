#include "Expenses.h"
#include <iostream>
#include <iomanip>
#include "Struct.h"

using namespace std;

itreport report; // Глобальный объект структуры
extern float totalSum; // Глобальная переменная общей суммы доходов
extern float leftovers; // Глобальная переменная остатка товаров

void Expenses::dataReport(int amountEx) // Заполнение объекта структуры данных/суммы/категорий расхода
{
    report.HCS = 0;
    report.repair = 0;
    report.advert = 0;
    report.unsurance = 0;
    report.tax = 0;
    report.accessor = 0;
    report.purchase = 0;
    for (int i = 0; i < amountEx; i++) // вычисление суммы по каждой категории.
    {
        if (ourExpenses[i].categories == "ЖКХ") {
            report.HCS = ourExpenses[i].sum + report.HCS;
        }
        if (ourExpenses[i].categories == "Ремонт") {
            report.repair = ourExpenses[i].sum + report.repair;
        }
        if (ourExpenses[i].categories == "Реклама") {
            report.advert = ourExpenses[i].sum + report.advert;
        }
        if (ourExpenses[i].categories == "Страховка") {
            report.unsurance = ourExpenses[i].sum + report.unsurance;
        }
        if (ourExpenses[i].categories == "Налог на недвижимость") {
            report.tax = ourExpenses[i].sum + report.tax;
        }
        if (ourExpenses[i].categories == "Принадлежности") {
            report.accessor = ourExpenses[i].sum + report.accessor;
        }
        if (ourExpenses[i].categories == "Закупки") {
            report.purchase = ourExpenses[i].sum + report.purchase;
        }
        report.sumProd = report.HCS + report.repair + report.advert + report.unsurance + report.tax + report.accessor;
    }
}

Expenses::Expenses() // Конструктор
{
    ourExpenses = 0; // Присваивает указателю на структуру нулевое значение
}

Expenses::~Expenses() // Деструктор
{
    delete[] ourExpenses;
}

void Expenses::addStructExpenses(int amount) // Выделение памяти под объект структуры
{
    if (amount == 0) {
        ourExpenses = new expenses1[amount + 1]; // выделение памяти для первой структуры
    } else {
        expenses1 *tempObjE = new expenses1[amount + 1];
        for (int i = 0; i < amount; i++) {
            tempObjE[i] = ourExpenses[i]; // копируем во временный объект
        }
        delete[] ourExpenses;

        ourExpenses = tempObjE;
    }
}

void Expenses::addExpenses(int amount) // Добавление данных в объект структуры
{
    int date;
    int categories;
    cout << "Месяц:" << endl;
    cout << "1. Январь" << endl;
    cout << "2. Февраль" << endl;
    cout << "3. Март" << endl;
    cout << "4. Апрель" << endl;
    cout << "5. Май" << endl;
    cout << "6. Июнь" << endl;
    cout << "7. Июль" << endl;
    cout << "8. Август" << endl;
    cout << "9. Сентябрь" << endl;
    cout << "10. Октябрь" << endl;
    cout << "11. Ноябрь" << endl;
    cout << "12. Декабрь" << endl;
    cout << "Выберите месяц: ";
    cin >> date;
    switch (date) {
        case 1: {
            ourExpenses[amount].data = "Январь";
            break;
        }
        case 2: {
            ourExpenses[amount].data = "Февраль";
            break;
        }
        case 3: {
            ourExpenses[amount].data = "Март";
            break;
        }
        case 4: {
            ourExpenses[amount].data = "Апрель";
            break;
        }
        case 5: {
            ourExpenses[amount].data = "Май";
            break;
        }
        case 6: {
            ourExpenses[amount].data = "Июнь";
            break;
        }
        case 7: {
            ourExpenses[amount].data = "Июль";
            break;
        }
        case 8: {
            ourExpenses[amount].data = "Август";
            break;
        }
        case 9: {
            ourExpenses[amount].data = "Сентябрь";
            break;
        }
        case 10: {
            ourExpenses[amount].data = "Октябрь";
            break;
        }
        case 11: {
            ourExpenses[amount].data = "Ноябрь";
            break;
        }
        case 12: {
            ourExpenses[amount].data = "Декабрь";
            break;
        }
            system("pause");
        default:
            cout << "Месяц не найден" << endl;
            return;
            break;

    }
    cout << endl;

    cout << "Введите получателя: ";
    cin >> ourExpenses[amount].recipient;
    cout << "Введите сумму расхода: ";
    cin >> ourExpenses[amount].sum;
    cout << "Выберите категорию: " << endl;
    cout << "1. ЖКХ" << endl;
    cout << "2. Налог на недвижимость" << endl;
    cout << "3. Страховка" << endl;
    cout << "4. Принадлежности" << endl;
    cout << "5. Ремонт" << endl;
    cout << "6. Реклама" << endl;
    cout << "Введите номер категорию: ";
    cin >> categories;

    switch (categories) {
        case 1: {
            ourExpenses[amount].categories = "ЖКХ";
            break;
        }
        case 2: {
            ourExpenses[amount].categories = "Налог на недвижимость";
            break;
        }
        case 3: {
            ourExpenses[amount].categories = "Страховка";
            break;
        }
        case 4: {
            ourExpenses[amount].categories = "Принадлежности";
            break;
        }
        case 5: {
            ourExpenses[amount].categories = "Ремонт";
            break;
        }
        case 6: {
            ourExpenses[amount].categories = "Реклама";
            break;
        }
            system("pause");
        default:
            cout << "Категория не найдена" << endl;
            break;

    }
}


void Expenses::showExpenses(int amount) // Вывод таблицы расходов
{
    cout << setw(10) << "Месяц " << setw(25) << "Получатель" << setw(25) << "Сумма" << setw(25) << "Категории" << endl;
    cout << "--------------------------------------------------------------------------------------" << endl;
    for (int i = 0; i < amount; i++) {
        cout << setw(10) << ourExpenses[i].data << setw(25) << ourExpenses[i].recipient << setw(25)
             << ourExpenses[i].sum << setw(25) << ourExpenses[i].categories << endl;
        cout << "--------------------------------------------------------------------------------------" << endl;
    }
}

void Expenses::purchase(Product &objectPr, int &amountPr, int amountEx) // Закупка товаров
{
    string prodName;
    int prodCount;
    int date;
    bool check = true;
    cout << "Введите название товара: ";
    cin >> prodName;
    for (int i = 0; i < amountPr; i++) {
        if (prodName == objectPr.ourProduct1[i].name) // Проверка, существует ли товар
        {
            cout << "Введите количество: ";
            cin >> prodCount;
            objectPr.ourProduct1[i].count = objectPr.ourProduct1[i].count + prodCount; // Добавляем количество товаров
            check = false;
        }
    }
    if (check == true) // Если переменная check = true, значит, что товара нет и мы создаем новый
    {
        objectPr.addStructProd1(amountPr); // Выделение памяти под временный объект структуры
        objectPr.addStruct(amountPr); // Выделение памяти под основной объект структуры
        objectPr.ourProduct1[amountPr].name = prodName;
        cout << "Введите количество: ";
        cin >> objectPr.ourProduct1[amountPr].count;
        cout << "Введите цену товара для продажи: ";
        cin >> objectPr.ourProduct1[amountPr].price;
        amountPr++;
    }

    cout << "Месяц:" << endl;
    cout << "1. Январь" << endl;
    cout << "2. Февраль" << endl;
    cout << "3. Март" << endl;
    cout << "4. Апрель" << endl;
    cout << "5. Май" << endl;
    cout << "6. Июнь" << endl;
    cout << "7. Июль" << endl;
    cout << "8. Август" << endl;
    cout << "9. Сентябрь" << endl;
    cout << "10. Октябрь" << endl;
    cout << "11. Ноябрь" << endl;
    cout << "12. Декабрь" << endl;
    cout << "Выберите месяц: ";
    cin >> date;
    switch (date) {
        case 1: {
            ourExpenses[amountEx].data = "Январь";
            break;
        }
        case 2: {
            ourExpenses[amountEx].data = "Февраль";
            break;
        }
        case 3: {
            ourExpenses[amountEx].data = "Март";
            break;
        }
        case 4: {
            ourExpenses[amountEx].data = "Апрель";
            break;
        }
        case 5: {
            ourExpenses[amountEx].data = "Май";
            break;
        }
        case 6: {
            ourExpenses[amountEx].data = "Июнь";
            break;
        }
        case 7: {
            ourExpenses[amountEx].data = "Июль";
            break;
        }
        case 8: {
            ourExpenses[amountEx].data = "Август";
            break;
        }
        case 9: {
            ourExpenses[amountEx].data = "Сентябрь";
            break;
        }
        case 10: {
            ourExpenses[amountEx].data = "Октябрь";
            break;
        }
        case 11: {
            ourExpenses[amountEx].data = "Ноябрь";
            break;
        }
        case 12: {
            ourExpenses[amountEx].data = "Декабрь";
            break;
        }
            system("pause");
        default:
            cout << "Месяц не найден" << endl;
            break;

    }
    cout << endl;

    cout << "Введите получателя: ";
    cin >> ourExpenses[amountEx].recipient;
    cout << "Введите сумму расхода: ";
    cin >> ourExpenses[amountEx].sum;
    ourExpenses[amountEx].categories = "Закупки";

}

void Expenses::annualReport() // Вывод годового отчета
{
    cout << "Расход" << endl;
    cout << "	ЖКХ: " << report.HCS << endl;
    cout << "	Ремонт: " << report.repair << endl;
    cout << "	Реклама: " << report.advert << endl;
    cout << "	Страховка: " << report.unsurance << endl;
    cout << "	Налог на недвижимость: " << report.tax << endl;
    cout << "	Принадлежности: " << report.accessor << endl;
    cout << "	Сумма: " << report.sumProd << endl;
    cout << "Доход" << endl;
    cout << "	Сумма: " << totalSum << endl;
    cout << "Остатки" << endl;
    cout << "	Сумма: " << leftovers << endl;

}