#include <iostream>
#include <string>
#include <cctype>
#include <regex>
#include <ctime>
using namespace std;

class Logger{
    private:
    bool debug;
    public:
    Logger(bool debug);
    void log(string characters);
};