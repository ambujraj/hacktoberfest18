#include<iostream>
#include<string>

using namespace std;

int main()
{
        string s;
        bool check;
        cin >> s;
        for(long long int i=0; i<s.size()/2; i++){

                if(s[i] == s[s.size()-1-i]){
                        check =true;
                }

                else{
                        check =false;
                        break;
                }

        }


        if(check == true){
                printf("Palindrome \n");
        }
        else{
                printf("Not a Palindrome \n");

        }
        return 0;
}

