//This program demonstates how to create a binary search function in c++.
#include<bits/stdc++.h>
using namespace std;

int binary_search(int sorted_list[], int low, int high, int element)
{
    if (high < low)
        return -1;
    int middle = low + (high - low)/2; 
    if (element < sorted_list[middle])
        return binary_search(sorted_list, low, middle-1, element);
    else if (element > sorted_list[middle])
        return binary_search(sorted_list, middle+1, high, element);
    else
        return middle;
}


int main(){
    int a[5] = {2 , 4 , 6 , 8 , 10};
    cout<<"6 found at index: "<<binary_search(a,0,4,6);
    return 0;
    
}
