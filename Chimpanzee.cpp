#pragma once
#include"Chimpanzee.h" 
#include <iostream>
#include <string>

using namespace std;

class ChimpanzeeBase
{
public:
    virtual void makeSound()
    {
        cout << "screams...." << endl;
    }
    virtual void eat()
    {
        cout << "Eating" << endl;
    }
};
class ChimpanzeeDerived : public ChimpanzeeBase
{
public:
    void makeSound()
    {
        cout << "Extraordinary screams" << endl;
    }
    void eat()
    {
        cout << "Special Eating" << endl;
    }
};