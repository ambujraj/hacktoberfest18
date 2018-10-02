#include <iostream>
#include <cmath>

bool perfect_square(int num)
{
    float temp = sqrt(num);

    if (temp - (int)sqrt(num) == 0)
        return true;

    else return false;
}

int main()
{
    std::cout << "Enter a number to test!: ";
    int num;
    std::cin >> num;
    
    if (perfect_square(num))
        std::cout << num << " is a perfect square!" << std::endl;
    else std::cout << num << " is not a perfect square!" << std::endl;
}

