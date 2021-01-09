
#include <iostream>
#include <string>
#include <cctype>
#include <regex>
#include <algorithm>
#include "Ul.h"
#include <utility>
 
using namespace std;

Ul::Ul():Logger(true),Stopper(), bee_number{nullptr} , hive_position{nullptr}, honey_avg{nullptr}, apiary_name{nullptr},honey_value{nullptr}
    {
        this->reset();
        this->log("Konstruktor");
    }
Ul::~Ul()
{   
    this->wyswietl();
    this->log("Destruktor");
    if (bee_number!=0)
    {
        delete []bee_number;
    }
    if (hive_position!=0)
    {
        delete hive_position;
    }
    if (honey_avg!=0)
    {
        delete []honey_avg;
    }
    if (apiary_name!=0)
    {
        delete apiary_name;
    }
    if (honey_value!=0)
    {
        delete []honey_value;
    }
}
Ul::Ul(const Ul &ful):Ul()
{
    bee_number = new int{0};
    hive_position = new string{0};
    honey_avg = new float{0};
    apiary_name = new string{0};
    honey_value = new float{0};
    bee_number= ful.bee_number;
    hive_position = ful.hive_position;
    honey_avg = ful.honey_avg;
    apiary_name=ful.apiary_name;
    honey_value=ful.honey_value;
    this->log("Konstruktor kopiujacy");
}
Ul::Ul(Ul &&ful):Ul()
{ 
    bee_number= ful.bee_number;
    hive_position = ful.hive_position;
    honey_avg = ful.honey_avg;
    apiary_name=ful.apiary_name;
    honey_value=ful.honey_value;
    this->log("Konstruktor przenoszacy");

}
Ul::Ul(const char * name):Ul()
{
    this->apiary_name =  new string{name};
    this->log("Konstruktor konwertujacy");
    
}
void Ul::start_bee_number()
    {
        this->start();
        this->log("Startowa liczba pszczol");
        int number;
        cout<<"Startowa wartosc pszczol wynosi:"<<endl;
        cin>>number;
       if (bee_number==0)
        {   
            bee_number= new int{0};
            *bee_number=number;
        }
        else
        {
            cout<<"Wartosc startowa ilosci pszczol jest juz dodana!"<<endl;
        }
        this->stop();
    }
    void Ul::change_bee_number()
    {
        this->start();
        this->log("Zmiana liczby pszczol");
        int number;
        cout<<"Podaj ilosc pszczol: ";
        cin>>number;
        if (bee_number==0)
        {
            cout<<"Wartosc startowa ilosci pszczol nie jest ustawiona!"<<endl;
        }
        else
        {
            if ((number<=100) && (number>=-100))
            {
                if (*bee_number-number>=0)
                {
                    *bee_number=*bee_number+number;
                }
                else
                {
                    cout<<"Podana wartosc powoduje ujemna liczbe pszczol w ulu! Podaj inna wartosc."<<endl;
                }              
            }
        }
        this->stop();
    }
    void Ul::print_bee_number()
    {
        this->start();
        this->log("Wyswietlenie liczby pszczol");
        if (bee_number == 0)
        {
            cout<< "Liczba pszczol nie zostala podana!!"<<endl;
        }
        else
        {
            cout<<"Liczba pszczol wynosi: "<< *bee_number <<endl;
        }
        this->stop();      
    }
    void Ul::add_hive_pos()
    {
        this->start();
        this->log("Dodanie pozycji ula");
        string position;
        regex wzor("^[NS]([0-8][0-9](\\.[0-5]\\d){2}|90(\\.00){2})\\-[EW]((0\\d\\d|1[0-7]\\d)(\\.[0-5]\\d){2}|180(\\.00){2})$");
        cout<<"Podaj pozycje ula: N/Sstop.min.sek-E/Wstop.min.sek"<<endl;
        cin.ignore();
        getline(cin,position);
        if(!(regex_match(position, wzor)))
        {
            cout<<"Podane wspolrzedne geograficzne nie spelniaja wymagan!"<<endl;
        }
        else
        {   
            hive_position = new string{""};
            *hive_position=position;
        }
        this->stop();   
    }
    void Ul::print_hive_pos()
    {
        this->start();
        this->log("Wyswietlenie pozycji ula");
        if(hive_position==0)
        {
            cout<<"Wspolrzedne geograficzne ula nie zostaly podane!"<<endl;
            cout<<"Pozycja ula to: "<<hive_position<<endl;
        }
        else
        {
            cout<<"Pozycja ula to: "<<*hive_position<<endl;
        }
        this->stop();
        
    }
    void Ul::add_honey_avg()
    {   
        this->start();
        this->log("Dodanie sredniej liczby miodu");
        float honey;
        cout<<"Podaj ilosc wyprodukowanego miodu w ciagu roku: ";
        cin>>honey;
        honey_avg = new float{0};
        *honey_avg=honey/12;
        this->stop();
    }
    void Ul::print_honey_avg()
    {   
        this->start();
        this->log("Wyswietlenie sredniej liczby pszczol");
        if(honey_avg==0)
        {
            cout<<"Srednia wartosc miodu nie zostala podana!"<<endl;
            cout<<"Srednia wartosc wyprodukowanego w ciagu roku miodu to: "<<honey_avg<<endl;
        }
        else
        {
            cout<<"Srednia wartosc wyprodukowanego w ciagu roku miodu to: "<<*honey_avg<<endl;
        }
        this->stop();
        
    }
    void Ul::add_apiary_name()
    {
        this->start();
        this->log("Dodanie nazwy pasieki");
        string name;
        cout<<"Podaj nazwe pasieki: ";
        cin>>name;
        if(isupper(name[0]))
        {   
            apiary_name = new string{0};
            *apiary_name=name;
        }
        else
        {
            cout<<"Nazwa pasieki powinna zaczynac sie z duzej litery!"<<endl;
        }
        this->stop();
        
    }
    void Ul::print_apiary_name()
    {
        this->start();
        this->log("Wyswietlenie nazwy pasieki");
        if(apiary_name==0)
        {
            cout<<"Nazwa pasieki nie zostala dodana!"<<endl;
        }
        else
        {
           cout<<"Nazwa pasieki: "<< *apiary_name<<endl;
        }
        this->stop();
        
    }
    void Ul::add_honey_value()
    {
        this->start();
        this->log("Dodanie wartosci miodu");
        float value;
        cout<<"Podaj cene miodu za litr: ";
        cin>>value;
        honey_value = new float{0};
        if ( honey_avg ==0)
        {
            cout<<"Srednia wyprodukwoana wartosc miodu nie zostala podana!"<<endl;
        }
        else
        {
            *honey_value=*honey_avg*12*value;
        }
        this->stop();
    }
    void Ul::print_honey_value()
    {
        this->start();   
        this->log("Wyswietlenie wartosci miodu");
        if(honey_value==0)
        {
            cout<<"Wartosc miodu nie zostala podana!"<<endl;
        }
        else
        {
            cout<<"Wartosc roczna wyprodukowanego miodu wynosi: "<<*honey_value<<" zl"<<endl;
        }
        this->stop();
        
    }