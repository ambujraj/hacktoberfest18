#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0
#define boolean unsigned char

#define Nil NULL
typedef int Infotype;
typedef struct tElmtList *address;
typedef struct tElmtList{
    Infotype Info;
    address Next;
}ElmtList;
typedef address List;
//typedef struct{
//    address First;
//}List;

//#define First(L) (L).First
//#define Next(P) (P)->Next
//#define Info(P) (P)->Info

//test list kosong
boolean ListEmpty(List L);
//pembuatan list kosong
void CreateList(List *L);
//manajemen memori
address Alokasi(Infotype X);
void DeAlokasi(address *P);
//pencarian sebuah elemen list
address Search(List L,Infotype X);
boolean FSeacrh(List L,address P);
address SearchPrec(List L,Infotype X);
//penambahan elemen
void insVFrist(List *L,Infotype X);
void insVLast(List *L,Infotype X);
//penghapusan elemen
void DelVFrist(List *L,Infotype *X);
void DelVLast(List *L,Infotype *X);
//penambahan elemen berdasarkan alamat
void InsertFirst(List *L,address P);
void InsertAfter(List *L,address P,address Prec);
void InsertLast(List *L,address P);
//penghapusan sebuah elemen
void DelFirst(List *L,address *P);
void DelP(List *L,Infotype X);
void DelLast(List *L,address *P);
void DelAfter(List *L,address *Pdel,address Prec);
//proses semua elemen list
void PrintInfo(List L);
int NbElmt(List L);
Infotype Max(List L);
address AdrMax(List L);
Infotype Min (List L);
address AdrMin(List L);
float Average (List L);
//proses terhadap list
void DelAll(List *L);
void InversList(List *L);
List FInversList (List L);
void CopyList (List *L1,List *L2);
List FCopyList (List L);
void CpAlokList(List Lin,List *Lout);
void KonKat (List L1,List L2,List *L3);
void KonKat1 (List *L1,List *L2,List *L3);
void PecahList (List *L1,List *L2,List L);

#endif // HEADER_H_INCLUDED
