#include <iostream>
#include "motorbike.hpp"

Motorbike::Motorbike(std::string name, int seats) : Vehicle(name)
{
    this->set_wheels(2);
    this->set_seats(seats);
}

Motorbike::Motorbike(char* name, int seats) : Vehicle(name)
{
    this->set_wheels(2);
    this->set_seats(seats);
}

void Motorbike::set_seats(int seats)
{
    if (seats < 1 || seats > 2) {
        std::cerr << "Motorbike seats can only be 1 or 2. Got " << seats << std::endl;
        return;
    }

    this->n_seats_ = seats;
}

int Motorbike::drive(int distance)
{
    if (distance < 0) {
        std::cerr << "Motorbike can only move forward!" << std::endl;
    } else {
        this->current_position_ += distance;
    }

    return distance;
}

void Motorbike::set_wheels(int wheels)
{
    if (wheels != 2) {
        std::cerr << "Motorbike can only has 2 wheels. Got " << wheels << std::endl;
        return;
    }

    this->n_wheels_ = wheels;
}