#include <iostream> // cout, cin
#include <cmath> // abs
#include <string> // string

int main() {
    std::string name;
    std::string surname;

    int age;
    int points;

    std::cout << "Введи данные, чепуха \n";
    std::cin >> name >> surname >> age >> points;

    std::cout << "Шансы получить " << points << " ыбаллов у " << name << " равны " << abs(age - 100) << "%" << std::endl;
}