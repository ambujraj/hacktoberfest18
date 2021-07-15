#include "header.h"

//PSDA4-0

int main()
{
    List L;
    address P;
    CreateList(&L);
    insVFrist(&L,0);
    insVFrist(&L,1);
    insVLast(&L,2);
    insVLast(&L,3);
    insVLast(&L,4);
    insVLast(&L,5);
    PrintInfo(L);
    DelFirst(&L,&P);
    InversList(&L);
    PrintInfo(L);
    DelAll(&L);

    return 0;
}
