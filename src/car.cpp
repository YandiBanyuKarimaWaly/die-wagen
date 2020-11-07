#include <iostream>
#include "car.hpp"

Car::Car(std::string name, Colour colour) : Vehicle(name, 4, 4)
{
    this->colour(colour);
}

Car::Car(char* name, Colour colour) : Vehicle(name, 4, 4)
{
    this->colour(colour);
}

Car::Car(std::string name, int seats, int wheels, Colour colour) : Vehicle(name)
{
    this->seats(seats);
    this->wheels(wheels);
    this->colour(colour);
}

Car::Car(char* name, int seats, int wheels, Colour colour) : Vehicle(name)
{
    this->seats(seats);
    this->wheels(wheels);
    this->colour(colour);
}

void Car::seats(int seats)
{
    if (seats < 4) {
        std::cerr << "Car must have at least 4 seats. Got " << seats << std::endl;
        return;
    }

    this->n_seats_ = seats;
}

void Car::wheels(int wheels)
{
    if (wheels < 4) {
        std::cerr << "Car must have at least 4 wheels. Got " << wheels << std::endl;
        return;
    }

    this->n_wheels_ = wheels;
}

void Car::colour(Colour colour)
{
    this->colour_ = colour;
}

Colour Car::colour()
{
    return this->colour_;
}