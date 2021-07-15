# include <iostream>
using namespace std;

class Recursion
{
    public:
        static void recursivePrint(int count)
        {
            if(count>0 && count<=26)
            {
                if(count == 1)
                {
                    cout << "z\n";
                }
                else
                {
                    for(int i=count; i>0; i--)
                    {
                        cout << (char)(122+i-count) << " ";
                    }
                    cout << "\n" ;
                    recursivePrint(--count);
                }
            }
        }
};

int main()
{
    Recursion::recursivePrint(5);
    return 0;
}