#include "Zoo.h"
#include <iostream>

#include <string>

using namespace std;
// Default Constructor
Zoo::Zoo()
{
    setName("Default");
    setId(0);
    setAge(0);
    setWeight(0.0);
    setHealthScore(100);
    setHydrationLevel(100);
    setNutritionLevel(100);
}

// Overloaded Constructor
Zoo::Zoo(string Name, int id, int age, double weight, int hs, int nl, int hl)
{
    setName(Name);
    setId(id);
    setAge(age);
    setWeight(weight);
    setHealthScore(hs);
    setHydrationLevel(hl);
    setNutritionLevel(nl);
}

//SETTERS
void Zoo::setName(string Names)
{
    Name = Names;
}
void Zoo::setId(int ids)
{
    id = ids;
}
void Zoo::setAge(int ages)
{
    age = ages;
}
void Zoo::setWeight(double weights)
{
    weight = weights;
}
void Zoo::setHealthScore(int hs)
{
    healthscore = hs;
}
void Zoo::setNutritionLevel(int nl)
{
    nutritionlevel = nl;
}
void Zoo::setHydrationLevel(int hl)
{
    hydrationlevel = hl;
}
//GETTERS
string Zoo::getName() const
{
    return Name;
}
int Zoo::getId() const
{
    return id;
}
int Zoo::getAge() const
{
    return age;
}
double Zoo::getWeight() const
{
    return weight;
}
int Zoo::getHealthScore() const
{
    return healthscore;
}
int Zoo::getNutritionLevel() const
{
    return nutritionlevel;
}
int Zoo::getHydrationLevel() const
{
    return hydrationlevel;
}
void Zoo::makeSound() const
{
    cout << "The animal makes a generic sound." << endl;
}

void Zoo::eat() const
{
    cout << "The animal eats (generic)." << endl;
}
void Zoo::showInfo() const
{
    cout << "Animal Name: " << getName() << endl;
    cout << "Animal Id: " << getId() << endl;
    cout << "Animal Age: " << getAge() << endl;
    cout << "Animal Weight: " << getWeight() << endl;
    cout << "Animal Healthscore: " << getHealthScore() << endl;
    cout << "Animal Nutritionlevel: " << getNutritionLevel() << endl;
    cout << "Animal Hydrationlevel: " << getHydrationLevel() << endl;
    cout << endl;
}