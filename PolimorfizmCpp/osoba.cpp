#include <string>
#include "osoba.h"
#include <iostream>
#include <ctime>
using namespace std;

ostream& operator<<(ostream& os, const Osoba& s)
{
    if(s.name!=0)
    {
    os <<"Imie i nazwisko: "<<*s.name<<" "<<*s.surname<<endl<<"Data urodzenia: "<<*s.day<<" "<<*s.month<<" "<<*s.year<<" ."<<endl;
    return os;
    }
    else
    {
        os<<"Brak"<<endl;
        return os;
    }
    
}
Osoba::Osoba():name{nullptr},surname{nullptr},day{nullptr},month{nullptr},year{nullptr},adres{nullptr}
{
    this->adres= new Adres();
}
Osoba::~Osoba()
{
    if (name!=0)
    {
        delete name;
    }
    if (surname!=0)
    {
        delete surname;
    }
    if (day!=0)
    {
        delete []day;
    }
    if (month!=0)
    {
        delete []month;
    }
    if (year!=0)
    {
        delete []year;
    }
    delete adres;
}
Osoba::Osoba(Osoba &ful):Osoba()
{
    name= new string{0};
    surname= new string{0};
    day= new int{0};
    month = new int{0};
    year = new int{0};
    name= ful.name;
    surname = ful.surname;
    day = ful.day;
    month=ful.month;
    year=ful.year;
    adres=ful.adres;
}
Osoba::Osoba(Osoba &&ful):Osoba()
{ 
    name=ful.name;
    surname=ful.surname;
    day=ful.day;
    month=ful.month;
    year=ful.year;
    adres=ful.adres;
}
Osoba::Osoba(const char * name):Osoba()
{
    this->name =  new string{name};
}
    
void Osoba::set_names()
{
    name=new string{0};
    surname=new string{0};
    string name,surname;
    cout<<"Podaj imie"<<endl;
    cin>>name;
    cout<<"Podaj nazwisko"<<endl;
    cin>>surname;
    *this->name=name;
    *this->surname=surname;
}
void Osoba::print_names()
{
    cout<<"Imie: "<<*this->name<<endl;
    cout<<"Nazwisko: "<<*this->surname<<endl;
}
void Osoba::set_date()
{

    int day,month,year;
    this->day=new int{0};
    this->month=new int{0};
    this->year=new int{0};
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int curr_year = 1900 + ltm->tm_year;
    int curr_month = 1900 + ltm->tm_mon;
    int curr_day = 1900 + ltm->tm_mday;
    int err_disp=0;
    bool day_flag=0;
    bool date_flag=0;
    do {
            if (err_disp>0) std::cout<<"Podano bledna date!"<<std::endl;
            err_disp=0;
            do {
                if (err_disp>0) std::cout<<"Podano bledny rok!"<<std::endl;
                std::cout<<"Podaj rok urodzenia: ";
                std::cin>>year;
                err_disp++;
            } while(year>curr_year);
            err_disp=0;
            do {
                if (err_disp>0) std::cout<<"Podano bledny miesiac!"<<std::endl;
                std::cout<<"Podaj miesiac urodzenia: ";
                std::cin>>month;
                err_disp++;
            } while(month<1 ||month>12);
            err_disp=0;
            do {
                std::cout<<"Podaj dzien urodzenia: ";
                std::cin>>day;
                switch(month) {
                    case 1:
                    if(day>=1 &&day<=31) day_flag=1;
                    break;
                    case 2:
                    if(year%4==0 && year%100!=0) {
                        if(day>=1 && day<=29) day_flag=1;
                    }
                    else if(year%400==0) {
                        if(day>=1 && day<=29) day_flag=1;
                    }
                    else if(day>=1 && day<=28) day_flag=1;
                    break;
                    case 3:
                    if(day>=1 && day<=31) day_flag=1;
                    break;
                    case 4:
                    if(day>=1 && day<=30) day_flag=1;
                    break;
                    case 5:
                    if(day>=1 && day<=31) day_flag=1;
                    break;
                    case 6:
                    if(day>=1 && day<=30) day_flag=1;
                    break;
                    case 7:
                    if(day>=1 && day<=31) day_flag=1;
                    break;
                    case 8:
                    if(day>=1 && day<=31) day_flag=1;
                    break;
                    case 9:
                    if(day>=1 && day<=30) day_flag=1;
                    break;
                    case 10:
                    if(day>=1 && day<=31) day_flag=1;
                    break;
                    case 11:
                    if(day>=1 && day<=30) day_flag=1;
                    break;
                    case 12:
                    if(day>=1 && day<=31) day_flag=1;
                    break;
                }
                if(day_flag==0) std::cout<<"Błednny dzien!"<<std::endl;
            } while (day_flag!=1);
            if (year<curr_year) date_flag=1;
            if (year==curr_year && month<curr_month) date_flag=1;
            if (year==curr_year && month==curr_month && day<=curr_day) date_flag=1;
            err_disp++;
        } while(date_flag!=1);
        *this->day=day;
        *this->month=month;
        *this->year=year;
}
void Osoba::print_date()
{
    cout<<"Twoja data urodzenia to: "<<*this->day<<" "<<*this->month<<" "<<*this->year<<" ."<<endl;
}
void Osoba::set_adres()
{
    adres->set_adres();
}
void Osoba::print_adres()
{
    adres->print_adres();
}
/*void Osoba::przedstaw()
{
    cout<<*this;
    this->adres->print_adres();
}*/