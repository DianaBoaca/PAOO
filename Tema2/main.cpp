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


}

