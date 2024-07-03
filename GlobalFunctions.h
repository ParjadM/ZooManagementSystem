#pragma once
// Include Libraries
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <stdexcept>
#include <limits>

// Include Files
#include "Zookeeper.h"
#include "Zoo.h"
#include "Animal.h"
#include "BarbaryLion.h"
#include "Elephant.h"
#include "BarbaryLion.cpp"

using namespace std;
class animalBase
{
private:
    int id;
public:
    void setID(int i) { id = i; }
    int getID() const { return id; }
    virtual void display()
    {
        cout << "This is the animal hierarchy" << endl;
    }
};
class Bird : public animalBase
{
private:
    string breed;
public:
    void setBreed(string b) { breed = b; }
    string getBreed() const { return breed; }
    void display()
    {
        cout << "This is the bird hierarchy" << endl;
    }
};
class Robin : public animalBase
{
private:
    string name;
public:
    void setName(string b) { name = b; }
    string getName() const { return name; }
    void display()
    {
        cout << "This is the Robin hierarchy" << endl;
    }
};
class SiberianBlueRobin : public animalBase
{
private:
    string name;
public:
    void setName(string b) { name = b; }
    string getName() const { return name; }
    void display()
    {
        cout << "This is the Siberian Blue Robin Hiearchy " << endl;
    }
};
void MainMenu()
{
    system("CLS");
    int selection;
    do
    {
        

        //exception handling
        cin.exceptions(istream::failbit);
        bool aux = true;
        
        //Main menu options
        cout << "Welcome " << z.getFirstName() << ", " << z.getLastName() << endl;
        cout << "1: Inventory Management" << endl;
        cout << "2: Reporting" << endl;
        cout << "3: Extra" << endl;
        cout << "4: Animal Attributes" << endl;
        cout << "10: clear screen" << endl;
        cout << "0: End Program" << endl;
        cout << "Enter selection:" << endl;    
        do {
            try {
                cout << "PLEASE INSERT VALUE:" << endl;
                cin >> selection;
                aux = true;
            }
            catch (ios_base::failure& fail) {
                aux = false;
                cout << "PLEASE INSERT A VALID OPTION." << endl;
                cin.clear();
                std::string tmp;
                getline(cin, tmp);
            }
        } while (aux == false);
        if (selection == 1)
        {
            Option1();
        }
        else if (selection == 2)
        {
            Option2();
        }
        else if (selection == 3)
        {
            Option3();
        }
        else if (selection == 4)
        {
            Option4();
        }
        else if (selection == 10)
        {
            system("CLS");
        }
        else
        {
            cout << "Please Enter the correct number choices in menu" << endl;
        }

    } while (selection != 0);
    cout << "END OF PROGRAM THANK YOU FOR USING IT!" << endl;
}

void Option1()
{
    system("CLS");
    int selection;
    do
    {
        //exception handling
        cin.exceptions(istream::failbit);
        bool aux = true;
        //option 1 
        cout << "Inventory Management" << endl;
        cout << "1: Add Animal" << endl;
        cout << "2: Remove Animal" << endl;
        cout << "3: Feed Animal" << endl;
        cout << "4: Water Animal" << endl;
        cout << "5: Hydrate" << endl;
        cout << "10: clear screen" << endl;
        cout << "0: Return to main menu" << endl;
        cout << "Enter selection:" << endl;        
        
        do {
            try {
                cout << "PLEASE INSERT VALUE:" << endl;
                cin >> selection;
                aux = true;
            }
            catch (ios_base::failure& fail) {
                aux = false;
                cout << "PLEASE INSERT A VALID OPTION." << endl;
                cin.clear();
                std::string tmp;
                getline(cin, tmp);
            }
        } while (aux == false);
        if (selection == 1)
        {
            
            
            
            
            //exception handling
            cin.exceptions(std::istream::failbit);
            bool aux = true;

            //variables
            string name = "";
            int id = globalid;
            int age = 0;
            double weight = 0;
            int hs = 0;
            int nl = 0;
            int hl = 0;
            cout << "Please enter the name of the animal" << endl;
            cin >> name;
            cout << "Animal Id is already designated id: " << globalid << endl;
            cout << "Please enter the age" << endl;          
            do {
                try {
                    cout << "PLEASE INSERT VALUE:" << endl;
                    cin >> age;
                    aux = true;
                }
                catch (std::ios_base::failure& fail) {
                    aux = false;
                    cout << "PLEASE INSERT A VALID OPTION." << endl;
                    cin.clear();
                    std::string tmp;
                    getline(cin, tmp);
                }
            } while (aux == false);
            cout << "Please enter the weight" << endl;
            do {
                try {
                    cout << "PLEASE INSERT VALUE:" << endl;
                    cin >> weight;
                    aux = true;
                }
                catch (std::ios_base::failure& fail) {
                    aux = false;
                    cout << "PLEASE INSERT A VALID OPTION." << endl;
                    cin.clear();
                    std::string tmp;
                    getline(cin, tmp);
                }
            } while (aux == false);
            cout << "Please enter the healthScore" << endl;
            do {
                try {
                    cout << "PLEASE INSERT VALUE:" << endl;
                    cin >> hs;
                    aux = true;
                }
                catch (std::ios_base::failure& fail) {
                    aux = false;
                    cout << "PLEASE INSERT A VALID OPTION." << endl;
                    cin.clear();
                    std::string tmp;
                    getline(cin, tmp);
                }
            } while (aux == false);
            cout << "Please enter the nutrition Level" << endl;           
            do {
                try {
                    cout << "PLEASE INSERT VALUE:" << endl;
                    cin >> nl;
                    aux = true;
                }
                catch (std::ios_base::failure& fail) {
                    aux = false;
                    cout << "PLEASE INSERT A VALID OPTION." << endl;
                    cin.clear();
                    std::string tmp;
                    getline(cin, tmp);
                }
            } while (aux == false);
            cout << "Please enter the hydration Level" << endl;           
            do {
                try {
                    cout << "PLEASE INSERT VALUE:" << endl;
                    cin >> hl;
                    aux = true;
                }
                catch (std::ios_base::failure& fail) {
                    aux = false;
                    cout << "PLEASE INSERT A VALID OPTION." << endl;
                    cin.clear();
                    std::string tmp;
                    getline(cin, tmp);
                }
            } while (aux == false);
            vect.push_back(Zoo(name, globalid, age, weight, hs, nl, hl));
            globalid++;
            cout << "You have succesfully added an animal" << endl;
            
            
        }
        else if (selection == 2)
        {

            system("CLS");
            //exception handling
            cin.exceptions(std::istream::failbit);
            bool aux = true;
            
            int num = 0;
            int position = 0;
            cout << "Please enter id number of the animal to remove the animal from Zoo" << endl;
            do {
                try {
                    cout << "PLEASE INSERT VALUE:" << endl;
                    cin >> num;
                    aux = true;
                }
                catch (std::ios_base::failure& fail) {
                    aux = false;
                    cout << "PLEASE INSERT A VALID OPTION." << endl;
                    cin.clear();
                    std::string tmp;
                    getline(cin, tmp);
                }
            } while (aux == false);
            //find the position
            position = (num - 1);
            if (num > 0)
            {
                vect[num - 1].setName("Null");
                vect[num - 1].setId(0);
                vect[num - 1].setAge(0);
                vect[num - 1].setWeight(0);
                vect[num - 1].setHealthScore(0);
                vect[num - 1].setHydrationLevel(0);
                vect[num - 1].setNutritionLevel(0);
                cout << "You have successfully removed animal from zoo!" << endl;
                //vect.erase(vect.begin() + position);
            }
            else
            {
                cout << "you enter wrong number please try agian";
            }
        }
        else if (selection == 3)
        {
            system("CLS");
            //exception handling
            cin.exceptions(istream::failbit);
            bool aux = true;

            
            int n = 0;
            int m = 0;
            int temp = 0;
            cout << "Please select id to feed the animal" << endl;
            cout << "This will increase health score" << endl;     
            cout << "This is for Eating" << endl;
            do {
                try {
                    cout << "PLEASE INSERT VALUE:" << endl;
                    cin >> n;
                    aux = true;
                }
                catch (std::ios_base::failure& fail) {
                    aux = false;
                    cout << "PLEASE INSERT A VALID OPTION." << endl;
                    cin.clear();
                    std::string tmp;
                    getline(cin, tmp);
                }
            } while (aux == false);
            cout << "feed regular food or special food" << endl;  
            do {
                try {
                    cout << "PLEASE INSERT VALUE:" << endl;
                    cin >> m;
                    aux = true;
                }
                catch (std::ios_base::failure& fail) {
                    aux = false;
                    cout << "PLEASE INSERT A VALID OPTION." << endl;
                    cin.clear();
                    std::string tmp;
                    getline(cin, tmp);
                }
            } while (aux == false);
            string temp1 = "";
            temp1 = vect[n - 1].getName();
            if (temp1 != "Null") {
                if (n == 1) {
                    if (m == 1)
                    {
                        Base c;
                        Base* ptr;
                        ptr = &c;
                        ptr->eat();
                        temp = vect[n - 1].getHealthScore();
                        vect[n - 1].setHealthScore(temp + 10);
                        cout << "successful!" << endl;
                        vect[n - 1].showInfo();
                    }
                    else if (m == 2)
                    {
                        b->eat();
                        temp = vect[n - 1].getHealthScore();
                        vect[n - 1].setHealthScore(temp + 25);
                        cout << "successful!" << endl;
                        vect[n - 1].showInfo();
                    }
                    else {
                        cout << "You have Entered the wrong number" << endl;
                    }
                }
                else if (n == 2) {
                    if (m == 1)
                    {
                        CuckooBase c;
                        CuckooBase* ptr;
                        ptr = &c;
                        ptr->eat();
                        temp = vect[n - 1].getHealthScore();
                        vect[n - 1].setHealthScore(temp + 10);
                        cout << "successful!" << endl;
                        vect[n - 1].showInfo();
                    }
                    else if (m == 2)
                    {
                        CB->eat();
                        temp = vect[n - 1].getHealthScore();
                        vect[n - 1].setHealthScore(temp + 25);
                        cout << "successful!" << endl;
                        vect[n - 1].showInfo();
                    }
                    else {
                        cout << "You have Entered the wrong number" << endl;
                    }
                }
                else if (n == 3) {
                    if (m == 1)
                    {
                        HyenaBase c;
                        HyenaBase* ptr;
                        ptr = &c;
                        ptr->eat();
                        temp = vect[n - 1].getHealthScore();
                        vect[n - 1].setHealthScore(temp + 10);
                        cout << "successful!" << endl;
                        vect[n - 1].showInfo();
                    }
                    else if (m == 2)
                    {
                        HB->eat();
                        temp = vect[n - 1].getHealthScore();
                        vect[n - 1].setHealthScore(temp + 25);
                        cout << "successful!" << endl;
                        vect[n - 1].showInfo();
                    }
                    else {
                        cout << "You have Entered the wrong number" << endl;
                    }
                }
                else if (n == 4) {
                    if (m == 1)
                    {
                        OwlBase c;
                        OwlBase* ptr;
                        ptr = &c;
                        ptr->eat();
                        temp = vect[n - 1].getHealthScore();
                        vect[n - 1].setHealthScore(temp + 10);
                        cout << "successful!" << endl;
                        vect[n - 1].showInfo();
                    }
                    else if (m == 2)
                    {
                        Ob->eat();
                        temp = vect[n - 1].getHealthScore();
                        vect[n - 1].setHealthScore(temp + 25);
                        cout << "successful!" << endl;
                        vect[n - 1].showInfo();
                    }
                    else {
                        cout << "You have Entered the wrong number" << endl;
                    }
                }
                else if (n == 5) {
                    if (m == 1)
                    {
                        WolfBase c;
                        WolfBase* ptr;
                        ptr = &c;
                        ptr->eat();
                        temp = vect[n - 1].getHealthScore();
                        vect[n - 1].setHealthScore(temp + 10);
                        cout << "successful!" << endl;
                        vect[n - 1].showInfo();
                    }
                    else if (m == 2)
                    {
                        Wb->eat();
                        temp = vect[n - 1].getHealthScore();
                        vect[n - 1].setHealthScore(temp + 25);
                        cout << "successful!" << endl;
                        vect[n - 1].showInfo();
                    }
                    else {
                        cout << "You have Entered the wrong number" << endl;
                    }
                }
                else if (n == 6) {
                    if (m == 1)
                    {
                        ChimpanzeeBase c;
                        ChimpanzeeBase* ptr;
                        ptr = &c;
                        ptr->eat();
                        temp = vect[n - 1].getHealthScore();
                        vect[n - 1].setHealthScore(temp + 10);
                        cout << "successful!" << endl;
                        vect[n - 1].showInfo();
                    }
                    else if (m == 2)
                    {
                        CCb->eat();
                        temp = vect[n - 1].getHealthScore();
                        vect[n - 1].setHealthScore(temp + 25);
                        cout << "successful!" << endl;
                        vect[n - 1].showInfo();
                    }
                    else {
                        cout << "You have Entered the wrong number" << endl;
                    }
                 }
                else if (n == 7) {
                    if (m == 1)
                    {
                        ElephantBase c;
                        ElephantBase* ptr;
                        ptr = &c;
                        ptr->eat();
                        temp = vect[n - 1].getHealthScore();
                        vect[n - 1].setHealthScore(temp + 10);
                        cout << "successful!" << endl;
                        vect[n - 1].showInfo();
                    }
                    else if (m == 2)
                    {
                    Eb->eat();
                        temp = vect[n - 1].getHealthScore();
                        vect[n - 1].setHealthScore(temp + 25);
                        cout << "successful!" << endl;
                        vect[n - 1].showInfo();
                    }
                    else {
                        cout << "You have Entered the wrong number" << endl;
                    }
                }
                else if (n == 8) {
                    if (m == 1)
                    {
                        BeesBase c;
                        BeesBase* ptr;
                        ptr = &c;
                        ptr->eat();
                        temp = vect[n - 1].getHealthScore();
                        vect[n - 1].setHealthScore(temp + 10);
                        cout << "successful!" << endl;
                        vect[n - 1].showInfo();
                    }
                    else if (m == 2)
                    {
                        BBb->eat();
                        temp = vect[n - 1].getHealthScore();
                        vect[n - 1].setHealthScore(temp + 25);
                        cout << "successful!" << endl;
                        vect[n - 1].showInfo();
                    }
                    else {
                        cout << "You have Entered the wrong number" << endl;
                    }
                    }
                else if (n == 9) {
                    if (m == 1)
                    {
                        FrogsBase c;
                        FrogsBase* ptr;
                        ptr = &c;
                        ptr->eat();
                        temp = vect[n - 1].getHealthScore();
                        vect[n - 1].setHealthScore(temp + 10);
                        cout << "successful!" << endl;
                        vect[n - 1].showInfo();
                    }
                    else if (m == 2)
                    {
                        Fb->eat();
                        temp = vect[n - 1].getHealthScore();
                        vect[n - 1].setHealthScore(temp + 25);
                        cout << "successful!" << endl;
                        vect[n - 1].showInfo();
                    }
                    else {
                        cout << "You have Entered the wrong number" << endl;
                    }
                 }
                else if (n == 10) {
                    if (m == 1)
                    {
                        CatsBase c;
                        CatsBase* ptr;
                        ptr = &c;
                        ptr->eat();
                        temp = vect[n - 1].getHealthScore();
                        vect[n - 1].setHealthScore(temp + 10);
                        cout << "successful!" << endl;
                        vect[n - 1].showInfo();
                    }
                    else if (m == 2)
                    {
                        Cb->eat();
                        temp = vect[n - 1].getHealthScore();
                        vect[n - 1].setHealthScore(temp + 25);
                        cout << "successful!" << endl;
                        vect[n - 1].showInfo();
                    }
                    else {
                        cout << "You have Entered the wrong number" << endl;
                    }
                 }
                else {
                    if (m == 1)
                    {
                        temp = vect[n - 1].getHealthScore();
                        vect[n - 1].setHealthScore(temp + 10);
                        cout << "successful!" << endl;
                        vect[n - 1].showInfo();
                    }
                    else if (m == 2) {
                        temp = vect[n - 1].getHealthScore();
                        vect[n - 1].setHealthScore(temp + 25);
                        cout << "successful!" << endl;
                        vect[n - 1].showInfo();
                    }
                    else
                    {
                        cout << "You have Entered the wrong number" << endl;
                    }
                }
            }
            else {
                cout << "This id does not exist" << endl;
            }

        }
        else if (selection == 4)
        {
            system("CLS");
            //exception handling
            cin.exceptions(istream::failbit);
            bool aux = true;
            
            int n = 0;
            int temp = 0;
            cout << "Please select id of the animal to water." << endl;
            cout << "This will increase nutrition Level" << endl;
            do {
                try {
                    cout << "PLEASE INSERT VALUE:" << endl;
                    cin >> n;
                    aux = true;
                }
                catch (std::ios_base::failure& fail) {
                    aux = false;
                    cout << "PLEASE INSERT A VALID OPTION." << endl;
                    cin.clear();
                    std::string tmp;
                    getline(cin, tmp);
                }
            } while (aux == false);
            string temp1 = "";
            temp1 = vect[n - 1].getName();
            if (temp1 != "Null") {
                temp = vect[n - 1].getNutritionLevel();
                vect[n - 1].setNutritionLevel(temp + 10);
                cout << "successful!" << endl;
                vect[n - 1].showInfo();
            }
            else {
                cout << "This id does not exist" << endl;
            }

        }
        else if (selection == 5)
        {
            system("CLS");
            //exception handling
            cin.exceptions(istream::failbit);
            bool aux = true;
            //hydration level
            int n = 0;
            int temp = 0;
            cout << "Please select id of the animal to hydrate." << endl;
            cout << "This will increase hydration Level" << endl;       
            do {
                try {
                    cout << "PLEASE INSERT VALUE:" << endl;
                    cin >> n;
                    aux = true;
                }
                catch (std::ios_base::failure& fail) {
                    aux = false;
                    cout << "PLEASE INSERT A VALID OPTION." << endl;
                    cin.clear();
                    std::string tmp;
                    getline(cin, tmp);
                }
            } while (aux == false);
            string temp1 = "";
            temp1 = vect[n - 1].getName();
            if (temp1 != "Null") {
                temp = vect[n - 1].getHydrationLevel();
                vect[n - 1].setHydrationLevel(temp + 10);
                cout << "successful!" << endl;
                vect[n - 1].showInfo();
            }
            else {
                cout << "This id does not exist" << endl;
            }

        }
        else if (selection == 10)
        {
            system("CLS");
        }
        else
        {
            system("CLS");
            cout << "Please Enter the correct number choices in menu" << endl;
            system("pause");
        }

    } while (selection != 0);
}

void Option2()
{
    system("CLS");
    int selection;
    do
    {
        //exception handling
        cin.exceptions(istream::failbit);
        bool aux = true;
        //reporting and inventory information
        cout << "Reporting " << endl;
        cout << "1: Inventory Report" << endl;
        cout << "2: Find specific Aniamal based on ID in the Inventory Report" << endl;
        cout << "3: Show Zookeeper info" << endl;
        cout << "10: clear screen" << endl;
        cout << "0: Return to main menu" << endl;
        cout << "Enter selection:" << endl;  
        do {
            try {
                cout << "PLEASE INSERT VALUE:" << endl;
                cin >> selection;
                aux = true;
            }
            catch (std::ios_base::failure& fail) {
                aux = false;
                cout << "PLEASE INSERT A VALID OPTION." << endl;
                cin.clear();
                std::string tmp;
                getline(cin, tmp);
            }
        } while (aux == false);
        if (selection == 1)
        {
            printInventoryReport(vect);
        }
        else if (selection == 2) {
            //show information about the zookeeper
            int n = 0;
            string temp1 = "";
            cout << "Please select id of the animal to display reporting" << endl;
            do {
                try {
                    cout << "PLEASE INSERT VALUE:" << endl;
                    cin >> n;
                    aux = true;
                }
                catch (std::ios_base::failure& fail) {
                    aux = false;
                    cout << "PLEASE INSERT A VALID OPTION." << endl;
                    cin.clear();
                    std::string tmp;
                    getline(cin, tmp);
                }
            } while (aux == false);

            temp1 = vect[n - 1].getName();
            if (temp1 != "Null") {
                vect[n - 1].showInfo();
            }
            else {
                system("CLS");
                cout << "This id does not exist" << endl;
                system("pause");
            }
        }
        else if (selection == 3) {
            //show information about the zookeeper
            system("CLS");
            z.showinfo();
            system("pause");
        }
        else if (selection == 10)
        {
            system("CLS");
        }
        else
        {
            system("CLS");
            cout << "Please Enter the correct number choices in menu" << endl;
            system("pause");
        }

    } while (selection != 0);
}

void Option3()
{
    system("CLS");
    int selection;
    do
    {
        
        //exception handling
        cin.exceptions(istream::failbit);
        bool aux = true;
        

        //option 3
        cout << "----------------------------" << endl;
        cout << "Animal Behavior" << endl;
        cout << "1: Make sound" << endl;
        cout << "2: Special Animal (SiberianBlueRobin)" << endl;
        cout << "10: clear screen" << endl;
        cout << "0: Return to main menu" << endl;
        cout << "Enter selection:" << endl;
        do {
            try {
                cout << "PLEASE INSERT VALUE:" << endl;
                cin >> selection;
                aux = true;
            }
            catch (std::ios_base::failure& fail) {
                aux = false;
                cout << "PLEASE INSERT A VALID OPTION." << endl;
                cin.clear();
                std::string tmp;
                getline(cin, tmp);
            }
        } while (aux == false);
        if (selection == 1)
        {
            system("CLS");
            //exception handling
            cin.exceptions(istream::failbit);
            bool aux = true;


            int n = 0;
            int m = 0;
            cout << "Please select an ID to make sound" << endl;
            do {
                try {
                    cout << "PLEASE INSERT VALUE:" << endl;
                    cin >> n;
                    aux = true;
                }
                catch (std::ios_base::failure& fail) {
                    aux = false;
                    cout << "PLEASE INSERT A VALID OPTION." << endl;
                    cin.clear();
                    std::string tmp;
                    getline(cin, tmp);
                }
            } while (aux == false);
            cout << "Make small(1) or big sound (2)" << endl;
            do {
                try {
                    cout << "PLEASE INSERT VALUE:" << endl;
                    cin >> m;
                    aux = true;
                }
                catch (std::ios_base::failure& fail) {
                    aux = false;
                    cout << "PLEASE INSERT A VALID OPTION." << endl;
                    cin.clear();
                    std::string tmp;
                    getline(cin, tmp);
                }
            } while (aux == false);
            
            string temp1 = "";
            string sound = "";
            temp1 = vect[n - 1].getName();
            
            if (n <= 10) 
            {
                if (n == 1 && temp1 != "Null")
                {
                    if (m == 1) {
                        Base c;
                        Base *ptr;
                        ptr = &c;
                        ptr->makeSound();
                        
                    }
                    else if (m == 2) {
                        b->makeSound();
                    }
                    else {
                        cout << "Wrong Entry" << endl;
                    }

                }
                else if (n == 2 && temp1 != "Null")
                {
                    if (m == 1) {
                        CuckooBase c;
                        CuckooBase* ptr;
                        ptr = &c;
                        ptr->makeSound();
                    }
                    else if (m == 2) {
                        CB->makeSound();
                    }
                    else {
                        cout << "Wrong Entry" << endl;
                    }

                }
                else if (n == 3 && temp1 != "Null")
                {
                    if (m == 1) {
                        HyenaBase c;
                        HyenaBase* ptr;
                        ptr = &c;
                        ptr->makeSound();
                    }
                    else if (m == 2) {
                        HB->makeSound();
                    }
                    else {
                        cout << "Wrong Entry" << endl;
                    }

                }
                else if (n == 4 && temp1 != "Null")
                {
                    if (m == 1) {
                        OwlBase c;
                        OwlBase* ptr;
                        ptr = &c;
                        ptr->makeSound();
                    }
                    else if (m == 2) {
                        Ob->makeSound();
                    }
                    else {
                        cout << "Wrong Entry" << endl;
                    }

                }
                else if (n == 5 && temp1 != "Null")
                {
                    if (m == 1) {
                        WolfBase c;
                        WolfBase* ptr;
                        ptr = &c;
                        ptr->makeSound();
                    }
                    else if (m == 2) {
                        Wb->makeSound();
                    }
                    else {
                        cout << "Wrong Entry" << endl;
                    }

                }
                else if (n == 6 && temp1 != "Null")
                {
                    if (m == 1) {
                        ChimpanzeeBase c;
                        ChimpanzeeBase* ptr;
                        ptr = &c;
                        ptr->makeSound();
                    }
                    else if (m == 2) {
                        CCb->makeSound();
                    }
                    else {
                        cout << "Wrong Entry" << endl;
                    }

                }
                else if (n == 7 && temp1 != "Null")
                {
                    if (m == 1) {
                        ElephantBase c;
                        ElephantBase* ptr;
                        ptr = &c;
                        ptr->makeSound();
                    }
                    else if (m == 2) {
                        Eb->makeSound();
                    }
                    else {
                        cout << "Wrong Entry" << endl;
                    }

                }
                else if (n == 8 && temp1 != "Null")
                {
                    if (m == 1) {
                        BeesBase c;
                        BeesBase* ptr;
                        ptr = &c;
                        ptr->makeSound();
                    }
                    else if (m == 2) {
                        BBb->makeSound();
                    }
                    else {
                        cout << "Wrong Entry" << endl;
                    }

                 }
                else if (n == 9 && temp1 != "Null")
                {
                    if (m == 1) {
                        FrogsBase c;
                        FrogsBase* ptr;
                        ptr = &c;
                        ptr->makeSound();
                    }
                    else if (m == 2) {
                        Fb->makeSound();
                    }
                    else {
                        cout << "Wrong Entry" << endl;
                    }

                 }
                else if (n == 10 && temp1 != "Null")
                {
                    if (m == 1) {
                        CatsBase c;
                        CatsBase* ptr;
                        ptr = &c;
                        ptr->makeSound();
                    }
                    else if (m == 2) {
                        Cb->makeSound();
                    }
                    else {
                        cout << "Wrong Entry" << endl;
                    }

                 }
                else {
                    system("CLS");
                    cout << "Animal doesn't exist with that ID." << endl;
                    system("pause");
                }
            }
            else if (n > 10) {
                if (temp1 != "Null")
                {
                    soundtest.makeSound();
                }
                else
                {
                    system("CLS");
                    cout << "Animal is not on the list!" << endl;
                    system("pause");
                }
            }
            else {
                system("CLS");
                cout << "You have entered the wrong number!" << endl;
                system("pause");
            }
        }
        else if (selection == 2)
        {
            system("CLS");
            //exception handling
            cin.exceptions(istream::failbit);
            bool aux = true;

            vector<animalBase*> vec(4);

            animalBase a;
            a.setID(2);

            vec[0] = &a;

            Bird b;
            b.setBreed("breed1");
            vec[1] = &b;

            Robin r;
            r.setName("peggy");
            vec[2] = &r;

            SiberianBlueRobin sr;
            sr.setName("peggy");
            vec[3] = &sr;

            int n = 0;
            cout << "This Animal doesnt have an ID becuase of it's unique features" << endl;
            cout << "1: Make Animal sound" << endl;
            cout << "2: Make Bird sound" << endl;
            cout << "3: Make Robin sound" << endl;
            cout << "4: Make SiberianBlueRobin sound" << endl;
            cout << "0: To Return to main menu" << endl;
            do {
                try {
                    cout << "PLEASE INSERT VALUE:" << endl;
                    cin >> n;
                    aux = true;
                }
                catch (std::ios_base::failure& fail) {
                    aux = false;
                    cout << "PLEASE INSERT A VALID OPTION." << endl;
                    cin.clear();
                    std::string tmp;
                    getline(cin, tmp);
                }
            } while (aux == false);
            if (n == 1)
            {
                vec[0]->display();
            }
            else if (n == 2)
            {
                vec[1]->display();
            }
            else if (n == 3)
            {
                vec[2]->display();
            }
            else if (n == 4)
            {
                vec[3]->display();
            }
            else 
            {
                cout << "You've enter the wrong number" << endl;
            }
        }
        else if (selection == 10)
        {
            system("CLS");
        }
        else
        {
            system("CLS");
            cout << "Please Enter the correct number choices in menu" << endl;
            system("pause");

        }

    } while (selection != 0);
}
void Option4()
{
    system("CLS");
    copy();
    int selection;
    
    do
    {
        //variables
        int num = 0;
        string temp = "";
        //exception handling
        cin.exceptions(istream::failbit);
        bool aux = true;

        //Option 4
        cout << "Welcome " << z.getFirstName() << ", " << z.getLastName() << endl;
        cout << "1: Set Animal Name" << endl;
        cout << "2: Get Animal Name" << endl;
        cout << "3: Set Animal Weight" << endl;
        cout << "4: Get Animal Weight" << endl;
        cout << "5: Set Animal Age" << endl;
        cout << "6: Get Animal Age" << endl;
        cout << "10: clear screen" << endl;
        cout << "0: Return to main menu" << endl;
        cout << "Enter selection:" << endl;
        do {
            try {
                cout << "PLEASE INSERT VALUE:" << endl;
                cin >> selection;
                aux = true;
            }
            catch (ios_base::failure& fail) {
                aux = false;
                cout << "PLEASE INSERT A VALID OPTION." << endl;
                cin.clear();
                std::string tmp;
                getline(cin, tmp);
            }
        } while (aux == false);
        if (selection != 0)
        {
            cout << "Please enter id number you want to change" << endl;
            do {
                try {
                    cout << "PLEASE INSERT VALUE:" << endl;
                    cin >> num; 
                    temp = vect[num - 1].getName();
                
                    aux = true;
                }
                catch (std::ios_base::failure& fail) {
                    aux = false;
                    cout << "PLEASE INSERT A VALID OPTION." << endl;
                    cin.clear();
                    std::string tmp;
                    getline(cin, tmp);
                }
            } while (aux == false);
        }
        if (selection == 1 && temp != "Null")
        {
            //exception handling
            cin.exceptions(std::istream::failbit);
            bool aux = true;

            //variables
            string name = "";
            cout << "Please enter the name of the animal" << endl;
            cin >> name;
            vect2[num - 1].setName(name);
            cout << "Successful" << endl;
        }
        else if (selection == 2 && temp != "Null")
        {
            cout << vect2[num - 1].getName() << endl;
        }
        else if (selection == 3 && temp != "Null")
        {
            //exception handling
            cin.exceptions(std::istream::failbit);
            bool aux = true;

            //variables
            int weight = 0;
            cout << "Please enter the Weight" << endl;
            do {
                try {
                    cout << "PLEASE INSERT VALUE:" << endl;
                    cin >> weight;
                    vect2[num - 1].setWeight(weight);
                    aux = true;
                }
                catch (std::ios_base::failure& fail) {
                    aux = false;
                    cout << "PLEASE INSERT A VALID OPTION." << endl;
                    cin.clear();
                    std::string tmp;
                    getline(cin, tmp);
                }
            } while (aux == false);
            cout << "Successful" << endl;
        }
        else if (selection == 4 && temp != "Null")
        {
            cout << vect2[num - 1].getWeight() <<endl;
        }
        else if (selection == 5 && temp != "Null")
        {
            //exception handling
            cin.exceptions(std::istream::failbit);
            bool aux = true;

            //variables
            int age = 0;
            cout << "Please enter the age" << endl;
            do {
                try {
                    cout << "PLEASE INSERT VALUE:" << endl;
                    cin >> age;
                    vect2[num - 1].setAge(age);
                    aux = true;
                }
                catch (std::ios_base::failure& fail) {
                    aux = false;
                    cout << "PLEASE INSERT A VALID OPTION." << endl;
                    cin.clear();
                    std::string tmp;
                    getline(cin, tmp);
                }
            } while (aux == false);
            cout << "Successful" << endl;
        }
        else if (selection == 6 && temp != "Null")
        {
            cout << vect2[num - 1].getAge() << endl;
        }
        else if (selection == 10)
        {
            system("CLS");
        }
        else
        {
            system("CLS");
            cout << "Please Enter the correct number choices in menu" << endl;
            system("pause");
        }
       
    } while (selection != 0);
    paste();
}
void copy()
{
    for (int i = 0; i < vect.size(); i++) {
        vect2.push_back(Animal(vect[i].getName(), vect[i].getAge(), vect[i].getWeight()));
    }
}
void paste()
{
    for (int i = 0; i < vect.size(); ++i) {
        string name = vect2[i].getName();
        int age = vect2[i].getAge();
        double weight = vect2[i].getWeight();
        vect[i].setName(name);
        vect[i].setAge(age);
        vect[i].setWeight(weight);        
    }
}
void Login(int& loggedin)
{
    //exception handling
    cin.exceptions(istream::failbit);
    bool aux = true;
    
    //log in menu
    int password = 1111;
    int username = 1111;
    int pass = 0;
    int user = 0;
    int attempt = 0;

    while (true) {
        cout << "Please enter your username and password." << endl;
        cout << "For demonstration purposes the password and username is (1111)" << endl;
        cout << "username:" << endl;
        
        do {
            try {
                cout << "PLEASE INSERT VALUE:" << endl;
                cin >> user;
                aux = true;
            }
            catch (std::ios_base::failure& fail) {
                aux = false;
                cout << "PLEASE INSERT A VALID OPTION." << endl;
                cin.clear();
                std::string tmp;
                getline(cin, tmp);
            }
        } while (aux == false);
        cout << "Enter Your Password: " << endl;
        do {
            try {
                cout << "PLEASE INSERT VALUE:" << endl;
                cin >> pass;
                aux = true;
            }
            catch (std::ios_base::failure& fail) {
                aux = false;
                cout << "PLEASE INSERT A VALID OPTION." << endl;
                cin.clear();
                std::string tmp;
                getline(cin, tmp);
            }
        } while (aux == false);
        if (pass == password && user == username) {
            cout << "You have successfully loged in" << endl;
            loggedin = 1;
            break;
        }
        else
        {
            cout << "you entered the wrong user name and/or password" << endl;
        }
        attempt = attempt + 1;
        cout << "you have three attempts this is attempt: #" << attempt << endl;
        if (attempt == 3) {
            cout << "you have failed to log in, system shutdown" << endl;
            loggedin = 0;
            break;
        }
    }
}

void printInventoryReport(vector<Zoo>& ZooDatabase)
{
    int borderLength = 16 * 7; 
    for (int i = 0; i < borderLength; i++) {
        cout << '-';
    }
    cout << endl;


    int padding = 40 + (40 - strlen("Zoo Inventory Report:")) / 2;
    cout << left << setw(padding) << " " << "Zoo Inventory Report:" << endl;
    cout << endl;


    cout << left << setw(16) << "ID"
        << setw(16) << "Name"
        << setw(16) << "Age"
        << setw(16) << "Weight"
        << setw(16) << "Health"
        << setw(16) << "Nutrition"
        << setw(16) << "Hydration"
        << endl;

    for (int i = 0; i < borderLength; i++) {
        cout << '-';
    }
    cout << endl;

    for (auto ZooItem : ZooDatabase) {

        string temp = "";
        temp = ZooItem.getName();
        if (temp != "Null") {

            cout << left << setw(16) << ZooItem.getId()
                << setw(16) << ZooItem.getName()
                << setw(16) << ZooItem.getAge()
                << setw(16) << ZooItem.getWeight()
                << setw(16) << ZooItem.getHealthScore()
                << setw(16) << ZooItem.getHydrationLevel()
                << setw(16) << ZooItem.getNutritionLevel()
                << endl;
        }
    }


    for (int i = 0; i < borderLength; i++) {
        cout << '-';
    }
    cout << endl;
}
