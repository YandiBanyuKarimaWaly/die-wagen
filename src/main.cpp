#include <iostream>

#include "motorbike.hpp"
#include "car.hpp"

int main(int argc, char** argv)
{
    Motorbike orang("kawasaki", 2);
    Car orang2("inova", BLUE);

    std::string namaMotorOrang = orang.get_name();
    orang.drive(-1);
    int normal = orang.get_seats();
    orang.set_seats(3);
    int before = orang.get_seats();
    orang.set_seats(1);
    int after = orang.get_seats();
    std::cout << namaMotorOrang << "\t" << normal << "\t" << before << "\t" << after << std::endl;
}