#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>
#include <map>
using namespace std;

string HELLO_MESSAGE = "Please enter roman number: ";
string RESULT        = "Result is";
string ERROR         = "There were an error in the input.";

string input;

map<char,int>mapa;

int roman_number(string S) {
    int result = 0;

    int last_digit = -1;
    for(int i = 0, len = S.length();i < len; ++i) {
        if(mapa[S[i]] == 0) return -1;

        int digit_value = mapa[S[i]];
        if(last_digit == -1) {
            result = digit_value;
            last_digit = digit_value;
        } else if(digit_value <= last_digit) {
            result += digit_value;
            last_digit = digit_value;
        } else { //IX CM
            result -= last_digit;
            result += (digit_value - last_digit);
            last_digit = digit_value;
        }
    }

    return result;
}

void init_map() {
    mapa['I'] = 1;
    mapa['V'] = 5;
    mapa['X'] = 10;
    mapa['L'] = 50;
    mapa['C'] = 100;
    mapa['D'] = 500;
    mapa['M'] = 1000;
}

int main() {
    cout << HELLO_MESSAGE;
    cin >> input;
    init_map();
    int result = roman_number(input);
    if(result == -1) {
        cout << ERROR;
    } else {
        cout << RESULT << " " << result << endl;
    }
    return 0;
}
