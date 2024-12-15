#include <iostream>
#include <string>

int main() {
    // имя пользоваетля
    std::string name;
    // запрос имени
    std::cout << "Enter your name:" << std::endl;
    // ввод имени
    std::cin >> name;
    // вывод
    std::cout << "Hello world from " << name << std::endl;
    return 0;
}
