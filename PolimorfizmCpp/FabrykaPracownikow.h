#include <string>
#include <iostream>
#include "FabrykaOsob.h"
#include "Pracownik.h"
#pragma once
using namespace std;
class FabrykaPracownikow:public FabrykaOsob
{
    protected:
    Pracownik* utworz();
};