#ifndef LISTCHILD_H_INCLUDED
#define LISTCHILD_H_INCLUDED
#include <iostream>

using namespace std;
//**KEYWORD**//
#define firstKey(L) L.first
#define nextKey(P) P->next
#define prevKey(P) P->prev
#define infoKey(P) P->info

typedef string infotype_key;
typedef struct elmList_key *address_key;

//-----KEYWORD DEFINED----//
struct elmList_key{
    infotype_key info;
    address_key next;
    address_key prev;
};
struct List_key{
    addres_key firstKey;
};

//**KEY FUNCTION**//
addres_key alokasi(infotype_key data);
void createList(List_key &L);
void Show(List_key L);
void insertFirst(List_key &L,addres_key P);
void insertAfter(addres_key Prec, addres_key P);
void insertLast(List_key &L,addres_child P);
void deleteFirst(List_key &L,addres_key&P);
void deleteAfter(addres_key Prec, addres_key &P);
void deleteLast(List_key &L, addres_child &P);
address SearchKey(List_key L,infotype_key data);

#endif // LISTCHILD_H_INCLUDED
