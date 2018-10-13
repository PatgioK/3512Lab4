//
// Created by patgi on 2018-10-12.
//

#ifndef INC_3512LAB4_BIRD_HPP
#include "animal.hpp"
#define INC_3512LAB4_BIRD_HPP
class bird : public animal {
public:
    double zCoor;

    bird();
    bird(int age, double x, double y, double z);
    bird(const bird&);
    int get_age() const;
    long get_id() const;
    bool get_alive() const;
    double get_xCoor() const;
    double get_yCoor() const;
    double get_zCoor() const;
    virtual ~bird() {
        std::cout << "bird destructor";
    };
    void move(double x, double y, double z);
    void sleep() override;
    void eat() override;
    friend std::ostream& operator<<(std::ostream& os, bird& dt);
};
#endif //INC_3512LAB4_BIRD_HPP
