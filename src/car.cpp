#include <iostream>
#include "car.hpp"

Car::Car(std::string name, Colour colour) : Vehicle(name, 4, 4)
{
    this->set_colour(colour);
}

Car::Car(char* name, Colour colour) : Vehicle(name, 4, 4)
{
    this->set_colour(colour);
}

Car::Car(std::string name, int seats, int wheels, Colour colour) : Vehicle(name)
{
    this->set_seats(seats);
    this->set_wheels(wheels);
    this->set_colour(colour);
}

Car::Car(char* name, int seats, int wheels, Colour colour) : Vehicle(name)
{
    this->set_seats(seats);
    this->set_wheels(wheels);
    this->set_colour(colour);
}

void Car::set_seats(int seats)
{
    if (seats < 4) {
        std::cerr << "Car must have at least 4 seats. Got " << seats << std::endl;
        return;
    }

    this->n_seats_ = seats;
}

void Car::set_wheels(int wheels)
{
    if (wheels < 4) {
        std::cerr << "Car must have at least 4 wheels. Got " << wheels << std::endl;
        return;
    }

    this->n_wheels_ = wheels;
}

void Car::set_colour(Colour colour)
{
    this->colour_ = colour;
}

Colour Car::get_colour()
{
    return this->colour_;
}