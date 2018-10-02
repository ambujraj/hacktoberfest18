// Implementation of Bubble Sort in C++ using array as data structure

#include <iostream>
using namespace std;

int main()
{ int array[50], i, j, temp;
  cout<<"Input the number of array elements";
  cin>>n;
  cout<<"Input the array elements";
  for(i=0; i<n; i++) 
    cin>>array[i];
  
  for(i=0; i<n-1; i++)
  { for(j=0; j<n-i-1; j++)
    { if(array[j] > array[j+1]
      { temp = array[j+1];
        array[j+1] = array[j];
        array[j] = temp;
      }
    }
  }
  
  cout<<"The sorted array is";
  for(i=0; i<n; i++) 
    cout<<array[i]<<" ";
  
  return 0;
}  
