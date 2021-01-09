#include <string>
#include "osoba.h"
#include <vector>
#pragma once
using namespace std;

class Pracownik:public Osoba
{
    vector<string> *przedmioty;
    public:
    Pracownik();
    ~Pracownik();
    Pracownik(Pracownik &ful);
    Pracownik(Pracownik &&ful);
    Pracownik(const char * name);
    void add_subject();
    void del_subject();
    void is_teaching();
    void przedstaw();
    void showall();
};
