#pragma once 

#include <iostream>
#include <string>

using namespace std;

class Animal
{
private:
    string Name;
    int id;
    int age;
    double weight;
    int healthscore;
    int hydrationlevel;
    int nutritionlevel;

public:
    Animal();
    Animal(string, int, double);

    // SETTERS
    void setName(string);
    void setAge(int);
    void setWeight(double);

    // GETTERS
    string getName() const;
    int getAge() const;
    double getWeight() const;

};