#include<iostream>
using namespace std;

int reverse(int num)
{
    static int temp,sum;

    if(num>0)
    {
        temp = num%10;
        sum = sum*10 + temp;

        reverse(num/10);
    }
    else
    {
        return sum;
    }
}

int main()
{
    int num,rev;

   /* Taking input. */

    cout<<"Enter number:";
    cin >> num;

    /* Called reverse function .*/

    rev = reverse(num);

    cout << "Reverse of a input number is " << rev;
    return 0;
}


