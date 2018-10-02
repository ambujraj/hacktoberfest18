// Importing the required libraries
#include <iostream> // for input and output
#include <string> // for using string related operations
#include <stack> // for importing the stack data structure

bool isPalindrome(std::string word) //Function using stack data structure to push in letters of the word and the reversing the word
{
    std::stack<char> temp;
    std::string reversed = "";
    for (char letter : word)
        temp.push(letter);
    
    while(!(temp.empty()))
    {
       reversed += temp.top();
       temp.pop();
    }

    if (reversed == word) // Checks if the reversed word is same as the actual word 
        return true;      // If it is palindrome, returns true
    
    else return false;  //Else returns false
}

int main()
{
    std::cout << "Enter a word!: ";
    std::string word;                     
    std::cin >> word;          //Inputs word as a string

    isPalindrome(word) ? std::cout << word << " is a palindrome!" : std::cout << word << " is not a palindrome!";
    std::cout << std::endl;
    
    return 0;
}
