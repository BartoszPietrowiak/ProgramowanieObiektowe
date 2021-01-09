#include <string>
#pragma once
using namespace std;
class Adres
{
    string *street_name;
    string *numerof_house;
    string *numerof_flat;
    string *city;
    string *postal_code;
    public:
    Adres();
    ~Adres();
    void set_adres();
    void print_adres();
};