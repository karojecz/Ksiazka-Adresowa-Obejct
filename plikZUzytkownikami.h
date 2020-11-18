#ifndef PLIKZUZYTKOWNIKAMI_H
#define PLIKZUZYTKOWNIKAMI_H
#include <iostream>
#include <fstream>
#include <vector>
#include<cstdlib>
#include "Uzytkownik.h"
#include "Adresat.h"
#include "metodyPomocnicze.h"
#include "plikTekstowy.h"

using namespace std;
class PlikZUzytkownikami : public PlikTekstowy
{

    const string NAZWA_PLIKU_Z_UZYTKOWNIKAMI;

    //bool czyPlikJestPusty();
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);
public:

    PlikZUzytkownikami(string nazwaPlikuZUzytkownikami):PlikTekstowy(nazwaPlikuZUzytkownikami){};
     //bool czyPlikJestPusty(fstream plikTekstowy);
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);

   vector <Uzytkownik> wczytajUzytkownikowZPliku();
   vector <Uzytkownik> zapiszWszystkichUzytkownikowDoPliku();


};
#endif
