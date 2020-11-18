#include "PlikTekstowy.h"
/*
bool PlikTekstowy::czyPlikJestPusty()
{
    fstream plikTekstowy;
    plikTekstowy.seekg(0, ios::end);
    //plikTekstowy.open(pobierzNazwePliku().c_str(), ios::app);
    if (plikTekstowy.tellg() == 0)
        return true;
    else
        return false;
}
*/
    bool PlikTekstowy::czyPlikJestPusty()
    {
        bool pusty = true;
        fstream plikTekstowy;
        plikTekstowy.open(pobierzNazwePliku().c_str(), ios::app);

        if (plikTekstowy.good() == true)
        {
            plikTekstowy.seekg(0, ios::end);
            if (plikTekstowy.tellg() != 0)
                pusty = false;
        }

        plikTekstowy.close();
        return pusty;
    }
string PlikTekstowy::pobierzNazwePliku()
{
    return NAZWA_PLIKU;
}
