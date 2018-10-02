#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int num, ran, att = 3;
    int lowest = 1, highest = 10;
    int range = (highest - lowest) + 1;
    while (true)
    {
        ran = lowest + rand() % range;
        while (att > 0)
        {
            cout << "Enter Your guess between 1 to 10 "
                 << "(" << att << " chances left): ";
            cin >> num;
            if (num == ran)
            {
                cout << "Awesome!! You guessed it right!";
                exit(0);
            }
            else
            {
                if (att == 1)
                {
                    char c;
                    cout << "You lost!!" << endl;
                    cout << "Wanna try again?(y/n): ";
                    cin >> c;
                    if (c == 'n')
                    {
                        exit(0);
                    }
                    else
                    {
                        att = 3;
                        continue;
                    }
                }
                else
                {
                    att--;
                    continue;
                }
            }
        }
    }
}
