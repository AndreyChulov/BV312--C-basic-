#include <iostream>

using namespace std;

int main_calc()
{	
    setlocale(LC_ALL, "Russian");

    enum {
        UP = 'w',
        DOWN = 's',
        LEFT = 'a',
        RIGHT = 'd'
    };
        
    char ch{};
    std::cout << "Enter action (w,a,s,d): ";
    std::cin >> ch;
        
    switch (ch)
    {
    case UP: // if (ch == '+')   
        cout << "Робот идет вверх" << endl;
        break;    
    case DOWN:
        cout << "Робот идет вниз" << endl;
        break;    
    case RIGHT:
        cout << "Робот идет на право" << endl;
        break;
    case LEFT:
        cout << "Робот идет на лево" << endl;
        break;
   /* default:
        std::cout << "Error !!! " << ch << " \n";
        break;*/
    }
    return 0;	
}

int main()
{
    setlocale(LC_ALL, "Russian");

    /*int i{ 0 };

    while (i<=20)
    {
        cout << i << " ";
        if (i % 2 == 0)
            cout << "*" << endl;
        else
            cout << "-" << endl;
        i++;
    }*/

    /*
    Пользователь с клавиатуры вводит целое число.
    Необходимо посчитать сумму его цифр.
    */

    //int a;
    //cout << "Ведите число ";
    //cin >> a;

    //int res{};

    //while (a != 0) {
    //    res += a % 10; // res = res + a%10
    //    a /= 10;
    //}
    //cout << res << endl;
     
    /*
    Написать программу, выводящую на экран линию 
    из заданного количества  заданных символов.
    */

    /*int a;
    cout << "Введите число ";
    cin >> a;

    char ch;
    cout << "Введите символ ";
    cin >> ch;

    while (a!=0)
    {
        cout << ch;
        a--;
    }*/


    // Программа про оценки

    /*int count;
    cout  << "Введите количество оценок ";
    cin >> count;    
    double sum{};
    int i{ 1 };

    while (i  <= count) {               
        int av;
        cout << "Введите оценку " << i <<" ";
        cin >> av;
        i++;
        sum += av;
    }


    cout << "Средняя = " << sum / count;
    */

    // Программа про оценки 2

    /*int mark{ 0 };
    double sum{};
    int i{ 0 };
    do {
        cout << "Введите оценку " << i+1 << " :";
        cin >> mark;
        sum += mark;

        if (mark != 0)
            i++;
        else
            break;

    } while (true);

    cout << "Средняя = " << sum / i;*/

    //Программа с выводом кратного 5  от 0 до 100 


    /*int a{1};

    int i{ 0 };

    while (a <=100) {        
        if (a% 5 == 0)
            cout << a << endl;
        a++;
        i++;
    }
    cout << "Steps = " << i<< endl;

    a = 5;
    i = 0;

    while (a <= 100) {     
       cout << a << endl;
        a+=5;
        i++;
    }
    cout << "Steps = " << i<< endl;

    i = 99999;
    double r{};

    for (int a = 5; a <= 100; r++, a += 5) {
        cout << a << endl;    
    }

    cout << "Steps = " << i << endl;
    cout << "Steps = " << r << endl;


    for (; a != 121; a++) {
        if (a % 2)
            continue;
        cout << a << endl;
    }*/

    /*
    У швеи имеется ткань длиной L. 
    Ей необходимо пошить подушки длиной P. 
    Условно договоримся, что ширина ткани совпадает
    с шириной подушки.Определить сколько подушек сможет 
    пошить швея, если умножать и делить она не умеет.
    */

    int P{};
    int L{};
    cout << "Введите длинну ткани: ";
    cin >> L;
    cout << "Введите длинну подушки: ";
    cin >> P;

    int count{};
    for (; L > 0; L -= P+P) {
        count++;
    }
    cout << count << endl;


    return 0;
}