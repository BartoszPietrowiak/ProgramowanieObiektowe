#include <iostream>
#include <string>
#include <cctype>
#include <regex>
#include <ctime>
#include "Logger.h"
using namespace std;
Logger::Logger(bool debug)
{
    this->debug = debug;
}
void Logger::log( string characters)
{   
    if(debug)
    {
        time_t now = time(0);
        char* dt = ctime(&now);
        cout<<dt<<characters<<endl;
    }
}