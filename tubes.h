#ifndef TUBES_H_INCLUDED
#define TUBES_H_INCLUDED
#include <iostream>\
#define nil NULL
#define info(p) p->info
#define next(p) p->next
#define prev(p) p->prev
#define first(L) L.first
#define last(L) L.last


using namespace std;


struct infotype_Pengunjung
{
    int no_masuk;
    string nama;
};
struct infotype_Tempat
{
    int no_tempat;
    string nama_tempat;
    int tanggal; //masih bingung tipe bentukannya apa_
};
typedef struct elm_Pengunjung *adr_Pengunjung;
typedef struct elm_Tempat *adr_Tempat;
typedef struct elm_Visit *adr_Visit;
struct elm_Pengunjung
{
    infotype_Pengunjung info;
    adr_Pengunjung next;
    adr_Pengunjung prev;
    adr_Visit first_visit;
};
struct elm_Tempat
{
    infotype_Tempat info;
    adr_Tempat next;
    adr_Tempat prev;
};
struct elm_Visit
{
    adr_Tempat mengunjungi;
    adr_Visit next;
};
struct list_Pengunjung
{
    adr_Pengunjung first;
    adr_Pengunjung last;
};
struct list_Tempat
{
    adr_Tempat first;
    adr_Tempat last;
};

void createListPengunjung (list_Pengunjung &L);
void createListTempat (list_tempat &L);
adr_Pengunjung alokasiPengunjung (infotype_Pengunjung x);
adr_Tempat alokasiTempat(infotype_Tempat x);
void dealokasiPengunjung (adr_Pengunjung &p);
void dealokasiTempat (adr_Tempat &p);
void insertFirstPengunjung (list_Pengunjung &L, adr_Pengunjung p);
void insertLastTempat (list_Tempat &L, adr_Tempat p);
void insertTerurutRelasi (list_Pengunjung &L1, adr_Pengunjung p, int no_Tempat, list_Tempat &L2);
adr_Pengunjung deletePengunjung (list_Pengunjung &L, int no_pengunjung);
adr_Tempat deleteTempat ( list_Tempat &L, int no_tempat);
adr_Visit deleteVisit (list_Pengunjung &L, list_Tempat &L2);
void updateRelasi (list_Pengunjung &L, adr_Pengunjung p, int no_tempat, list_Tempat &L2);
void viewSekaligus ( list_Pengunjung L1, list_Tempat L2);
void viewPengunjung ( list_Pengunjung L1, list_Tempat L2);
void viewTempat( list_tempat L2, list_tempat L2);

#endif // TUBES_H_INCLUDED
