#include <string>
#include "adres.h"
#include <regex>
#include <iostream>
using namespace std;

bool isNumber(string flat)
{
    for(int i=0;i<flat.length()-1;i++)
    {
        if(isdigit(flat[i])==false)
        {
            return false;
        }
    }
    return true;
}
Adres::Adres():street_name{nullptr},numerof_flat{nullptr},numerof_house{nullptr},city{nullptr},postal_code{nullptr}
{

}
Adres::~Adres()
{
    
    if (street_name!=0)
    {
        delete street_name;
    }
    if (numerof_house!=0)
    {
        delete numerof_house;
    }
    if (numerof_flat!=0)
    {
        delete numerof_flat;
    }
    if (city!=0)
    {
        delete city;
    }
    if (postal_code!=0)
    {
        delete postal_code;
    }
}
void Adres::set_adres()
{
    string code;
    street_name=new string{0};
    numerof_flat=new string{0};
    numerof_house=new string{0};
    city=new string{0};
    postal_code=new string{0};
    regex postal("^[0-9]{2}-[0-9]{3}$");
    cout<<"Podaj miejscowosc"<<endl;
    cin>>*this->city;
    cout<<"Podaj nazwe ulicy"<<endl;
    cin>>*this->street_name;
    cout<<"Podaj numer domu"<<endl;
    cin>>*this->numerof_house;
    cin.ignore();
    bool work;
    do
    {
        cout<<"Podaj numer mieszkania"<<endl;
        getline(cin,*numerof_flat);
        work=isNumber(*this->numerof_flat);
        if(!work)
        {
            if(*numerof_flat=="")
            {
                break;
            }
        }
        else
        {
            break;
        }
    } while (true);

    do{
        cout<<"Podaj kod pocztowy"<<endl;
        cin>>code;
        *postal_code=code;
    }while(!regex_match(code,postal));
}
void Adres::print_adres()
{
    if(street_name!=0)
    {
        if(*numerof_flat=="")
        {
            cout<< *city<<" ul."<< *street_name <<" "<<*numerof_house<<" "<<*postal_code<<endl;
        }
        else
        {
            cout<< *city<<" ul."<< *street_name <<" "<<*numerof_house<<"/"<<*numerof_flat<<" "<<*postal_code<<endl;
        }
    }
    else
    {
        cout<<"brak adresu"<<endl;
    }
    
}