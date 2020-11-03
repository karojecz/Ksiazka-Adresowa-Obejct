#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H
#include <iostream>
#include <fstream>
#include <vector>
#include<cstdlib>
#include "Uzytkownik.h"
#include "Adresat.h"
#include "metodyPomocnicze.h"
#include <cstdlib>
#include <windows.h>



using namespace std;

class PlikZAdresatami
{

    Adresat adresat;

    vector <Adresat> adresaci;
    int idOstatniegoAdresata;
    string daneJednegoAdresataOddzielonePionowymiKreskami;
    //const string nazwaPlikuZAdresatami;
     bool czyPlikJestPusty();
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);

    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami();
    string daneOstaniegoAdresataWPliku;
    //string daneAdresataOddzielonePionowymiKreskami;

public:



    void dopiszAdresataDoPliku(Adresat adresat);
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);

    int pobierzidOstatniegoAdresata();

    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami();
    void wylogowanie();



};
#endif
