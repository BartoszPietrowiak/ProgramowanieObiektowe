#include <iostream>
#include <exception>
#include <string>
#include <cstring>
using namespace std;

class StackException: public exception{
    public:
    virtual const char * what() const noexcept override{
        return "Bledna_operacja_na_stosie!";
    }
};
class StackFullException: public StackException{
    int element=0;
    int maxStacksize=0;
    string message;
    public:
    StackFullException();
    StackFullException(string p, int e, int s)
    {
        element=e;
        maxStacksize=s;
        message=p;
    }   
    virtual const char* what() const noexcept override{
        string mes=message+" Maksymalny rozmiar stosu to: "+to_string(maxStacksize)+". Nie dodany element to "+to_string(element)+"\n";
        char *tab= new char[mes.size()+1];
        tab=strcpy(tab,mes.c_str());
        return tab;
    }

};
class StackEmptyException: public StackException{
    string message;
    public:
    StackEmptyException();
    StackEmptyException(string p)
    {
       this-> message=p;
    }   
    virtual const char* what() const noexcept override{
        string mes=message+"\n";
        char *tab= new char[mes.size()+1];
        tab=strcpy(tab,mes.c_str());
        return tab;
    }

};