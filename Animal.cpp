#include"Animal.h"
#include <iostream>
#include <string>

using namespace std;
// Default Constructor
Animal::Animal()
{
    setName("Default");
    setAge(0);
    setWeight(0.0);
}

// Overloaded Constructor
Animal::Animal(string Name, int age, double weight)
{
    setName(Name);
    setAge(age);
    setWeight(weight);
}

//SETTERS
void Animal::setName(string Names)
{
    Name = Names;
}
void Animal::setAge(int ages)
{
    age = ages;
}
void Animal::setWeight(double weights)
{
    weight = weights;
}
//GETTERS
string Animal::getName() const
{
    return Name;
}
int Animal::getAge() const
{
    return age;
}
double Animal::getWeight() const
{
    return weight;
}