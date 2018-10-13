//
// Created by patgi on 2018-10-12.
//

#include "bird.hpp"
#include <iostream>
using namespace std;

//default constructor for bird
bird::bird() : animal() {
    zCoor = 0;
    cout << "default bird constructor" << endl;
}

//4 param constructor, int for age, 3 doubles for x,y and z coordinates.
bird::bird(int age, double x, double y, double z) : animal(age, x, y) {
    zCoor = z;
    cout << "4 param bird constructor" << endl;
}

//copy constructor for bird
bird::bird(const bird& b) : animal() {
    zCoor = b.zCoor;
}

//getter for bird age
int bird::get_age() const {
    return animal::get_age();
}

//getter for bird animal id
long bird::get_id() const {
    return animal::get_id();
}

//getter for bird alive state
bool bird::get_alive() const {
    return animal::get_alive();
}

//getter for bird x coordinate
double bird::get_xCoor() const {
    return animal::get_xCoor();
}

//getter for bird y coordinate
double bird::get_yCoor() const {
    return animal::get_yCoor();
}

//getter for bird z coordinate
double bird::get_zCoor() const {
    return zCoor;
}

void bird::move(double x, double y, double z) {
    animal::move(x, y);
    zCoor = z;
}

//sleep method for birds
void bird::sleep() {
    cout << "bird is sleeping" << endl;
}

//eat method for birds
void bird::eat() {
    cout << "bird is eating" << endl;
}

//overloaded insertion operator for birds
std::ostream& operator<<(std::ostream& os, bird& dt) {
    animal *a = &dt;
    os << *a << ", " << dt.zCoor;
    return os;
}