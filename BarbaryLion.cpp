#pragma once
#include"BarbaryLion.h" 
#include <iostream>
#include <string>

using namespace std;

class Base
{
public:
    virtual void makeSound()
    {
        cout << "Roar, Roar...." << endl;
    }
    virtual void eat()
    {
        cout << "Eating" << endl;
    }
};
class BarbaryLionDerived : public Base
{
public:
    void makeSound()
    {
        cout << "Extraordinary Roar" << endl;
    }
    void eat()
    {
        cout << "Special Eating" << endl;
    }
};