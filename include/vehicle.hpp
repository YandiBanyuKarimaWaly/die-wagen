#ifndef VEHICLE_HPP
#define VEHICLE_HPP

#include <string>

class Vehicle {
    std::string name_;

    void init(std::string name, int wheels, int seats);

    protected:
        int n_wheels_, n_seats_, current_position_;

    public:
        Vehicle(std::string name);
        Vehicle(char* name);

        Vehicle(std::string name, int wheels, int seats);
        Vehicle(char* name, int wheels, int seats);

        void set_name(std::string new_name);
        void set_name(char* new_name);
        std::string get_name();

        virtual void set_wheels(int n_wheels);
        int get_wheels();

        virtual void set_seats(int n_seats);
        int get_seats();

        virtual int drive(int dist);
        int get_current_position();
};

#endif