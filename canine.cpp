//
// Created by patgi on 2018-10-12.
//

#include "canine.hpp"
using namespace std;

//default constructor for canines
canine::canine() : animal() {
    cout << "Default Canine Constructor" << endl;
}

//3 param constructor for canines
canine::canine(int age, double x, double y) : animal(age, x, y) {
    cout << "Three parameter Canine Constructor" << endl;
}

//copy constructor for canines
canine::canine(const canine& c) : animal() {
}

//movement method, sets new x and y coordinates
void canine::move(double x, double y) {
    animal::move(x, y);
}

//sleep method for canines
void canine::sleep() {
    cout << "canine is sleeping" << endl;
}

//eat method for canines
void canine::eat() {
    cout << "canine is eating " << endl;
}

//hunt method for canines
void canine::hunt() {
    cout << "canine is hunting" << endl;
}

//getter for canine age
int canine::get_age() const {
    return animal::get_age();
}

//getter for canine id
long canine::get_id() const {
    return animal::get_id();
}

//getter for canine alive state
bool canine::get_alive() const {
    return animal::get_alive();
}

//getter for canine x coordinate
double canine::get_xCoor() const {
    return animal::get_xCoor();
}

//getter for canine y coordinate
double canine::get_yCoor() const {
    return animal::get_yCoor();
}

//overloaded insertion operator for canines
std::ostream& operator <<(std::ostream& os, const canine& dt) {
    os << "Canine age: " << dt.get_age()
       << " Canine id: " << dt.get_id()
       << " Canine alive: " << boolalpha << dt.get_alive()
       << " Canine location: " << dt.get_xCoor() << ", " << dt.get_yCoor();
    return os;
}