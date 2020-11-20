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
    //int idEdytowanegoAdresata;
    string liniaZDanymiAdresataOddzielonePionowymiKreskami;
     Adresat podajDaneNowegoAdresata();
     void wyswietlDaneAdresata(Adresat adresat);
     int podajIdWybranegoAdresata();
     void zaktualizujDaneWybranegoAdresata(Adresat adresat);
     string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);
     char wybierzOpcjeZMenuEdycja();
    void  wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);

 public:
    AdresatManager(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika)
    :plikZAdresatami(nazwaPlikuZAdresatami), ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika)
    {
        adresaci=plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(idZalogowanegoUzytkownika);
    }
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void edytujAdresata();
    int usunAdresata();
    void wyszukajAdresatowPoNazwisku();
    void wyszukajAdresatowPoImieniu();
    //int pobierzIdEdytowanegoAdresata();
    //string pobierzLiniaZDanymiAdresataOddzielonePionowymiKreskami();
};

#endif
