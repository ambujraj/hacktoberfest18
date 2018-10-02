#include <iostream>

int factorial(int n)
{
    if (n <= 1)
        return 1;
    
    else return n * factorial(n - 1);
}

int main()
{
    std::cout << "Enter a number!: ";
    int num;
    std::cin >> num;
    std::cout << num << "! = " << factorial(num) << std::endl;

    return 0;
}