#include "LISTCHILD.h"
#include <iostream>
using namespace std;

addres_key alokasi(infotype_key data){
    address_key P = new elmList_key;
    infoKey(P)= data;
    nextKey(P)= NULL;
    prevKey(P)= NULL;
    return P;
}
void createList(List_key &L){
    firstKey(K)= NULL;
}
void Show(List_key L){
   address_key P;
   P =firstKey(L);
   while(nextKey(P)!=NULL){
        cout<<infoKey(P)<<endl;
        P=nextKey(P);
   }
   cout<<infoKey(P)<<endl;
}

void insertFirst(List_key &L,addres_key P){
    if(firstKey(L)== NULL){
         firstKey(L)= P
    }else{
            nextKey(P)= firstKey(L);
            prev(firstKey(L))= P;
            firstKey(L)= P;
    }
}
void insertAfter(addres_key Prec, addres_key P){
    nextKey(P)= nextKey(Prec);
    prevKey(nextKey(Prec))= P;
    nextKey(Prec)= P;
    prevKey(P)= Prec;
}
void insertLast(List_key &L,addres_child P){
    addres_key Q;
    Q = firstKey(L);
    while(nextKey(Q)!= NULL){
        Q = nextKey(Q);
    }
    nextKey(Q)= P;
    prevKey(P)= Q;
}
void deleteFirst(List_key &L,addres_key&P){
    P = firstKey(L);
    firstKey(L)= nextKey(P);
    nextKey(P)= NULL;
    prevKey(firstKey(L))= NULL;
}
void deleteAfter(addres_key Prec, addres_key &P){
    K = nextKey(Prec);
    nextKey(Prec)= nextKey(K);
    prevKey(nextKey(P))= Prec;
    nextKey(P)= NULL;
    prevKey(P)=NULL;

}
void deleteLast(List_key &L, addres_key &P){
    addres_key Q;
    Q = firstKey(L);
    while(nextKey(nextKey(Q))!= NULL){
            Q=nextKey(Q);
    }
    P=nextKey(Q);
    nextKey(Q)= NULL;
    prevKey(P)=NULL;

}
address_key SearchKey(List_key L,infotype_key data){
    addres_child P= firstKey(L);
    while(P !=NULL){
        if(infoKey(P)== data){
            return P;
        }
        P=nextKey(P);
    }
    return NULL;
    }
}
