#pragma once
#include"Hyena.h" 
#include <iostream>
#include <string>

using namespace std;

class HyenaBase
{
public:
    virtual void makeSound()
    {
        cout << "laughing...." << endl;
    }
    virtual void eat()
    {
        cout << "Eating" << endl;
    }
};
class HyenaDerived : public HyenaBase
{
public:
    void makeSound()
    {
        cout << "Extraordinary laughing" << endl;
    }
    void eat()
    {
        cout << "Special Eating" << endl;
    }
};