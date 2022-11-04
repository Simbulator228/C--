#include <iostream>

int factorial(int);
int stupid_factorial(int);



int main() {
    int num;
    std::cin >> num;
    int result = factorial(num);
    std::cout << "Factorial of " << num << " is " << result << std::endl;
    result = stupid_factorial(num);
    std::cout << "Stupid factorial is " << num << " is " << result << std::endl;
    return 0;
}

int factorial (int num)
{
    if (num>1)
        return num * factorial(num-1);
    return 1;

}

int stupid_factorial(int num)
{
    if (num == 1)
        return 1;
    int counter = 2, new_num = 1;
    while (num + 1 != counter)
    {
        new_num *= counter;
        counter ++;
    }
    return new_num;
}

