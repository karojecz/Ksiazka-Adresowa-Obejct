#include <iostream>
#include <fstream>
#include <windows.h>
#include <vector>
#include <algorithm>
#include <sstream>
#include "ksiazkaADRESOWA.h"
#include "plikZAdresatami.h"
#include "plikZUzytkownikami.h"
/* MADE WITH LOVE */

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("Uzytkownicy.txt", "Adresaci.txt");
    char wybor;
    bool czyUzytkownikJestZalogowany=false;

    while (true)
    {
           if (czyUzytkownikJestZalogowany == false)
        {
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuGlownego();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.rejestracjaUzytkownika();
                break;
            case '2':
                    czyUzytkownikJestZalogowany=ksiazkaAdresowa.logowanieUzytkownika();
                    break;
                case '9':
                        exit(0);
                        break;
                    default:
                            cout << endl << "Nie ma takiej opcji w menu." << endl << endl;
                            system("pause");
                            break;
                        }
        }
        else
        {
            wybor = ksiazkaAdresowa.wybierzOpcjeZMenuUzytkownika();

            switch (wybor)
            {
            case '1':
                ksiazkaAdresowa.dodanieNowegoAdresata();
                break;
            case '2':
                ksiazkaAdresowa.wyszukajAdresatowPoImieniu();
                break;
            case '3':
                ksiazkaAdresowa.wyszukajAdresatowPoNazwisku();
                break;
            case '4':
                ksiazkaAdresowa.wyswietlWszystkichAdresatow();
                break;
            case '5':
                ksiazkaAdresowa.usunAdresata();
                break;
            case '6':
                ksiazkaAdresowa.edytujAdresata();
                break;
            case '7':
                ksiazkaAdresowa.zmianaHaslaZalogowanegoUzytkownika();
                break;
            case '8':
                ksiazkaAdresowa.wylogowanieUzytkownika();
                czyUzytkownikJestZalogowany=false;
                break;
        }
    }
    }
    return 0;
}
