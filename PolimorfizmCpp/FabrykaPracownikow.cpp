#include <string>
#include <iostream>
#include "FabrykaPracownikow.h"
#include "Pracownik.h"

Pracownik* FabrykaPracownikow::utworz()
{
    return new Pracownik();
}