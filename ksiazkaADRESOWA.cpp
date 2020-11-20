
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
bool KsiazkaAdresowa::logowanieUzytkownika()
{
    bool czyZalogowany=false;
    uzytkownikMenadzer.logowanieUzytkownika();
    if (uzytkownikMenadzer.czyUzytkownikJestZalogowany())
    {
    adresatmanager= new AdresatManager(NAZWA_PLIKU_Z_ADRESATAMI,uzytkownikMenadzer.pobierzidZalogowanegoUzytkownika());
    czyZalogowany=true;
    }
    return czyZalogowany;
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
char KsiazkaAdresowa::wybierzOpcjeZMenuGlownego()
{
    char wybor;

    system("cls");
    cout << "    >>> MENU  GLOWNE <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "9. Koniec programu" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}

char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika()
{
    char wybor;

    system("cls");
    cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Dodaj adresata" << endl;
    cout << "2. Wyszukaj po imieniu" << endl;
    cout << "3. Wyszukaj po nazwisku" << endl;
    cout << "4. Wyswietl adresatow" << endl;
    cout << "5. Usun adresata" << endl;
    cout << "6. Edytuj adresata" << endl;
    cout << "---------------------------" << endl;
    cout << "7. Zmien haslo" << endl;
    cout << "8. Wyloguj sie" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}
void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku()
{
    adresatmanager->wyszukajAdresatowPoNazwisku();
}
void KsiazkaAdresowa::wyszukajAdresatowPoImieniu()
{
    adresatmanager->wyszukajAdresatowPoImieniu();
}
