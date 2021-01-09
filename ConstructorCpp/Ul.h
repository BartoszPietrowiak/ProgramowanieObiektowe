#include <iostream>
#include <string>
#include <cctype>
#include "Logger.h"
#include "Stopper.h"
using namespace std;

class Ul: public Logger,public Stopper
{
int* bee_number;
string* hive_position;
float* honey_avg;
string* apiary_name;
float* honey_value;
public:
Ul();
Ul(const Ul &ful);
Ul(Ul &&ful);
Ul(const char * name);
~Ul();
void start_bee_number();
void change_bee_number();
void print_bee_number();
void add_hive_pos();
void print_hive_pos();
void add_honey_avg();
void print_honey_avg();
void add_apiary_name();
void print_apiary_name();
void add_honey_value();
void print_honey_value();

};
