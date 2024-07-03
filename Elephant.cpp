#pragma once
#include"Elephant.h"
#include <iostream>
#include <string>
using namespace std;

class ElephantBase
{
public:
    virtual void makeSound()
    {
        cout << "Trumpeting" << endl;
    }
    virtual void eat()
    {
        cout << "Regular Eating" << endl;
    }
};
// Derived class
class ElephantDerived : public ElephantBase {
public:
    void makeSound()
    {
        cout << "Extraordinary Trumpeting" << endl;
    }
    void eat()
    {
        cout << "Special Eating!" << endl;
    }
};