#include "ElectricCar.hpp"
#include <string>

using namespace vehicle;

ElectricCar::ElectricCar(int year, char* brand, char* color) : Car(year, brand, color) {
    isCharged = false;
}

void ElectricCar::displayType() {
    std::cout << "This is a electric car!" << std::endl;
}

void ElectricCar::startEngine() {
    std::cout << "The engine is on!" << std::endl;
}

void ElectricCar::paintCar(char* color) {
    this->color = color;
}

void ElectricCar::chargeCar() {
    isCharged = true;
}
