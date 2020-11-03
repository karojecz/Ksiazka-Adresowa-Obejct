#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include "uzytkownikManager.h"


/* MADE WITH LOVE */

using namespace std;

class KsiazkaAdresowa
{

    UzytkownikMenadzer uzytkownikMenadzer;
public:
   // KsiazkaAdresowa(string nazwaPlikuZUzytkownikami,string nazwaPlikuZAdresatami)
   // :uzytkownikMenadzer(nazwaPlikuZUzytkownikami,nazwaPlikuZAdresatami)
   KsiazkaAdresowa(string nazwaPlikuZUzytkownikami):uzytkownikMenadzer(nazwaPlikuZUzytkownikami)
    {
        uzytkownikMenadzer.wczytajUzytkownikowZPliku();

    };

    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();

    void logowanieUzytkownika();
    void wylogowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void dodanieNowegoAdresata();
    void wyswietlWszystkichAdresatow();


};
#endif
