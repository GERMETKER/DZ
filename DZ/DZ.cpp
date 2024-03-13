#include <Windows.h>
#include <iostream>
void Ex1();
void Ex2();
void Ex3();
void Ex4();
void Ex5();
void Ex6();
void Ex7();
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int choose;
    std::cout << "Выберите номер задания, которое хотите проверить\n";
    std::cin >> choose;
    if (choose == 1)
    {
        Ex1();
    }
    else if (choose == 2)
    {
        Ex2();
    }
    else if (choose == 3)
    {
        Ex3();
    }
    else if (choose == 4)
    {
        Ex4();
    }
    else if (choose == 5)
    {
        Ex5();
    }
    else if (choose == 6)
    {
        Ex6();
    }
    else if (choose == 7)
    {
        Ex7();
    }
    return 0;
}
void Ex1()
{
    int sch1;
    int kolv1 = 0;
    for (int i = 100; i < 1000; i++)
    {
        sch1 = i;
        int n1, n2, n3;
        n1 = sch1 % 10;
        sch1 = sch1 / 10;
        n2 = sch1 % 10;
        sch1 = sch1 / 10;
        n3 = sch1 % 10;
        if (n1 == n2 || n1 == n3 || n2 == n3)
        {
            kolv1++;
        }
    }
    std::cout << kolv1 << "\n";
}
void Ex2()
{
    int sch;
    int kolv = 0;
    for (int i = 100; i < 1000; i++)
    {
        sch = i;
        int n1, n2, n3;
        n1 = sch % 10;
        sch = sch / 10;
        n2 = sch % 10;
        sch = sch / 10;
        n3 = sch % 10;
        if (n1 != n2 && n1 != n3 && n2 != n3)
        {
            kolv++;
        }
    }
    std::cout << kolv << "\n";
}
void Ex3()
{
    int numb;
    std::cout << "Введите любое число\n";
    std::cin >> numb;
    int numb2 = 0;
    int n = 0;
    int j = 1;
    while (numb > 0)
    {
        int chislo = numb % 10;
        if (chislo != 3 && chislo != 6)
        {
            numb2 = numb2 + (chislo * j);
            j = j * 10;
        }
        numb = numb / 10;
    }
    std::cout << numb2 << "\n";
}
void Ex4()
{
    int number;
    std::cout << "Введите число\n";
    std::cin >> number;
    int k = 0;
    for (int i = 1; i < number; i++)
    {
        if (number % (i * i) == 0 && number % (i * i * i) != 0)
        {
            std::cout << i << "\n";
            k++;
        }
    }
    if (k == 0)
    {
        std::cout << "Чисел, удовлетворящих условия, нет\n";
    }
}
void Ex5()
{
    int number1;
    std::cout << "Введите число\n";
    std::cin >> number1;
    int sum = 0;
    int number2 = number1;
    while (number2 > 0)
    {
        int n = number2 % 10;
        sum = sum + n;
        number2 = number2 / 10;
    }
    if (sum * sum * sum == number1 * number1)
    {
        std::cout << "Условие выполняется\n";

    }
    else
    {
        std::cout << "Условие не выполняется\n";
        std::cout << sum * sum * sum << " " << number1 * number1;
    }
}
void Ex6()
{
    int number;
    std::cout << "Введите число\n";
    std::cin >> number;
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            std::cout << i << "\n";
        }
    }
}
void Ex7()
{
    int number1 = 0, number2 = 0, max = 0;
    std::cout << "Введите первое число\n";
    std::cin >> number1;
    std::cout << "Введите второе число\n";
    std::cin >> number2;
    if (number1 > number2)
    {
        max = number1;
    }
    else if (number2 > number1)
    {
        max = number2;
    }
    else
    {
        max = number1;
    }
    for (int i = 1; i <= max; i++)
    {
        if (number1 % i == 0 && number2 % i == 0)
        {
            std::cout << i << "\n";
        }
    }
}
