// Lesson2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

void Task1() {
    int chislo;
    std::cout << "Введите число с дробной частью в 1 цифру без запятых:>";
    std::cin >> chislo;

    std::cout << "Введенное число :>" << chislo / 10 << "." << chislo % 10;
}

void Task2() {
    int chislo;
    std::cout << "Введите число с дробной частью в 2 цифры без запятых:>";
    std::cin >> chislo;

    std::cout << "Введенное число :>" << chislo / 100 << "." << chislo % 100;
}

void Task2_0() {
    int chislo;

    std::cout << "Введите число:>";
    std::cin >> chislo;

    if (chislo > 10) {
        std::cout << "Число больше 10";
    }
    else {
        std::cout << "Число меньше или равно 10";
    }
}

void Task2_1() {
    int chislo;
    std::cout << "Введите число с дробной частью в 2 цифры без запятых:> ";
    std::cin >> chislo;

    //X.ZZ or X.YZ
    //X - digit to integer part
    //Y - potential loosing zero (Y=Z if Y = [1..9])
    //Z - digit to fractional part

    if (chislo % 100 < 10) {
        std::cout << "Введенное число :> " << chislo / 100 << ".0" << chislo % 100;
    }
    else {
        std::cout << "Введенное число :> " << chislo / 100 << "." << chislo % 100;
    }
}

#include <cstring>

void Task2_2(int digitCount) {
    int chislo;
    std::cout << "Введите число с дробной частью :> ";
    std::cin >> chislo;
    int delitel = 1;

    for (int count = 0; count < digitCount; count++) {
        delitel *= 10;
    }

    int celoe = chislo / delitel;
    int fractal = chislo % delitel;

    char middle[100] = ".";

    int tempDelitel = delitel;
    int temp = fractal;
    int count = 1;
    while (fractal != 0)
    {
        if (temp <= (tempDelitel / 10 - 1)) {
            middle[count] = '0';
            count++;
        }
        else {
            break;
        }

        tempDelitel /= 10;
    }
    middle[count + 1] = 0;


    std::cout << "Введенное число :> " << celoe << middle << fractal;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    Task2_2(5);

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
