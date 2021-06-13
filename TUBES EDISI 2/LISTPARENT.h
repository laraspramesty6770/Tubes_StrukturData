#ifndef LISTPARENT_H_INCLUDED
#define LISTPARENT_H_INCLUDED

#include <iostream>
using namespace std;
//**ARTICLE DEFINED**//
#define firstArtikel(A) A.first
#define lastArtikel(A) A.last
#define nextArtikel(A) A->next
#define infoArtikel(A) A->info

typedef int infotype_Artikel;
typedef struct elmList_Artikel *address_Artikel
;

struct elmList_Artikel {
    infotype_Artikel info;
    address_Artikel next;
};
struct infotype_Artikel{
    string title,desc;
};

struct List_Artikel {
    address_Artikel first;
    address_Artikel last;
};


/** TIDAK PERLU MODIFIKASI */
void createListArtikel(List_Artikel &A);
void insertFirstA(List_parent &L, address_parent P);
void insertAfter(List_parent &L, address_parent Prec, address_parent P);
void insertLast(List_parent &L, address_parent P);
void deleteFirst(List_parent &L, address_parent &P);
void deleteLast(List_parent &L, address_parent &P);
void deleteAfter(List_parent &L, address_parent Prec, address_parent &P);


/** PERLU MODIFIKASI */
address_parent alokasi(infotype_parent x);
address_parent searchList(List_parent L, infotype_parent x);
void showList(List_parent L);




#endif // LISTPARENT_H_INCLUDED
