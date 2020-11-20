#ifndef ADRESAT_H
#define ADRESAT_H

#include <iostream>

using namespace std;

class Adresat
{
    int id = 0, idUzytkownika = 0;
     string imie = "", nazwisko = "", numerTelefonu = "", email = "", adres = "";

public:
    void ustawId(int noweId);
    void ustawIdUzytkownika(int noweIdUzytkownika);
    void ustawImie(string imie);
    void ustawNazwisko(string NoweNazwisko);
    void ustawNumerTelefonu(string NowyNumerTelefonu);
    void ustawEmail(string NowyEmail);
    void ustawAdres(string NowyAdres);

   // void ustawidOstatniegoAdresata(int noweidOstatniegoAdresata);

    int pobierzId();
    int pobierzIdUzytkownika();
    string pobierzImie();
    string pobierzNazwisko();
    string pobierzNumerTelefonu();
    string pobierzEmail();
    string pobierzAdres();

   // int pobierzidOstatniegoAdresata();

};
#endif

