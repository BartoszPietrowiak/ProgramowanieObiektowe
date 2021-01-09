#include <iostream>
#include <string>
#include <cctype>
#include <regex>
#include <ctime>

using namespace std;
class Stopper
{
    time_t time0,time1,summary;
    public:
    void start();
    void stop();
    void reset();
    void wyswietl();
};