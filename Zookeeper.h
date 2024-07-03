#pragma once

#include <iostream>
#include <string>


using namespace std;

class Zookeeper
{
private:
    string firstName;
    string lastName;
    int health;

public:
    Zookeeper() = default;
    Zookeeper(string, string);

    // SETTERS
    void setFirstName(string);
    void setLastName(string);

    // GETTERS
    string getFirstName();
    string getLastName();


    //extra
    void showinfo();
};