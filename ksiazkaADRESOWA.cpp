
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
    if (uzytkownikMenadzer.czyUzytkownikJestZalogowany())
    {
    adresatmanager= new AdresatManager(NAZWA_PLIKU_Z_ADRESATAMI,uzytkownikMenadzer.pobierzidZalogowanegoUzytkownika());
    }
}
void KsiazkaAdresowa::dodanieNowegoAdresata()
{
    adresatmanager->dodajAdresata();
}
void KsiazkaAdresowa::wylogowanieUzytkownika()
{
    uzytkownikMenadzer.wylogowanieUzytkownika();
    delete adresatmanager;
    adresatmanager=NULL;
    cout<<"Wylogowales sie"<<endl;
}
void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika()
{
    uzytkownikMenadzer.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow()
{
    adresatmanager->wyswietlWszystkichAdresatow();
}
void KsiazkaAdresowa::edytujAdresata()
{
    adresatmanager->edytujAdresata();
}
void KsiazkaAdresowa::usunAdresata()
{
    adresatmanager->usunAdresata();
}
