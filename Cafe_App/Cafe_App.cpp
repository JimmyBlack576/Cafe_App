#include <iostream>
#include <stdlib.h>



using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int people,cake,cakecount=0,drink,drinkcount=0,sumorder=0,
        cakepr1=150,cakepr2=100,cakepr3=50,
        drinkpr1=70,drinkpr2=50,drinkpr3=50;
    cout << "\tДобро Пожаловать! \n\n";
    cout << "Сколько человек будут делать заказ? \n";
    cin >> people;

    for (int i = 1; i <= people; i++)
    {
        
        cout << "\tЗаказ №" << i<<endl;
        cout << " Меню: \n";
        cout << " Кондитерские Изделия: \n\n"
            << "1. Торт \"Наполеон________150 р.\" \n"
            << "2. Заварное пироженое____100 р. \n"
            << "3. Эклеры_________________50 р. \n";
        cout << "Что будете заказывать? \n";
        cin >> cake;
        
        if(cake>3||cake<1)
        {
            cout << "Нет такого пункта в меню! \n";
            exit(0);
        }

        cout << "\tСколько вам нужно? \n";
        cin >> cakecount;
        cout << endl;
        cout << "\tЧто будете пить? \n"
            << "1. Лимонад________________70 р.\n"
            << "2. Кофе___________________50 р.\n"
            << "3. Чай____________________50 р.\n";
        cin >> drink;
        

        if (drink > 3||cake<1)
        {
            cout << "Нет такого пункта в меню! \n";
            exit(0);
        }
        cout << "\tСколько вам нужно? \n";
        cin >> drinkcount;
        cout << endl;
        switch (cake)
        {
        case 1:
            sumorder += cakepr1 * cakecount;
            break;
        case 2:
            sumorder += cakepr2 * cakecount;
            break;
        case 3:
            sumorder += cakepr3 * cakecount;
            break;
        }
        switch (drink)
        {
        case 1:
            sumorder += drinkpr1 * drinkcount;
            break;
        case 2:
            sumorder += drinkpr2 * drinkcount;
            break;
        case 3:
            sumorder += drinkpr3 * drinkcount;
            break;
        }
        

    }
    cout << "Сумма вашего заказа составляет - " << sumorder << " р. " << endl;
    cout << "\tПриятного аппетита!"<<endl;
}

