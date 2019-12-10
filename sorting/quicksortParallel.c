/**
 * Sorting algorithm of quicksort in parallel made with OpenMP
 * 	Author: Maycon Bruno de Jesus / (www.github.com/noobmanbr)
 * 	Version 1 10/2018
 */

#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

#define n 10000000

void quicksort(int array[n]);
void quicksortRec(int* array, int esq, int dir);
void swap(int array[n], int i, int j);
int* aleatorio(int* array);
void mostrar(int array[n]);

void quicksort(int* array) {
    #pragma omp parallel
    #pragma omp single 
    quicksortRec(array, 0, n-1);
}

void quicksortRec (int* array, int esq, int dir) {
    int i = esq, j = dir;
    int pivo = array[(dir+esq)/2];
    /* tentar paralelizar esse while */
    while (i <= j) {
        while (array[i] < pivo){
            i++;
        }
         
        while (array[j] > pivo){
            j--;
        } 
            
        if (i <= j) {
            swap(array, i, j);
            i++;
            j--;
        }  
    }

    #pragma omp task
    if (esq < j){
        quicksortRec(array, esq, j);
    }
    #pragma omp task
    if (i < dir){
        quicksortRec(array, i, dir);
    } 
        
}

void swap(int array[n], int i, int j) {
   int temp = array[i];
   array[i] = array[j];
   array[j] = temp;
}

//Make a array with random numbers
int* aleatorio(int* array) {
   //srand(time(NULL));
   for (int i = 0; i < n; i++) {
     
      array[i] = rand() % 1000;
   }
   return array;
}


//show the elements of the array
void mostrar(int array[n]) {
   printf("[ ");

   for (int i = 0; i < n; i++) {
      printf("%d ", array[i]);
   }

   printf("] \n");
}

int main() {
    printf("Quicksort Parallel made by Maycon Bruno\n");
    
    int* array = (int*)malloc(sizeof(int)*n);

    array = aleatorio(array);
    quicksort(array);
    //mostrar(array);
}

