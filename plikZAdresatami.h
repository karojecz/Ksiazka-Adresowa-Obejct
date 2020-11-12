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
    const string NAZWA_PLIKU_Z_ADRESATAMI;
    int idOstatniegoAdresata;
    bool czyPlikJestPusty(fstream &plikTekstowy);
    string zamienDaneAdresataNaLinieZDanymiOddzielonymiPionowymiKreskami(Adresat adresat);

    Adresat pobierzDaneAdresata(string daneAdresataOddzielonePionowymiKreskami);
    int pobierzIdAdresataZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);
    int pobierzIdUzytkownikaZDanychOddzielonychPionowymiKreskami(string daneJednegoAdresataOddzielonePionowymiKreskami);

public:

    PlikZAdresatami(string nazwaPlikuZAdresatami):NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami){
    idOstatniegoAdresata=0;
    };

    bool dopiszAdresataDoPliku(Adresat adresat);
    vector <Adresat> wczytajAdresatowZalogowanegoUzytkownikaZPliku(int idZalogowanegoUzytkownika);
    int pobierzidOstatniegoAdresata();
};
#endif
