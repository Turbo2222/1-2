#include <iostream>

struct person {
    int score;
    std::string name;
    int balance;
};

int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    person p;
    std::cout << "Введите номер счета:";
    std::cin >> p.score;
    std::cout << "Введите имя владельца:";
    std::cin >> p.name;
    std::cout << "Введите баланс владельца:";
    std::cin >> p.balance;
    std::cout << "Введите новый баланс владельца;";
    std::cin >> p.balance;
    std::cout << p.name << "," << p.score << "," << p.balance;

    return 0;
}