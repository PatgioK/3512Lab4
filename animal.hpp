//
// Created by patgi on 2018-10-12.
//

#ifndef INC_3512LAB4_ANIMAL_HPP
#include <iostream>
#define INC_3512LAB4_ANIMAL_HPP

//animal class. Has age, alive, x coordinate, y coordinate, and unique id.
class animal {
private:
    int age;
    bool alive;
    double xCoor;
    double yCoor;
    long id;

public:
    static long counter;
    animal();
    animal(int age, double x, double y);
    animal(const animal&);
    int get_age() const;
    long get_id() const;
    bool get_alive() const;
    double get_xCoor() const;
    double get_yCoor() const;
    virtual void move(double x, double y);
    virtual void sleep();
    virtual void eat();
    virtual ~animal() {
        std::cout << "animal destructor";
    };
    friend std:: ostream& operator<<(std::ostream& os, const animal& dt);
};
#endif //INC_3512LAB4_ANIMAL_HPP
