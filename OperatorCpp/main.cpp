#include<iostream>
#include<string>
#include <vector>
#include <algorithm>
#include "Samochod.h"
#include <set>
using namespace std;
ostream& operator << (ostream&os, const Samochod &samochod){
    os<<samochod.model<< " " << samochod.pojemnosc_baku<<"\n";
    return os;
}
/*struct cmp{
    bool operator() (const Samochod &a, const Samochod &b)
    const{
        return a.odczytaj_pojemnosc_baku() < b.odczytaj_pojemnosc_baku();
    }
};*/
void operator++(Samochod &samochod)
{
    samochod.dodaj_km(1);
}
int main()
{
    Samochod s1("audi",0);
    Samochod s2("bmw",123);
    Samochod s3("",200);
    if(s1)
    {
        cout<<"Weszlo do s1!"<<endl;
    }
    if(!s1)
    {
        cout<<"Weszlo do !s1!"<<endl;
    }
    if(s1<s2)
    {
        cout<<"Weszlo do ifa"<<endl;
    }
    cout << s1;
    vector<Samochod> v;
    v.push_back(s1);
    v.push_back(s2);
    v.push_back(s3);
    sort(v.begin(),v.end());
    for(auto it= v.begin(); it!=v.end(); ++it)
    {
        cout<<*it<<endl;
    }
    auto cmp=[](const Samochod &a,const Samochod&b){return a.odczytaj_pojemnosc_baku()<b.odczytaj_pojemnosc_baku();};
    set <Samochod, decltype(cmp)> s(cmp);
    s.insert(s1);
    s.insert(s2);
    s.insert(s3);
    for(auto it= s.begin(); it!=s.end(); ++it)
    {
        cout<<*it<<endl;
    }
    Samochod s4;
    s4=(s2,s3,s1);
    cout<<s4;
    Samochod s4;
    s2.dodaj_km(5000);
    s4|=s2;
    cout<<s4;
    system("pause");
    return 0;
}