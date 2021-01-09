#include<iostream>
#include<string>

using namespace std;

class Samochod{
    private:
    float pojemnosc_baku;
    float poziom_paliwa;
    unsigned int liczba_kilomterow;
    string model;
    public:
    Samochod();
    Samochod(string name,float pojemnosc);
    void dodaj_poz();
    void dodaj_km(unsigned int km);
    void ile_paliwa();
    float odczytaj_pojemnosc_baku() const;
    operator bool() const;
    bool operator!() const;
    friend ostream& operator << (ostream&os, const Samochod &samochod);
    //cialo funkcji zaprzyjaznionej nie musi byc w pliku klasy
    bool operator <(const Samochod &samochod) const;
    friend void operator++(Samochod &samochod);
    Samochod operator,(Samochod&samochod);
    Samochod operator|=(Samochod &samochod);

};