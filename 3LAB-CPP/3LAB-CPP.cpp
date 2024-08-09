#include <iostream>
#include <windows.h>
#include <string>
#include <cstdlib>
#include <ctime>
int main()
{
    char str[80];
    int k, a, i, c, v;
    a = 0;
    c = 0;
    v = 0;
    std::string stroka = "";
    std::string q[100];
    setlocale(0, "Russian");
    SetConsoleCP(1251);
    std::cout << "Введите предложение\n";
    std::cin.getline(str, 80);
    std::cout << "Введите количество символов\n";
    std::cin >> k;
    for (i = 0; i < 79; i++) {
        if (str[i] != ' ' && str[i] != '.')
        {
            a++;
            stroka += str[i];
        }
        else
        {
            if (a < k) {
                q[c++] = stroka;
                a = 0;
                stroka = "";
            }
            else
            {
                a = 0;
                stroka = "";
            }
        }
    }
    std::cout << "Полученная строка:";
    for (int v = 0; v < c; v++) {
        std::cout << " ";
        if (q[v] != "") {
            std::cout << q[v];
        }
    }
}
