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

        void name(std::string new_name);
        void name(char* new_name);
        std::string name();

        virtual void wheels(int n_wheels);
        int wheels();

        virtual void seats(int n_seats);
        int seats();

        virtual int drive(int dist);
        int current_position();
};