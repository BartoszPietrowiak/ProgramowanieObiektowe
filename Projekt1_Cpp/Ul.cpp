#include <iostream>
#include <string>
#include <cctype>
#include <regex>
#include <algorithm>
#include "Ul.h"
 
using namespace std;

Ul::Ul(int number,string pos, float avg,string name, float value)
    {
        bee_number=number;
        hive_position=pos;
        honey_avg=avg;
        apiary_name=name;
        honey_value=value;
    }

void Ul::start_bee_number()
    {
        int number;
        cout<<"Podaj ilosc pszczol: ";
        cin>>number;
        if (bee_number==-1)
        {
            bee_number=number;
        }
        else
        {
            cout<<"Wartosc startowa ilosci pszczol jest juz dodana!"<<endl;
        }
    }
    void Ul::change_bee_number()
    {
        int number;
        cout<<"Podaj ilosc pszczol: ";
        cin>>number;
        if (bee_number==-1)
        {
            cout<<"Wartosc startowa ilosci pszczol nie jest ustawiona!"<<endl;
        }
        else
        {
            if ((number<=100) && (number>=-100))
            {
                if (bee_number-number>=0)
                {
                    bee_number=bee_number+number;
                }
                else
                {
                    cout<<"Podana wartosc powoduje ujemna liczbe pszczol w ulu! Podaj inna wartosc."<<endl;
                }              
            }
        }
    }
    void Ul::print_bee_number()
    {
        if (bee_number>=0)
        {
            cout<<"Liczba pszczol wynosi: "<<bee_number<<endl;
        }
        else
        {
            cout<<"Liczba pszczol nie zostala podana!!"<<endl;
        }
        
    }
    void Ul::add_hive_pos()
    {
        string position;
        regex wzor("^[NS]([0-8][0-9](\\.[0-5]\\d){2}|90(\\.00){2})\\-[EW]((0\\d\\d|1[0-7]\\d)(\\.[0-5]\\d){2}|180(\\.00){2})$");
        cout<<"Podaj pozycje ula: N/Sstop.min.sek-E/Wstop.min.sek"<<endl;
        cin.ignore();
        getline(cin,position);
        position.erase(remove_if (position.begin(), position.end(), ::isspace), position.end());
        if(!(regex_match(position, wzor)))
        {
            cout<<"Podane wspolrzedne geograficzne nie spelniaja wymagan!"<<endl;
        }
        else
        {
            hive_position=position;
        }   
    }
    void Ul::print_hive_pos()
    {
        if(hive_position!="")
        {
            cout<<"Pozycja ula to: "<<hive_position<<endl;
        }
        else
        {
            cout<<"Wspolrzedne geograficzne ula nie zostaly podane!"<<endl;
        }
        
    }
    void Ul::add_honey_avg()
    {   
        float honey;
        cout<<"Podaj ilosc wyprodukowanego miodu w ciagu roku: ";
        cin>>honey;
        honey_avg=honey/12;
    }
    void Ul::print_honey_avg()
    {   
        if(honey_avg!=0)
        {
            cout<<"Srednia wartosc wyprodukowanego w ciagu roku miodu to: "<<honey_avg<<endl;
        }
        else
        {
            cout<<"Srednia wartosc miodu nie zostala podana!"<<endl;
        }
        
    }
    void Ul::add_apiary_name()
    {
        string name;
        cout<<"Podaj nazwe pasieki: ";
        cin>>name;
        if(isupper(name[0]))
        {
            apiary_name=name;
        }
        else
        {
            cout<<"Nazwa pasieki powinna zaczynac sie z duzej litery!"<<endl;
        }
        
    }
    void Ul::print_apiary_name()
    {
        if(apiary_name!="")
        {
            cout<<"Nazwa pasieki: "<<apiary_name<<endl;
        }
        else
        {
            cout<<"Nazwa pasieki nie zostala dodana!"<<endl;
        }
        
    }
    void Ul::add_honey_value()
    {
        float value;
        cout<<"Podaj cene miodu za litr: ";
        cin>>value;
        honey_value=honey_avg*12*value;
    }
    void Ul::print_honey_value()
    {   
        if(honey_value!=0)
        {
            cout<<"Wartosc roczna wyprodukowanego miodu wynosi: "<<honey_value<<" zl"<<endl;
        }
        else
        {
            cout<<"Wartosc miodu nie zostala podana!"<<endl;
        }
        
    }