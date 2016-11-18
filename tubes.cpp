#include "tubes.h"

void createListPengunjung (list_Pengunjung &L)
{
    L.first = nil;
    L.last = nil;
}

void createListTempat (list_tempat &L)
{
    L.first = nil;
    L.last = nil;
}

adr_Pengunjung alokasiPengunjung (infotype_Pengunjung x)
{
    adr p = new elm_Pengunjung;
    info(p) = x;
    next(p) = nil;
    prev(p) = nil;
    return x;
}

adr_Tempat alokasiTempat(infotype_Tempat x)
{
    adr p = new elm_Tempat;
    info(p) = x;
    next(p) = nil;
    prev(p) = nil;
    return x;
}

void dealokasiPengunjung (adr_Pengunjung &p)
{
    delete p;
}

void dealokasiTempat (adr_Tempat &p)
{
    delete p;
}

void insertFirstPengunjung (list_Pengunjung &L, adr_Pengunjung p)
{
    if(L.First == nil)
    {
        L.first = p;
        L.last = p;
    }
    else
    {

    }
}

void insertLastTempat (list_Tempat &L, adr_Tempat p)
void insertTerurutRelasi (list_Pengunjung &L1, adr_Pengunjung p, int no_Tempat, list_Tempat &L2)
adr_Pengunjung deletePengunjung (list_Pengunjung &L, int no_pengunjung)
adr_Tempat deleteTempat ( list_Tempat &L, int no_tempat)
adr_Visit deleteVisit (list_Pengunjung &L, list_Tempat &L2)
void updateRelasi (list_Pengunjung &L, adr_Pengunjung p, int no_tempat, list_Tempat &L2)
void viewSekaligus ( list_Pengunjung L1, list_Tempat L2)
void viewPengunjung ( list_Pengunjung L1, list_Tempat L2)
void viewTempat( list_tempat L2, list_tempat L2)
