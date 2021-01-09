#include <string>
#include "adres.h"
#pragma once
using namespace std;
 class Osoba
 {
     protected:
     string* name,*surname;
     int *day,*month,*year;
     Adres *adres;
    friend ostream& operator<<(ostream& os, const Osoba& s);
     public:
     Osoba();
     virtual ~Osoba();
     Osoba(Osoba &ful);
     Osoba(Osoba &&ful);
     Osoba(const char * name);
     void set_names();
     void print_names();
     void set_date();
     void print_date();
     void set_adres();
     void print_adres();
     virtual void przedstaw()=0;
 };