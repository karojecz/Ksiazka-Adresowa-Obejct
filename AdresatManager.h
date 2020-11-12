#ifndef ADRESATMANAGER_H
#define ADRESATMANAGER_H
#include <iostream>
#include <fstream>
#include <vector>
#include<cstdlib>
#include "Uzytkownik.h"
#include "Adresat.h"
#include "metodyPomocnicze.h"
#include "plikZAdresatami.h"
#include <cstdlib>
#include <windows.h>

using namespace std;

class AdresatManager
{
    //const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
     Adresat podajDaneNowegoAdresata();
     void wyswietlDaneAdresata(Adresat adresat);

 public:
    AdresatManager(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika)
    :plikZAdresatami(nazwaPlikuZAdresatami), ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika)
    {
        adresaci=plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
    }
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
};

#endif
