#include "student.h"
#include <string>
#include <map>
#include <iostream>
#include <algorithm>
using namespace std;
Student::Student()
{
 przedmioty=new map<string,int>();
}
Student::~Student()
{
    delete przedmioty;
}
Student::Student(Student &ful):Student()
{
    przedmioty=ful.przedmioty;
}
Student::Student(Student &&ful):Student()
{
    przedmioty=ful.przedmioty;
}
Student::Student(const char * name, const int grade):Student()
{
     (*przedmioty)[name] = grade;
}
void Student::addmark()
{
    int grade;
    string subject;
    cout<<"Podaj nazwe przedmiotu"<<endl;
    cin>>subject;
    do
    {
        cout<<"Podaj ocene"<<endl;
        cin>>grade;
    } while (grade<1||grade>5);
    (*przedmioty)[subject] = grade;
}
void Student::printmark()
{
    string subject;
    cout<<"Podaj nazwe przedmiotu"<<endl;
    cin>>subject;
    if((*przedmioty).find(subject)!=(*przedmioty).end())
    {
        cout<<subject<<" "<<(*przedmioty)[subject]<<endl;
    }
    else
    {
        cout<<"Nie ma oceny dla przedmiotu: "<<subject<<" ."<<endl;
    }    
}
void Student::showall()
{
    for(const auto &x : (*przedmioty))
    {
        cout<<x.first<<" - "<<x.second<<endl;
    }
}
void Student::przedstaw()
{
    cout<<*this;
    this->adres->print_adres();
    this->showall();
}