#pragma once 

#include <iostream>
#include <string>

using namespace std;

class Zoo
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
    Zoo();
    Zoo(string, int, int, double, int, int, int);

    // SETTERS
    void setName(string);
    void setId(int);
    void setAge(int);
    void setWeight(double);
    void setHealthScore(int);
    void setHydrationLevel(int);
    void setNutritionLevel(int);

    // VIRTUAL FUNCTIONS
    virtual void makeSound() const;
    virtual void eat() const;

    // GETTERS
    string getName() const;
    int getId() const;
    int getAge() const;
    double getWeight() const;
    int getHealthScore() const;
    int getHydrationLevel() const;
    int getNutritionLevel() const;


    // EXTRA
    void showInfo() const;

};