//
// Created by patgi on 2018-10-12.
//

#ifndef INC_3512LAB4_CANINE_HPP
#include "animal.hpp"
#define INC_3512LAB4_CANINE_HPP
class canine : public animal {
public:
    canine();
    canine(int age, double x, double y);
    canine(const canine&);
    int get_age() const;
    long get_id() const;
    bool get_alive() const;
    double get_xCoor() const;
    double get_yCoor() const;
    virtual ~canine() {
        std::cout << "Canine destructor";
    };
    void move(double x, double y) override;
    void sleep() override;
    void eat() override;
    void hunt();
    friend std::ostream& operator<<(std::ostream& os, const canine& dt);
};
#endif //INC_3512LAB4_CANINE_HPP
