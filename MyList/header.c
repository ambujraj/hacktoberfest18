#include "header.h"

//cek list kosong
boolean ListEmpty(List L){
    if(L==Nil){
        return true;
    }
    return false;
}

//pembuatan list kosong
void CreateList(List *L){
    *L=Nil;
}

//manajemen memori
address Alokasi(Infotype X){
    address P;
    P=(address)malloc(sizeof(ElmtList));
    if(P!=Nil){
        P->Info=X;
        P->Next=Nil;
        return P;
    }
    return Nil;
}
void DeAlokasi(address *P){
    //(*P)->Info=NULL;
    //printf("%d",(*P)->Info);
    free(*P);
}

//pencarian sebuah elemen list
address Search(List L,Infotype X){
    address P;
    P=L;
    while(P!=Nil){
        if(P->Info==X){
            return P;
        }else{
            P=P->Next;
        }
    }
    return Nil;
}
boolean FSeacrh(List L,address P){
    address P0;
    P0=L;
    while(P0!=Nil){
        if(P0==P){
            return true;
        }else{
            P0=P0->Next;
        }
    }
    return false;
}
address SearchPrec(List L,Infotype X){
    address P0,P1;
    P0=L;
    P1=Nil;
    while(P0!=Nil){
        if(P0->Info==X){
            return P1;
        }else{
            P1=P0;
            P0=P0->Next;
        }
    }
    return Nil;
}

//penambahan elemen
void insVFrist(List *L,Infotype X){
    address P=Alokasi(X);
    if(P!=Nil){
        InsertFirst(L,P);
    }
}
void insVLast(List *L,Infotype X){
    address P=Alokasi(X);
    if(P!=Nil){
        InsertLast(L,P);
    }
}

//penghapusan elemen
void DelVFrist(List *L,Infotype *X){
    address P;
    DelFirst(L,&P);
    *X=P->Info;
    P->Next=Nil;
    DeAlokasi(&P);
}
void DelVLast(List *L,Infotype *X){
    address P;
    DelLast(L,&P);
    *X=P->Info;
    DeAlokasi(&P);
}

//penambahan elemen berdasarkan alamat
void InsertFirst(List *L,address P){
    P->Next=*L;
    *L=P;
    //printf("%d ",P->Info);
}
void InsertAfter(List *L, address P, address Prec){
    P->Next=Prec->Next;
    Prec->Next=P;
}
void InsertLast(List *L,address P){
    address Last;
    if(*L==Nil){
        InsertFirst(L,P);
    }else{
        Last=*L;
        //printf("%d ",Last->Info);
        while(Last->Next!=Nil){
            Last=Last->Next;
        }
        Last->Next=Nil;
        InsertAfter(L,P,Last);
    }
}

//penghapusan sebuah elemen
void DelFirst(List *L,address *P){
    *P=*L;
    *L=(*L)->Next;
    (*P)->Next=Nil;
}
void DelP(List *L,Infotype X){
    address P0,P1;
    P0=*L;
    P1=Nil;
    while(P0->Info!= X){
        P1=P0;
        P0=P0->Next;
    }
    P1->Next=(P1->Next)->Next;
    P0->Next=Nil;
    DeAlokasi(&P0);
}
void DelLast(List *L,address *P){
    address Last, PrecLast;
    Last=*L;
    PrecLast=Nil;
    while (Last->Next!=Nil){
        PrecLast=Last;
        Last=Last->Next;
    }
    Last->Next=Nil;
    *P=Last;
    if(PrecLast==Nil){
        *L=Nil;
    }else{
        PrecLast->Next=Nil;
    }
}
void DelAfter(List *L, address *Pdel, address Prec){
    *Pdel=Prec->Next;
    Prec->Next=(Prec->Next)->Next;
    (*Pdel)->Next=Nil;
}

//proses semua elemen list
void PrintInfo(List L){
    address P;
    if(L==Nil){
        printf("List Kosong");
    }else{
        P=L;
        //printf("%d ",P->Info);
        while(P!=Nil){
            printf("%d ",P->Info);
            P=P->Next;
        }
    }
    puts("");
}
Infotype NbElmt(List L){
    address P;
    Infotype count=0;
    P=L;
    while(P->Next!=Nil){
        count++;
        P=P->Next;
    }
    return count;
}
Infotype Max(List L){
    address P;
    Infotype Max=0;
    P=L;
    Max=P->Info;
    while(P->Next!=Nil){
        if(Max>P->Info){
            Max=P->Info;
        }
        P=P->Next;
    }
    return Max;
}
address AdrMax(List L){
    address P,PMax;
    Infotype Max;
    P=L;
    PMax=L;
    Max=P->Info;
    while(P->Next!=Nil){
        if(Max>P->Info){
            Max=P->Info;
            PMax=P;
        }
        P=P->Next;
    }
    return PMax;
}
Infotype Min (List L){
    address P;
    Infotype Min=0;
    P=L;
    Min=P->Info;
    while(P->Next!=Nil){
        if(Min<P->Info){
            Min=P->Info;
        }
        P=P->Next;
    }
    return Min;
}
address AdrMin(List L){
    address P,PMin;
    Infotype Min;
    P=L;
    PMin=L;
    Min=P->Info;
    while(P->Next!=Nil){
        if(Min>P->Info){
            Min=P->Info;
            PMin=P;
        }
        P=P->Next;
    }
    return PMin;
}
float Average (List L){
    address P;
    Infotype Sum=0, Cnt=0;
    P=L;
    while(P->Next!=Nil){
        Sum+=P->Info;
        Cnt++;
        P=P->Next;
    }
    return (float)Sum/(float)Cnt;
}

//proses terhadap list
void DelAll(List *L){
    address P;
    P=*L;
    if(P!=Nil){
        while(P->Next!=Nil){
            DeAlokasi(&P);
            P=P->Next;
        }
        DeAlokasi(&P);
        printf("Done!\n");
    }else{
        printf("Empty!\n");
    }
}
void InversList(List *L){
    address P[100];
    int x=1;
    if(*L==Nil){
        printf("List kosong\n");
    }else{
        P[x]=*L;
        do{
            P[x+1]=(P[x])->Next;
            x++;
        }while(P[x]!=Nil);
        x--;
        *L=P[x];
        do{
            (P[x])->Next=P[x-1];
            x--;
        }while(x!=1);
        (P[x])->Next=Nil;
    }
}
List FInversList(List L){
    address P,P1;
    List L1;
    int z=0;
    if(L==Nil){
        L1=Nil;
    }else{
        P=L;
        L1=Nil;
        while(P!=Nil){
            P1=Alokasi(P->Info);
            if(P1==Nil){
                z=1;
            }
            InsertFirst(&L1,P1);
            P=P->Next;
        }
        if(z==1){
            DelAll(&L1);
            L1=Nil;
            return L1;
        }
        return L1;
    }
}
void CopyList(List *L1, List *L2){
    *L2=*L1;
}
List FCopyList(List L){
    address P0,P1;
    List Lt;
    int err=0;
    if(L=Nil){
        Lt=Nil;
    }else{
        P0=L;
        Lt=Nil;
        while(P0->Next!=Nil){
            P1=Alokasi(P0->Info);
            if(P1==Nil){
                err=1;
            }
            InsertLast(&Lt,P1);
            P0=P0->Next;
        }
        if(err==1){
            DelAll(&Lt);
            Lt=Nil;
        }
    }
    return Lt;
}
void CpAlokList(List Lin, List *Lout){
    address P0,P1;
    int err=0;
    if(Lin==Nil){
        *Lout=Nil;
    }else{
        P0=Lin;
        *Lout=Nil;
        while(P0!=Nil){
            P1=Alokasi(P0->Info);
            if(P1==Nil){
                err=1;
            }
            InsertLast(Lout,P1);
            P0=P0->Next;
        }
        if(err==1){
            DelAll(Lout);
            *Lout=Nil;
        }
    }
}
void KonKat(List L1, List L2, List *L3){
    address P,P1;
    int z=0;
    if(L1&&L2==Nil){
        *L3=Nil;
    }else{
        if(L1!=Nil){
            P=L1;
            *L3=Nil;
            while(P!=Nil){
                P1=Alokasi(P->Info);
                if(P1==Nil){
                    z=1;
                }
                InsertLast(&(*L3),P1);
                P=P->Next;
            }
        }else{
            *L3=Nil;
        }
        if(L2!=Nil){
            P=L2;
            while(P!=Nil){
                P1=Alokasi(P->Info);
                if(P1==Nil){
                    z=1;
                }
                InsertLast(&(*L3),P1);
                P=P->Next;
            }
        }
        if(z==1){
            DelAll(&L3);
            *L3=Nil;
        }
    }
}
void KonKat1(List *L1, List *L2, List *L3){
    address P,P1;
    int err=0;
    if(*L1&&*L2==Nil){
        *L3=Nil;
    }else{
        if(*L1!=Nil){
            P=*L1;
            *L3=Nil;
            while(P!=Nil){
                P1=Alokasi(P->Info);
                if(P1==Nil){
                    err=1;
                }
                InsertLast(&(*L3),P1);
                P=P->Next;
            }
        }else{
            *L3=Nil;
        }
        if(*L2!=Nil){
            P=*L2;
            while(P!=Nil){
                P1=Alokasi(P->Info);
                if(P1==Nil){
                    err=1;
                }
                InsertLast(&(*L3),P1);
                P=P->Next;
            }
        }
        if(err==1){
            DelAll(&L3);
            *L3=Nil;
        }
    }
    DelAll(&(*L1));
    DelAll(&(*L2));
}
void PecahList(List *L1, List *L2, List L){
    int x,i=0;
    address P,P1;
    x=NbElmt(L);
    P=L;
    if(i==Nil){
        *L1=Nil;
        *L2=Nil;
    }
    if(i==1){
        *L2=Nil;
    }
    while(i!=(x/2)){
        i++;
        P1=Alokasi(P->Info);
        InsertLast(&(*L1),P1);
        P=P->Next;
    }
    while (P != Nil){
        P1=Alokasi(P->Info);
        InsertLast(&(*L2),P1);
        P=P->Next;
    }
}
