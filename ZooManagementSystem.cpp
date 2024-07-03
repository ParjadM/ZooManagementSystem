/*
*
* ZooManagementSystem.cpp : This file contains the 'main' function.Program execution begins and ends there.
*
*/

// Include Libraries
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <stdexcept>
#include <limits>
#include <iostream>

// Include Header Files
#include "Zookeeper.h"
#include "Zoo.h"
#include "Animal.h"
#include "Zoo.h"
#include "BarbaryLion.h"
#include "Elephant.h"
#include "Cuckoo.h"
#include "Hyena.h"
#include "Owl.h"
#include "Wolf.h"
#include "Chimpanzee.h"
#include "Bees.h"
#include "Frogs.h"
#include "Cats.h"

using namespace std;

// Global Variables
int loggedin = 0; // CHANGE TO 0 FOR PRODUCTION
int globalid = 11;

// Vector for storing animal objects
vector<Zoo> vect;
vector<Animal> vect2;

Zoo soundtest;

//test
//BarbaryLion
BarbaryLionDerived d;
Base* b = &d;
//Elephant
ElephantDerived Ed;
ElephantBase* Eb = &Ed;
//Cuckoo
CuckooDerived DC;
CuckooBase* CB = &DC;
//Hyena
HyenaDerived HD;
HyenaBase* HB = &HD;
//Owl
OwlDerived Od;
OwlBase* Ob = &Od;
//Wolf
WolfDerived Wd;
WolfBase* Wb = &Wd;
//Chimpanzee
ChimpanzeeDerived CCd;
ChimpanzeeBase* CCb = &CCd;
//Bees
BeesDerived BBd;
BeesBase* BBb = &BBd;
//Frogs
FrogsDerived Fd;
FrogsBase* Fb = &Fd;
//Cats
CatsDerived Cd;
CatsBase* Cb = &Cd;


//zookeeper info
Zookeeper z("John", "Doe");

// FUNCTION PROTOYPES
void Option1();
void Option2();
void Option3();
void Option4();
void MainMenu();
void Login(int&);
void copy();
void paste();
void printInventoryReport(vector<Zoo>&);

#include "GlobalFunctions.h" // Menu functions and global helper functions 


/*
* Main entry point for application
*/
int main()
{
    //10 animals added to vector with 1-10 for development
    // TODO - Create animals dynamically with correct type (not using animal class directly)
    vect.push_back(Zoo("Barbary Lion", 1, 10, 230, 100, 100, 100));
    vect.push_back(Zoo("Cuckoo", 2, 20, 130, 100, 100, 100));
    vect.push_back(Zoo("Hyena", 3, 20, 130, 100, 100, 100));
    vect.push_back(Zoo("Owl", 4, 20, 130, 100, 100, 100));
    vect.push_back(Zoo("Wolf", 5, 20, 130, 100, 100, 100));
    vect.push_back(Zoo("Chimpanzee", 6, 20, 130, 100, 100, 100));
    vect.push_back(Zoo("Elephant", 7, 20, 130, 100, 100, 100));
    vect.push_back(Zoo("Bees", 8, 20, 130, 100, 100, 100));
    vect.push_back(Zoo("Frogs", 9, 20, 130, 100, 100, 100));
    vect.push_back(Zoo("Cats", 10, 20, 130, 100, 100, 100));
    
    // TODO - Menu options like addAnimal and feedAnimal etc. should use methods from the zoo object

    //login menu
    if (loggedin == 0)
    {
        Login(loggedin);
    }

    //main menu
    if (loggedin == 1)
    {
        system("CLS");

        //call the menu
        MainMenu();
    }
    //unsuccessful attempt 
    else
    {
        system("CLS");

        cout << "Have a nice day" << endl;
    }


    return 0;
}
