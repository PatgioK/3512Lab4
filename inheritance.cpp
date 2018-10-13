//
// Created by patgi on 2018-10-12.
//

#include <iostream>
#include "animal.hpp"
#include "bird.hpp"
#include "canine.hpp"
using namespace std;

int main() {
    // create an Animal class.
    animal* a = new animal();
    // create a bird class derived from Animal.
    animal* b =  new bird();
    // create a Canine class derived from Animal.
    animal* c = new canine();
    // print information of animal.
    cout << *a << endl;
    // print information of bird.
    cout << *dynamic_cast<bird*>(b) << endl;
    // print information of Canine.
    cout << *dynamic_cast<canine*>(c) << endl;
    //move animal to 3,4
    a->move(3, 4);
    //move the bird to 2,3,4
    dynamic_cast<bird*>(b)->move(2, 3, 4);
    //move canine to 1,3
    c->move(1, 3);
    // print information of animal.
    cout << *a << endl;
    // create a bird class derived from Animal.
    cout << *dynamic_cast<bird*>(b) << endl;
    // print information of Canine.
    cout << *dynamic_cast<canine*>(c) << endl;
    // Print the msg of an animal is eating.
    a->eat();
    // Print the msg of a bird is eating.
    b->eat();
    // Print the msg of a Canine is eating.
    c->eat();
    // Print the msg of a animal is sleeping.
    a->sleep();
    // Print the msg of a Bird is sleeping.
    b->sleep();
    // Print the msg of a Canine is sleeping.
    c->sleep();
    //cast animal to canine to hunt
    dynamic_cast<canine*>(c)->hunt();
    //call destructor
    return 0;
}