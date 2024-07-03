#pragma once
#include"Owl.h" 
#include <iostream>
#include <string>

using namespace std;

class OwlBase
{
public:
    virtual void makeSound()
    {
        cout << "hooting...." << endl;
    }
    virtual void eat()
    {
        cout << "Eating" << endl;
    }
};
class OwlDerived : public OwlBase
{
public:
    void makeSound()
    {
        cout << "hooting laughing" << endl;
    }
    void eat()
    {
        cout << "Special Eating" << endl;
    }
};