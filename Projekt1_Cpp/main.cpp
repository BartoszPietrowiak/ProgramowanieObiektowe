#include <iostream>
#include <string>
#include <cctype>
#include <regex>

#include "Ul.h"

using namespace std;


using namespace std;
int main(){
    Ul u1;
    cout<<"UL"<<endl;
    cout<<"Dzialania:"<<endl;
    cout<<"1.Dodaj starowa liczbe pszczol(tylko raz!)"<<endl;
    cout<<"2.Zmien liczbe pszczol."<<endl;
    cout<<"3.Wyswietl liczbe pszczol."<<endl;
    cout<<"4.Dodaj pozycje ula."<<endl;
    cout<<"5.Wyswietl pozycje ula."<<endl;
    cout<<"6.Wprowadz srednia wartosc wyprodukowanego miodu."<<endl;
    cout<<"7. Wyswietl srednia miesieczna produkcje miodu."<<endl;
    cout<<"8.Dodaj nazwe pasieki."<<endl;
    cout<<"9.Wyswietl nazwe pasieki."<<endl;
    cout<<"10.Podaj cene miodu za litr."<<endl;
    cout<<"11. Wyswietl wartosc wyprodukowanego w ciagu roku miodu."<<endl;
    cout<<"12.Zakoncz dzialanie programu."<<endl;
    int akcja=0;
    do
    {
        cout<<"Podaj dzialanie!"<<endl;
        cin>>akcja;
        switch(akcja)
        {
            case 1:
                u1.start_bee_number();
                break;
            case 2:
                u1.change_bee_number();
                break;
            case 3:
                u1.print_bee_number();
                break;
            case 4:
                u1.add_hive_pos();
                break;
            case 5:
                u1.print_hive_pos();
                break;
            case 6:
                u1.add_honey_avg();
                break;
            case 7:
                u1.print_honey_avg();
                break;
            case 8:
                u1.add_apiary_name();
                break;
            case 9:
                u1.print_apiary_name();
                break;
            case 10:
                u1.add_honey_value();
                break;
            case 11:
                u1.print_honey_value();
                break;
            case 12:
                return 0;
        }
    }
    while(akcja!=12);
    return 0;
}