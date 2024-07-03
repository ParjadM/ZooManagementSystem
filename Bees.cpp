#pragma once
#include"Bees.h" 
#include <iostream>
#include <string>

using namespace std;

class BeesBase
{
public:
    virtual void makeSound()
    {
        cout << "Buzzes...." << endl;
    }
    virtual void eat()
    {
        cout << "Eating" << endl;
    }
};
class BeesDerived : public BeesBase
{
public:
    void makeSound()
    {
        cout << "Extraordinary Buzzes" << endl;
    }
    void eat()
    {
        cout << "Special Eating" << endl;
    }
};