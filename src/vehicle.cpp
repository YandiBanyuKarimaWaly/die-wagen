#include <iostream>
#include "vehicle.hpp"

void Vehicle::init(std::string name, int wheels, int seats)
{
    this->current_position_ = 0;
    this->name_ = name;
    this->wheels(wheels);
    this->seats(seats);
}

Vehicle::Vehicle(std::string name)
{
    this->init(name, 1, 1);
}

Vehicle::Vehicle(char* name)
{
    std::string name_std(name);
    this->init(name_std, 1, 1);
}

Vehicle::Vehicle(std::string name, int wheels, int seats)
{
    this->init(name, wheels, seats);
}

Vehicle::Vehicle(char* name, int wheels, int seats)
{
    std::string name_std(name);
    this->init(name_std, wheels, seats);
}

void Vehicle::seats(int seats)
{
    if (seats < 1) {
        std::cerr << "Number of seats must be at least 1. Got " << seats << std::endl;
        return;
    }

    this->n_seats_ = seats;
}

int Vehicle::seats()
{
    return this->n_seats_;
}

void Vehicle::wheels(int wheels)
{
    if (wheels < 1) {
        std::cerr << "Number of wheels must be at least 1. Got " << wheels << std::endl;
        return;
    }

    this->n_wheels_ = wheels;
}

int Vehicle::wheels()
{
    return this->n_wheels_;
}

void Vehicle::name(std::string new_name)
{
    this->name_ = new_name;
}

void Vehicle::name(char* new_name)
{
    std::string new_name_std(new_name);
    this->name(new_name_std);
}

std::string Vehicle::name()
{
    return this->name_;
}

int Vehicle::drive(int distance)
{
    this->current_position_ += distance;
    return distance;
}

int Vehicle::current_position()
{
    return this->current_position_;
}