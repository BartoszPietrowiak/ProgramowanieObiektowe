#include<iostream>
#include<string>

#include "Samochod.h"
using namespace std;

Samochod::operator bool() const{
    if((this->model!="") && (this->pojemnosc_baku>0))
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Samochod::operator!() const{
    if((this->model!="") && (this->pojemnosc_baku>0))
    {
        return false;
    }
    else
    {
        return true;
    }
}
bool Samochod::operator <(const Samochod &samochod) const{
    return this->model < samochod.model;
}//const został użyty po to żeby wartość funkcji była stałą
Samochod::Samochod()
{
    model="Seicento";
    pojemnosc_baku=50;
    liczba_kilomterow=12000;
    poziom_paliwa=60;
}
Samochod::Samochod(string name,float pojemnosc):Samochod()
{
    model=name;
    pojemnosc_baku=pojemnosc;
}
void Samochod::dodaj_poz()
{
    float poziom;
    cout<<"Zmiana poziomu paliwa"<<endl;
    cin>>poziom;
    poziom_paliwa=poziom;
}
void Samochod::dodaj_km(unsigned int km)
{
    liczba_kilomterow+=km;
}
void Samochod::ile_paliwa()
{
    float wynik=pojemnosc_baku*poziom_paliwa/100;
    cout<<"Samochod ma "<<wynik<<" l paliwa."<<endl;
}
float Samochod::odczytaj_pojemnosc_baku()
const{
    return this->pojemnosc_baku;
}
Samochod Samochod::operator,(Samochod &samochod)
{
    Samochod tmp;
    tmp.liczba_kilomterow=samochod.liczba_kilomterow;
    tmp.model=samochod.model;
    tmp.poziom_paliwa=samochod.poziom_paliwa;
    tmp.pojemnosc_baku=samochod.pojemnosc_baku;
    return tmp;
}
Samochod Samochod::operator|=(Samochod &samochod)
{
    this->liczba_kilomterow|=samochod.liczba_kilomterow;
    return *this;
}