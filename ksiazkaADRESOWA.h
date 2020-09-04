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
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();

};
#endif
