#include "income.h"
#include <iostream>
#include <iomanip>
#include "Struct.h"

using namespace std;

float totalSum;

Income::Income() // ???????????
{
    ourIncome = 0; // ??????????? ????????? ?? ????????? ??????? ????????
    prodId = 0;
}

Income::~Income() {
    delete[] ourIncome;
}


void Income::addStructIncome(int amount) // ???????? ?????? ??? ?????? ?????????
{
    ourIncome = new income1[amount + 1]; // ????????? ?????? ??? ?????? ?????????
}

void Income::addIncome(Product &objectPr, int amount) // ?????????? ??????? ?????????
{

    int month, idProd;
    float countProd;
    float sum;
    bool check = true;
    objectPr.showProd(amount);
    cout << "??????? id ??????: ";
    cin >> idProd;
    cout << "??????? ?????????? ??????: ";
    cin >> countProd;
    for (int i = 0; i < amount; i++) {
        if (idProd == objectPr.ourProduct1[i].id) // ?????????? ?? ????? ?????
        {
            if (countProd > objectPr.ourProduct1[i].count) // ??????? ?? ?????????? ???????
            {
                cout << "???????????? ??????" << endl;
                return;
            } else {
                objectPr.ourProduct1[i].count =
                        objectPr.ourProduct1[i].count - countProd; // ????????? ?????????? ??????
                sum = countProd * objectPr.ourProduct1[i].price; // ?????????? ????? ???????????? ??????
                cout << "????? ??????: " << sum << endl;
                check = false;

                cout << endl;
                cout << "1. ??????" << endl;
                cout << "2. ???????" << endl;
                cout << "3. ????" << endl;
                cout << "4. ??????" << endl;
                cout << "5. ???" << endl;
                cout << "6. ????" << endl;
                cout << "7. ????" << endl;
                cout << "8. ??????" << endl;
                cout << "9. ????????" << endl;
                cout << "10. ???????" << endl;
                cout << "11. ??????" << endl;
                cout << "12. ???????" << endl;
                cout << "???????? ?????: ";
                cin >> month;

                switch (month) {
                    case 1: {
                        ourIncome[idProd].Jan = sum + ourIncome[idProd].Jan;
                        break;
                    }
                    case 2: {
                        ourIncome[idProd].Feb = sum + ourIncome[idProd].Feb;
                        break;
                    }
                    case 3: {
                        ourIncome[idProd].Mar = sum + ourIncome[idProd].Mar;
                        break;
                    }
                    case 4: {
                        ourIncome[idProd].Apr = sum + ourIncome[idProd].Apr;
                        break;
                    }
                    case 5: {
                        ourIncome[idProd].May = sum + ourIncome[idProd].May;
                        break;
                    }
                    case 6: {
                        ourIncome[idProd].Jun = sum + ourIncome[idProd].Jun;
                        break;
                    }
                    case 7: {
                        ourIncome[idProd].Jul = sum + ourIncome[idProd].Jul;
                        break;
                    }
                    case 8: {
                        ourIncome[idProd].Aug = sum + ourIncome[idProd].Aug;
                        break;
                    }
                    case 9: {
                        ourIncome[idProd].Sep = sum + ourIncome[idProd].Sep;
                        break;
                    }
                    case 10: {
                        ourIncome[idProd].Oct = sum + ourIncome[idProd].Oct;
                        break;
                    }
                    case 11: {
                        ourIncome[idProd].Nov = sum + ourIncome[idProd].Nov;
                        break;
                    }
                    case 12: {
                        ourIncome[idProd].Dec = sum + ourIncome[idProd].Dec;
                        break;
                    }
                        system("pause");
                    default:
                        cout << "????? ?? ??????" << endl;
                        break;

                }
            }
        }
    }
    if (check) {
        cout << "id ?????? ?? ??????" << endl;
    }
}


void Income::showIncome() // ????? ??????? ???????
{
    cout << setw(10) << "Jan" << setw(10) << "Feb" << setw(10) << "Mar" << setw(10) << "Apr" << setw(10) << "May"
         << setw(10) << "Jun" << setw(10) << "Jul" << setw(10) << "Aug" << setw(10) << "Sep" << setw(10) << "Oct"
         << setw(10) << "Nov" << setw(10) << "Dec" << endl;
    cout << endl;
    cout << endl;
    cout << setw(10) << ourIncome[prodId].Jan << setw(10) << ourIncome[prodId].Feb << setw(10) << ourIncome[prodId].Mar
         << setw(10) << ourIncome[prodId].Apr << setw(10) << ourIncome[prodId].May << setw(10) << ourIncome[prodId].Jun
         << setw(10) << ourIncome[prodId].Jul << setw(10) << ourIncome[prodId].Aug << setw(10) << ourIncome[prodId].Sep
         << setw(10) << ourIncome[prodId].Oct << setw(10) << ourIncome[prodId].Nov << setw(10) << ourIncome[prodId].Dec
         << endl;
}

void Income::totalIncomeSum() // ????? ????? ???????
{
    totalSum = 0;
    totalSum = ourIncome[prodId].Jan + ourIncome[prodId].Feb + ourIncome[prodId].Mar + ourIncome[prodId].Apr +
               ourIncome[prodId].May + ourIncome[prodId].Jun + ourIncome[prodId].Jul + ourIncome[prodId].Aug +
               ourIncome[prodId].Sep + ourIncome[prodId].Oct + ourIncome[prodId].Nov + ourIncome[prodId].Dec;
}
