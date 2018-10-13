//
// Created by patgi on 2018-10-12.
//

#include "animal.hpp"
#include <iostream>
using namespace std;
long animal:: counter = 1;

//default constructor
animal::animal() {
    id = counter++;
    alive = true;
    age = 0;
    xCoor = 0;
    yCoor=0;
    cout << "default animal constructor" << endl;
}

//3 parameter constructor, takes an age int, and doubles for x and y coor.
animal::animal(int a, double x, double y) {
    id = counter++;
    alive = true;
    age = a;
    xCoor = x;
    yCoor = y;
    cout << "3 param animal constructor" << endl;
}

//Copy constructor
animal::animal(const animal& a) {
    id = a.id;
    alive = a.alive;
    age = a.age;
    xCoor = a.xCoor;
    yCoor = a.yCoor;
}

//getter for animal age
int animal::get_age() const {
    return age;
}

//getter for animal id
long animal::get_id() const {
    return id;
}

//getter for animal alive state
bool animal::get_alive() const{
    return alive;
}

//getter for animal x coordinate
double animal::get_xCoor() const{
    return xCoor;
}

//getter for animal y coordinate
double animal::get_yCoor() const {
    return yCoor;
}

//takes 2 double parameters and sets new animal coordinates
void animal::move(double x, double y) {
    xCoor = x;
    yCoor = y;
}

//method for animals to sleep
void animal::sleep() {
    cout << "animal went to sleep" << endl;
}

//method for animals to eat
void animal::eat() {
    cout << "animal is eating" << endl;
}

//overloaded insertion operator for animal
std::ostream& operator<<(std::ostream& os, const animal & dt) {
    os << "animal age: " << dt.age
        << " animal id: " << dt.id
        << " animal alive: " << boolalpha << dt.alive
        << "animal location: " << dt.xCoor << ", " << dt.yCoor;
    return os;
}