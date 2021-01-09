#include <string>
#include <iostream>
#include "FabrykaStudentow.h"
#include "Student.h"

Student* FabrykaStudentow::utworz()
{
    return new Student();
}