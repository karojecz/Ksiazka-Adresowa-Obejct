#ifndef UZYTKOWNIKMANAGER_H
#define UZYTKOWNIKMANAGER_H

#include <iostream>
#include <fstream>
#include <vector>
#include "Uzytkownik.h"
#include <windows.h>
#include <sstream>
#include "plikZUzytkownikami.h"
#include "metodyPomocnicze.h"
#include "Adresat.h"
#include "plikZAdresatami.h"


using namespace std;

class UzytkownikMenadzer
{


    vector <Uzytkownik> uzytkownicy;
     vector <Adresat> adresaci;

    Uzytkownik podajDaneNowegoUzytkownika();
    Adresat podajDaneNowegoAdresata();
   int  pobierzIdNowegoUzytkownika();
   bool czyIstniejeLogin(string login);

   PlikZUzytkownikami plikZUzytkownikami;
   PlikZAdresatami plikZAdresatami;
   void wyswietlDaneAdresata(Adresat adresat);
   int idZalogowanegoUzytkownika;

public:
   UzytkownikMenadzer(string nazwaPlikuZUzytkownikami):plikZUzytkownikami(nazwaPlikuZUzytkownikami){};
   //UzytkownikMenadzer(string nazwaPlikuZUzytkownikami,string nazwaPlikuZAdresatami)
   //:plikZUzytkownikami(nazwaPlikuZUzytkownikami),plikZAdresatami(nazwaPlikuZAdresatami){};

    int pobierzidZalogowanegoUzytkownika();
    //void ustawidZalogowanegoUzytkownika(int noweIdZalogowanegoUzytkownika);

  // UzytkownikMenadzer(string  nazwaPlikuZAdresatami):plikZAdresatami(nazwaPlikuZAdresatami){};
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void wczytajUzytkownikowZPliku();
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku();

    int logowanieUzytkownika();
    void wylogowanieUzytkownika();
    void zmianaHaslaZalogowanegoUzytkownika();
    void zapiszWszystkichUzytkownikowDoPliku();
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();

      //int idZalogowanegoUzytkownika;


};
#endif
