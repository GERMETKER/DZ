#include <Windows.h>
#include <iostream>
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    /*
    //задание 1
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
    */
    /*
    //задание 2
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
    */
    //задание 3
    int numb;
    std::cout << "Введите любое число\n";
    std::cin >> numb;
    int numb2 = 0;
    while (numb > 0)
    {
        int n = numb;
        int j = 1;
        while (n > 0)
        {
            n = n / 10;
            j = j * 10;
        }
        int chislo = numb % 10;
        numb = numb / 10;
        if (chislo != 3 && chislo != 6)
        {
            numb2 = numb2 + chislo * j;
        }
    
    }
    std::cout << numb2 << "\n";


    return 0;
}