#include "ElectricCar.hpp"
#include <cstring>

using namespace vehicle;

ElectricCar::ElectricCar(int year, const char* brand, const char* color) : Car(year, brand, color) {
    isCharged = false;
}

void ElectricCar::displayType() {
    std::cout << "This is a " << this->color <<" electric car!" << std::endl;
}

void ElectricCar::startEngine() {
    std::cout << "The engine is on!" << std::endl;
}

void ElectricCar::chargeCar() {
    isCharged = true;
    std::cout << "The car has been charged!" << std::endl;
}
