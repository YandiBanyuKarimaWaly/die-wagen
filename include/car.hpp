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

        void seats(int seats) override;
        void wheels(int wheels) override;

        void colour(Colour new_colour);
        Colour colour();
};