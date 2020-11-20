#include "Adresat.h"

    void Adresat::ustawId(int noweId)
    {
        if (noweId>=0)
        id=noweId;
        cout<<"o";
    }
        void Adresat::ustawIdUzytkownika(int noweIdUzytkownika)
    {
        if (noweIdUzytkownika>=0)
        idUzytkownika=noweIdUzytkownika;
    }
    void Adresat::ustawImie(string NoweImie)
    {
        imie=NoweImie;
    }
    void Adresat::ustawNazwisko(string NoweNazwisko)
    {
        nazwisko=NoweNazwisko;
    }
    void Adresat::ustawNumerTelefonu(string NowyNumerTelefonu)
    {
        numerTelefonu=NowyNumerTelefonu;
    }
    void Adresat::ustawAdres(string NowyAdres)
    {
        adres=NowyAdres;
    }
    void Adresat::ustawEmail(string NowyEmail)
    {
        email=NowyEmail;
    }
/*
    void Adresat::ustawidOstatniegoAdresata(int noweidOstatniegoAdresata)
    {
        idOstatniegoAdresata=noweidOstatniegoAdresata;
    }
*/
    int Adresat::pobierzId()
    {
        return id;
    }
    int Adresat::pobierzIdUzytkownika()
    {
        return idUzytkownika;
    }
    string Adresat::pobierzImie()
    {
        return imie;
    }
    string Adresat::pobierzNazwisko()
    {
        return nazwisko;
    }
    string Adresat::pobierzNumerTelefonu()
    {
        return numerTelefonu;
    }
    string Adresat::pobierzEmail()
    {
        return email;
    }
    string Adresat::pobierzAdres()
    {
        return adres;
    }
/*
    int Adresat::pobierzidOstatniegoAdresata()
    {
        return idOstatniegoAdresata;
    }

*/
