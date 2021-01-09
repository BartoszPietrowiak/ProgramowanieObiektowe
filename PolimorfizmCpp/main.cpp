#include "osoba.h"
#include "student.h"
#include "pracownik.h"
#include "FabrykaPracownikow.h"
#include "FabrykaStudentow.h"
#include "FabrykaOsob.h"
#include <string>
#include <iostream>
#include <map>
using namespace std;
void foo(Osoba &os)
{
    os.przedstaw();
}
void bar(Osoba *os)
{
    os->przedstaw();
}
int main()
{
    /*Osoba *os = new Osoba();
    os->set_adres();
    os->set_names();
    os->set_date();
    os->print_adres();
    os->print_names();
    os->print_date();
    Student *st = new Student();
    delete st;
    st->set_adres();
    st->set_names();
    st->set_date();
    st->print_adres();
    st->print_names();
    st->print_date();
    st->przedstaw();
    st->addmark();
    st->printmark();
    st->showall();
    st->przedstaw();
    Pracownik *pr = new Pracownik();
    pr->set_adres();
    pr->set_names();
    pr->set_date();
    pr->print_adres();
    pr->print_names();
    pr->print_date();
    pr->add_subject();
    pr->is_teaching();
    pr->del_subject();
    pr->przedstaw();*/
    /*
    foo(*os);
    foo(*st);
    foo(*pr);
    bar(os);
    bar(st);
    bar(pr);
    Pracownik *p1=new Pracownik;
    Osoba *o1 = static_cast<Osoba*>(p1);
    Osoba *o2 = static_cast<Pracownik*>(o1);
    Osoba *o3 = new Osoba;
    Pracownik *p2 = static_cast<Pracownik *>(o3);// mozna dodawac aby dane dotyczace osoby
    Pracownik *p3 = new Pracownik;
    Osoba *o4 = dynamic_cast<Osoba*>(p3);
    Osoba *o5 = dynamic_cast<Osoba*>(p3);
    //Pracownik *p4 = dynamic_cast<Osoba*>(o4); //niepoprawne
    o5->przedstaw();*/
    /*Osoba * o6= new Osoba;
    Pracownik *p5=dynamic_cast<Pracownik*>(o6);
    if(p5==nullptr)
    {
        cout<<"Blad rzutowania"<<endl;
    }
    else
    {
       p5->showall();
    }
    */
   map<string,FabrykaOsob*> m;
   m["pracownik"] = new FabrykaPracownikow();
   m["student"] = new FabrykaStudentow();
   vector<Osoba*> tablicaOsob;
   string command;
   do{
       cin>>command;
       if(command=="pracownik" || command=="student")
       {
           tablicaOsob.push_back(m[command]->utworz());
       }
       else if (command =="wyswietl")
       {
            for (int i = 0; i < tablicaOsob.size(); i++)
            {
                tablicaOsob.at(i)->przedstaw();
            }
       }
       else if(command=="wyjscie")
       {
           exit(0);
       }
       else
       {
           cout<<"Nie ma takiego polecenia"<<endl;
       }
       
       
   } while(1);
   system("pause");
    return 0;
}