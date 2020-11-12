#include <iostream>
#include <fstream>
#include <windows.h>
#include <vector>
#include <algorithm>
#include <sstream>
#include "ksiazkaADRESOWA.h"
/* MADE WITH LOVE */

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");

   // ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    //ksiazkaAdresowa.rejestracjaUzytkownika();

   // ksiazkaAdresowa.logowanieUzytkownika();
   // ksiazkaAdresowa.dodanieNowegoAdresata();
    ksiazkaAdresowa.dodanieNowegoAdresata();
    ksiazkaAdresowa.wyswietlWszystkichAdresatow();
    ksiazkaAdresowa.wylogowanieUzytkownika();
    ksiazkaAdresowa.logowanieUzytkownika();
    ksiazkaAdresowa.wyswietlWszystkichAdresatow();
/*
        ksiazkaAdresowa.wylogowanieUzytkownika();
    ksiazkaAdresowa.logowanieUzytkownika();
    ksiazkaAdresowa.wyswietlWszystkichAdresatow();
    */
}
