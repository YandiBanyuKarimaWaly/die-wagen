#include <iostream>
#include "vehicle.hpp"

void Vehicle::init(std::string name, int wheels, int seats)
{
    this->current_position_ = 0;
    this->name_ = name;
    this->set_wheels(wheels);
    this->set_seats(seats);
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

void Vehicle::set_seats(int seats)
{
    if (seats < 1) {
        std::cerr << "Number of seats must be at least 1. Got " << seats << std::endl;
        return;
    }

    this->n_seats_ = seats;
}

int Vehicle::get_seats()
{
    return this->n_seats_;
}

void Vehicle::set_wheels(int wheels)
{
    if (wheels < 1) {
        std::cerr << "Number of wheels must be at least 1. Got " << wheels << std::endl;
        return;
    }

    this->n_wheels_ = wheels;
}

int Vehicle::get_wheels()
{
    return this->n_wheels_;
}

void Vehicle::set_name(std::string new_name)
{
    this->name_ = new_name;
}

void Vehicle::set_name(char* new_name)
{
    std::string new_name_std(new_name);
    this->set_name(new_name_std);
}

std::string Vehicle::get_name()
{
    return this->name_;
}

int Vehicle::drive(int distance)
{
    this->current_position_ += distance;
    return distance;
}

int Vehicle::get_current_position()
{
    return this->current_position_;
}