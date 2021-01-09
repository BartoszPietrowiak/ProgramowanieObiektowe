#include <iostream>
#include <string>
#include <cctype>
#include <regex>
#include <ctime>
#include "Stopper.h"
using namespace std;
void Stopper::start()
{
    time0 = time(0);
}
void Stopper::stop()
{
    time1 = time(0);
    summary+=time1-time0;
}
void Stopper::reset()
{
    time0=0;
    time1=0;
    summary=0;
}
void Stopper::wyswietl()
{
    cout<<"Czas pracy: "<<summary<<endl;
}