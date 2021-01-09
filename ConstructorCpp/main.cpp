#include <iostream>
#include <string>
#include <cctype>
#include <regex>
#include <utility>
#include "Ul.h"
using namespace std;
void foo(Ul ul)
{
    ul.print_apiary_name();
}
void bar ( const Ul &ul ) 
{

}

void baz ( Ul &ul )
{
    ul.print_apiary_name();
}
void qux ( Ul &&ul ) {
     ul.print_apiary_name();
}
int main()
{

   Ul *u1= new Ul ;
   u1->add_hive_pos();
   u1->add_apiary_name();
   //u1->add_honey_avg();
   //u1->add_honey_value();
   //foo(*u1); //praca na kopii
   //foo(move(*u1));
   //foo("Pasieka");
   //baz(*u1); //praca na oryginale
   //qux(move(*u1)); /praca na oryginale
   delete u1;
   system("pause");
    return 0;
}