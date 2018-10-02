// Implementation of heap sort algorithm using an array as data structure

#include <iostream>
#include <stdio>

using namespace std;

void heapsort(int[], int);
void heapify(int[], int);
void adjust(int[], int);

int main()
{ int n, i, array[50];
  cout<<"enter the number of array elements";
  cin>>n;
  cout<<"enter the array elements";
  for(i=0; i<n; i++)
    cin>>array[i];
  
  heapsort(array,n);
  
  cout<<"the sorted array is";
  for(i=0; i<n; i++)
    cout<<array[i]<<"\t";
  
  return 0;
}

void heapsort(int array[], int n)
{ int i, t;
  heapify(array, n);
  for(i=n-1; i>0; i--)
  { t = array[0];
    array[0] = array[i];
    array[i] = t;
    adjust(array, i);
  }
}

void heafify(int array[], int n)
{ int k, i, j, item;
  for(k=1; k<n; k++)
  { item = array[k];
    i = k;
    j = (i-1)/2;
    while((i>0)&&(item>array[j]))
    { array[i] = array[j];
      i = j;
      j = (i-1)/2;
    }
      array[i] = item;
  }
}

void adjust(int array[], int n)
{ int i,j,item;
  j=0;
  item = a[j];
  i = 2*j+1;
  while(i <= n-1)
  { if(i+1 <= n-1)
      if(array[i] < array[i+1]
      i++;
    if(item < array[i])
    { array[j] = array[i];
      j = i;
      i = 2*j +1;
    }
    else
      break;
  }
  array[j] = item;
}

