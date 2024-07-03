#pragma once
#include"Cuckoo.h" 
#include <iostream>
#include <string>

using namespace std;

class CuckooBase
{
public:
    virtual void makeSound()
    {
        cout << "Cuckooing...." << endl;
    }
    virtual void eat()
    {
        cout << "Eating" << endl;
    }
};
class CuckooDerived : public CuckooBase
{
public:
    void makeSound()
    {
        cout << "Extraordinary Cuckooing" << endl;
    }
    void eat()
    {
        cout << "Special Eating" << endl;
    }
};