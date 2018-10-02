#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int no_comp=0;	
void merge(int ar[],int larr[],int lsize,int rarr[],int rsize)
{
	int i=0,j=0,k=0;
	while(i<lsize && j<rsize)
	{
		if(larr[i]<rarr[j])
		{
			no_comp++;
			ar[k]=larr[i];
			k++;
			i++;
		}
		else
		{
			no_comp++;
			ar[k]=rarr[j];
			k++;
			j++;
		}
	}
	while(i<lsize)
	{
		ar[k]=larr[i];
		i++;
		k++;
	}
	while(j<rsize)
	{
		ar[k]=rarr[j];
		k++;
		j++;
	}
}

void merge_sort(int ar[],int size)
{
	int mid=size/2;
	if(mid<1)
		return;
		
	int lsize=mid;
	int rsize=size-mid;
	int larr[lsize];
	int rarr[rsize];
	for(int i=0;i<mid;i++)
	{
		larr[i]=ar[i];
	}
	for(int i=0, j=mid;j<size;j++,i++)
	{
		rarr[i]=ar[j];
	}
	merge_sort(larr,lsize);
	merge_sort(rarr,rsize);		
	merge(ar,larr,lsize,rarr,rsize);
}

int main()
{
	int size,temp,min;
	cout<<"\n Size of array \t No. of comparisions";

//	100 times different array to sort

	for(int m=0;m<100;m++)
	{
        no_comp=0;
//   size of array is also random between 1000
		size=rand()%971+30;
		cout<<"\n\t"<<size; 
		int ar[size];
		for(int i=0;i<size;i++)
    	    ar[i]=rand()%10;
		merge_sort(ar,size);
		cout<<"\t\t"<<no_comp;
	}
    getch();	
}
