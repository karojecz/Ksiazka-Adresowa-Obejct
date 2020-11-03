
#include "ksiazkaADRESOWA.h"
#include <windows.h>
#include "uzytkownikManager.h"



void KsiazkaAdresowa::rejestracjaUzytkownika()
{
    uzytkownikMenadzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow()
{
    uzytkownikMenadzer.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::logowanieUzytkownika()
{
    uzytkownikMenadzer.logowanieUzytkownika();
    uzytkownikMenadzer.wczytajAdresatowZalogowanegoUzytkownikaZPliku();
}
void KsiazkaAdresowa::dodanieNowegoAdresata()
{
    uzytkownikMenadzer.dodajAdresata();
}
void KsiazkaAdresowa::wylogowanieUzytkownika()
{
    uzytkownikMenadzer.wylogowanieUzytkownika();
}
void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenadzer.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    uzytkownikMenadzer.wyswietlWszystkichAdresatow();
}
