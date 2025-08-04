#include <iostream>

int main()
{
    int price = 100;
    int delivery = 20;
    int discount = 10;
    int fullPrice = price + delivery - discount;

    std::cout << "===================\n";
    std::cout << "Кальклятор полной истоимости товара\n";
    std::cout << "===================\n";
    std::cout << "Стоимость без доставки и скидки: +" << price << "\n";
    std::cout << "Доставка: +" << delivery << "\n";
    std::cout << "Скидка: -" << discount << "\n";
    std::cout << "-------------------\n";
    std::cout << "Полная стоимость товара: " << fullPrice << "\n";
}