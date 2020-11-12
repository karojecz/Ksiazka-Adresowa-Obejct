#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include "UzytkownikManager.h"
#include "AdresatManager.h"


/* MADE WITH LOVE */

using namespace std;

class KsiazkaAdresowa
{

    UzytkownikMenadzer uzytkownikMenadzer;
    AdresatManager *adresatmanager;
    const string NAZWA_PLIKU_Z_ADRESATAMI;

public:
   KsiazkaAdresowa(string NAZWAPLIKUZUZYTKOWNIKAMI,string NAZWAPLIKUZADRESATAMI)
   :uzytkownikMenadzer(NAZWAPLIKUZUZYTKOWNIKAMI), NAZWA_PLIKU_Z_ADRESATAMI(NAZWAPLIKUZADRESATAMI)
    {
    adresatmanager=NULL;
    };
    ~KsiazkaAdresowa()
    {
        delete adresatmanager;
        adresatmanager=NULL;
    }
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();

    void logowanieUzytkownika();
    void wylogowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void dodanieNowegoAdresata();
    void wyswietlWszystkichAdresatow();


};
#endif
