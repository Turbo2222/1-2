#include <iostream>

struct person {
    int score;
    std::string name;
    int balance;
};

void new_balance(person& pers){
    pers.balance;
    

}

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
 
    std::cout << "Введите новый баланс владельца:";
    new_balance(p);
    std::cin >> p.balance;
    std::cout << "Ваш счет: " << p.name << "," << p.score << "," << p.balance;

    return 0;
}