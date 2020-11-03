#ifndef PLIKZUZYTKOWNIKAMI_H
#define PLIKZUZYTKOWNIKAMI_H
#include <iostream>
#include <fstream>
#include <vector>
#include<cstdlib>
#include "Uzytkownik.h"
#include "Adresat.h"
#include "metodyPomocnicze.h"

using namespace std;
class PlikZUzytkownikami
{
    //fstream plikTekstowy;
    const string nazwaPlikuZUzytkownikami;
    bool czyPlikJestPusty();
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    Uzytkownik pobierzDaneUzytkownika(string daneJednegoUzytkownikaOddzielonePionowymiKreskami);
public:

    PlikZUzytkownikami(string NAZWAPLIKUZUZYTKOWNIKAMI):nazwaPlikuZUzytkownikami(NAZWAPLIKUZUZYTKOWNIKAMI){};
     //bool czyPlikJestPusty(fstream plikTekstowy);
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);

   vector <Uzytkownik> wczytajUzytkownikowZPliku();
   vector <Uzytkownik> zapiszWszystkichUzytkownikowDoPliku();


};
#endif
