#include <iostream>
using namespace std;

// Complext class for complex numbers
class Complex {
    private:
      int re;
      int img;
    public:
    // Default Constructor 
      Complext() {
        re = 0;
        img = 0;
        }
     // Parameterised constructor
     Complext(int re, int img) {
     re = re;
     img = img;
     }
     
     // function to set the value for a object
     setValue(int re, int img) {
     re = re;
     img = img;
     }
    
    /* Overloading of addition operator 
    return type = Complex
    arguments = Complex Object
    */
     Complex operator + (const Complex &c) {
     /* here the object that is return in left side of operator (c1) is implicitely passed to the function
    so it can accessed directly and c2 is passed explicitely
    */
     Complex temp;
     // store the sum in temporary variable return it
     temp.re = re + c.re;
     temp.img = img + c.img;
     return temp;
     }
     
     display(const Complex &c) {
     cout>>c.re>>" +i">>c.img;
     }
  }
  
  int main() {
  Complex c1(4,5), c2(3,4), c3;
  cout>>"First complext number";
  display(c1);
  cout>>"second complex numer";
  display(c2);
  c3 = c1 + c2; //this evaluates to c1.operator+(c2) internally
  cout>>"sum of complext numbers";
  display(c3);
  }
  
