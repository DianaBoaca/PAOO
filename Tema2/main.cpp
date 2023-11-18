#include "Auto.hpp"
#include "Bus.hpp"
#include "Car.hpp"
#include "ElectricCar.hpp"
#include <iostream>

using namespace vehicle;

int main(int argc, char* argv[])
{
    Bus b(48, "Christian Tour");
    b.displayType();
    b.startEngine();
    b.stopInStation("Arta Textila");

    std::cout << "-------------------" << std::endl;

    Car c1(2017, "Renault", "blue");
    Car c2(2002, "VW", "black");
    c1.displayType();
    c1.startEngine();
    c2.displayType();
    c2 = c1;
    c2.startEngine();
    c2.displayType();
    c2.paintCar("gray");
    c2.displayType();
    c1.displayType();

    std::cout << "-------------------" << std::endl;

    c1 = Car(2019, "Audi", "black");
    c1.displayType();

    std::cout << "-------------------" << std::endl;

    Car c3(c1);
    c3.displayType();

    std::cout << "-------------------" << std::endl;

    Car c4(std::move(c1));
    c4.displayType();
    c1.displayType();

    std::cout << "-------------------" << std::endl;

    ElectricCar e(2023, "Hyundai", "green");
    e.displayType();
    e.chargeCar();
    e.paintCar("pink");
    e.displayType();

    return 0;
}

