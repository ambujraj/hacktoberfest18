// Implementation of Bubble Sort in C++ using array as data structure

#include <iostream>
using namespace std;

int main()
{ 
  int array[100], i, j, temp;
 
  cout<<"Input the number of array elements: ";
  cin>>z;
 
  cout<<"Input the array elements: ";
  for(i=0; i<z; i++) //Input elements of the array
    {                               
      cin>>array[i];
      cout<<" ";
    }
 
  for(i=0; i<z; i++)
    { 
      for(j=0; j<z-i-1; j++)
          {
            if(array[j] > array[j+1] 
                { 
                   temp = array[j+1];.  //Swaps the elements
                   array[j+1] = array[j];
                   array[j] = temp;
                }
          }
    }
  
  cout<<"The sorted array is: ";
  for(i=0; i<z; i++) 
    cout<<array[i]<<" "; //Displays the sorted array
  
  return 0;
}  
