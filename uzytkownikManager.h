#ifndef UZYTKOWNIKMANAGER_H
#define UZYTKOWNIKMANAGER_H

#include <iostream>
#include <fstream>
#include <vector>
#include "Uzytkownik.h"
#include <windows.h>
#include <sstream>
#include "plikZUzytkownikami.h"


using namespace std;

class UzytkownikMenadzer
{
    int idZalogowanegoUzytkownika;
    vector <Uzytkownik> uzytkownicy;

    Uzytkownik podajDaneNowegoUzytkownika();
   int  pobierzIdNowegoUzytkownika();
   bool czyIstniejeLogin(string login);

   PlikZUzytkownikami plikZUzytkownikami;

public:
    UzytkownikMenadzer(string nazwaPlikuZUzytkownikami):plikZUzytkownikami(nazwaPlikuZUzytkownikami){};
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void wczytajUzytkownikowZPliku();
};
#endif
