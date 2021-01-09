#include "pracownik.h"
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int getIndex(vector<string> v, string K)
{
    auto it = find(v.begin(), v.end(), K);
    if (it != v.end()) 
    {
        int index = it - v.begin();
        return index;
    }
    else
    {
        int index =-1;
        return index;
    }
}
Pracownik::Pracownik()
{  
    przedmioty= new vector<string>(0);
}
Pracownik::~Pracownik()
{
    delete przedmioty;
}
Pracownik::Pracownik(Pracownik &ful):Pracownik()
{
    przedmioty=ful.przedmioty;
}
Pracownik::Pracownik(Pracownik &&ful):Pracownik()
{
    przedmioty=ful.przedmioty;
}
Pracownik::Pracownik(const char * name)
{
    (*przedmioty).push_back(name);
}
void Pracownik::add_subject()
{
    string subject;
    cout<<"Podaj przedmiot"<<endl;
    cin>>subject;
    if(find((*przedmioty).begin(), (*przedmioty).end(), subject) != (*przedmioty).end()) 
    {
        cout<<"Podany przedmiot jest juz dodany!"<<endl;
    }
    else
    {
        (*przedmioty).push_back(subject);
    }
}
void Pracownik::del_subject()
{
    string subject;
    cout<<"Podaj przedmiot ktory ma zostac usuniety"<<endl;
    cin>>subject;
    if(find((*przedmioty).begin(), (*przedmioty).end(), subject) != (*przedmioty).end()) 
    {
        int index=getIndex((*przedmioty),subject);
        (*przedmioty).erase((*przedmioty).begin()+index);   
    }
    else
    {
        cout<<"Nie ma takiego przedmiotu!"<<endl;
    }
        
}
void Pracownik::is_teaching()
{
    string subject;
    cout<<"Podaj przedmiot ktory ma zostac sprawdzony"<<endl;
    cin>>subject;
    if(find((*przedmioty).begin(), (*przedmioty).end(), subject) != (*przedmioty).end()) 
    {
        cout<<"Nauczyciel uczy tego przedmiotu!"<<endl;
    }
    else
    {
        cout<<"Nauczyciel nie uczy tego przedmiotu!"<<endl;
    }
   
}
void Pracownik::przedstaw()
{
    cout<<*this;
    this->adres->print_adres();
    cout<<"Nauczane przedmioty:"<<endl;
    for (auto i = (*przedmioty).begin(); i != (*przedmioty).end(); ++i)
    {
            std::cout << *i <<", ";
    } 
    cout<<endl;
}
void Pracownik::showall()
{
    cout<<"Nauczane przedmioty:"<<endl;
    for (auto i = (*przedmioty).begin(); i != (*przedmioty).end(); ++i)
    {
            std::cout << *i <<", ";
    } 
    cout<<endl;
}
