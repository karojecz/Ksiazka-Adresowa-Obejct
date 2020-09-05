
#include "ksiazkaADRESOWA.h"
#include <windows.h>
#include "uzytkownikManager.h"

KsiazkaAdresowa::KsiazkaAdresowa()
{
    uzytkownikMenadzer.wczytajUzytkownikowZPliku();
}

void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenadzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenadzer.wypiszWszystkichUzytkownikow();
}

