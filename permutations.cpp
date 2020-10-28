#include <bits/stdc++.h>
#define PRINT_ARR(arr, sz) for(int i=0; i<sz; i++) cout<<arr[i]<<" "; cout<<endl;
using namespace std;

typedef long long ll;
typedef unsigned long long llu;

void permutation(int a[], int len, int sz){
    if(len == 1){
        PRINT_ARR(a, sz);
        return;
    }

    for(int i=0; i<len; i++){
        permutation(a, len-1, sz);

        if(len&1)
            swap(a[0], a[len-1]);
        else
            swap(a[i], a[len-1]);
    }
}

int main(){
    int a[] = {1, 2, 3, 4};
    int l = sizeof a / sizeof a[0];
    permutation(a, l, l);

    return 0;
}
