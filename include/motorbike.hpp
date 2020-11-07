#ifndef MOTORBIKE_HPP
#define MOTORBIKE_HPP

#include "vehicle.hpp"

class Motorbike : public Vehicle {
    private:
        void set_wheels(int wheels) override;

    public:
        Motorbike(std::string name) : Vehicle(name, 2, 1) {}
        Motorbike(char* name) : Vehicle(name, 2, 1) {}

        Motorbike(std::string name, int seats);
        Motorbike(char* name, int seats);

        void set_seats(int seats) override;
        int drive(int distance) override;
};

#endif