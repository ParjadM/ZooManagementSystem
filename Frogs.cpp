#pragma once
#include"Frogs.h" 
#include <iostream>
#include <string>

using namespace std;

class FrogsBase
{
public:
    virtual void makeSound()
    {
        cout << "Croaks...." << endl;
    }
    virtual void eat()
    {
        cout << "Eating" << endl;
    }
};
class FrogsDerived : public FrogsBase
{
public:
    void makeSound()
    {
        cout << "Extraordinary Croaks" << endl;
    }
    void eat()
    {
        cout << "Special Eating" << endl;
    }
};