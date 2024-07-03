#pragma once
#include"Cats.h" 
#include <iostream>
#include <string>

using namespace std;

class CatsBase
{
public:
    virtual void makeSound()
    {
        cout << "Meows...." << endl;
    }
    virtual void eat()
    {
        cout << "Eating" << endl;
    }
};
class CatsDerived : public CatsBase
{
public:
    void makeSound()
    {
        cout << "Extraordinary Meows" << endl;
    }
    void eat()
    {
        cout << "Special Eating" << endl;
    }
};