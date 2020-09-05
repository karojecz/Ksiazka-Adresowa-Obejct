#include <iostream>
#include <fstream>
#include <windows.h>
#include <vector>
#include <algorithm>
#include <sstream>
#include "ksiazkaADRESOWA.h"
/* MADE WITH LOVE */

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa("uzytkownicy.txt");
    //ksiazkaAdresowa.wczytajUzytkownikowZPliku();
    //ksiazkaAdresowa.rejestracjaUzytkownika();
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
}
