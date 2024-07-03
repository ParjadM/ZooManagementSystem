#include"Zookeeper.h"

Zookeeper::Zookeeper(string fName, string lName)
{
    setFirstName(fName);
    setLastName(lName);
}
//SETTERS
void Zookeeper::setFirstName(string fName)
{
    firstName = fName;
}
void Zookeeper::setLastName(string lName)
{
    lastName = lName;
}
//GETTERS
string Zookeeper::getFirstName()
{
    return firstName;
}
string Zookeeper::getLastName()
{
    return lastName;
}
void Zookeeper::showinfo()
{
    cout << "Welcome Zookeper Name: " << getFirstName() << ", " << getLastName() << endl;
    cout << endl;
}