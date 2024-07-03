#pragma once
#include"Wolf.h" 
#include <iostream>
#include <string>

using namespace std;

class WolfBase
{
public:
    virtual void makeSound()
    {
        cout << "howling...." << endl;
    }
    virtual void eat()
    {
        cout << "Eating" << endl;
    }
};
class WolfDerived : public WolfBase
{
public:
    void makeSound()
    {
        cout << "Extraordinary howling" << endl;
    }
    void eat()
    {
        cout << "Special Eating" << endl;
    }
};