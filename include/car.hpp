#ifndef CAR_HPP
#define CAR_HPP

#include "vehicle.hpp"

enum Colour {
    RED,
    BLUE,
    YELLOW,
    GREEN,
    ORANGE
};

class Car : public Vehicle {
    Colour colour_;

    public:
        Car(std::string name, Colour colour);
        Car(char* name, Colour colour);

        Car(std::string name, int wheels, int seats, Colour colour);
        Car(char* name, int wheels, int seats, Colour colour);

        void set_seats(int seats) override;
        void set_wheels(int wheels) override;

        void set_colour(Colour new_colour);
        Colour get_colour();
};

#endif