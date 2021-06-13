#include "LISTPARENT.h"


address_parent alokasi(infotype_parent x){
    address_parent P = new elmlist_parent;
    info(P)= x;
    next(P)=NULL;
    return P;
}
void createList(List_parent &L){
    first(L)=NULL;
    last(L)=NULL;

}
void insertFirst(List_parent &L, address_parent P){
    next(last(L))=P;
    next(P)=first(L);
}
void insertAfter(List_parent &L, address_parent Prec, address_parent P){
    next(P)=next(Prec);
    next(Prec)=P;
}
void insertLast(List_parent &L, address_parent P){
    next(last(L))= P;
    next(P)= first(L);
    last(L)=P;
}
void deleteFirst(List_parent &L, address_parent &P){
    first(L)= next(first(L));
    next(last(L))= first(L);
    next(P)=NULL;
}
void deleteLast(List_parent &L, address_parent &P){
    address_parent Q;
    Q = first(L);
    while (next(next(Q))!=first(L)){
        Q = next(Q);
    }
    last(L) = Q;
    next(Q) = first(L);
    next(P) = NULL;
}
void deleteAfter(List_parent &L, address_parent Prec, address_parent &P){
    P = next(Prec);
    next(Prec) = next(P);
    next(P) = NULL;

}

address_parent searchList(List_parent L, infotype_parent x){
    address_parent P;
    P = first (L);
    while ( info (P) != x && next(P) != NULL){
        P = next(P);
    if (info (P) = x){
        return P;
    }else{
        return NULL;
        }
    }
}
void showList(List_parent L){
    address_parent P = first(L);
    while ( next (P) != NULL){
        cout<<(info(P));
        P = next(P);
    }
    cout<<(info(P));
}

