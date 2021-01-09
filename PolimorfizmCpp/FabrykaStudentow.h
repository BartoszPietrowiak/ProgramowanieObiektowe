#include <string>
#include <iostream>
#include "FabrykaOsob.h"
#include "Student.h"
using namespace std;
#pragma once
class FabrykaStudentow:public FabrykaOsob
{
    protected:
    Student* utworz();
};