#include <string>
#include "osoba.h"
#include <vector>
#include <map>
#pragma once
using namespace std;

class Student:public Osoba
{   
    map<string,int> *przedmioty;
    public:
    Student();
    ~Student();
    Student(Student &ful);
    Student(Student &&ful);
    Student(const char * name, const int grade);
    void addmark();
    void printmark();
    void showall();
    void przedstaw();

};