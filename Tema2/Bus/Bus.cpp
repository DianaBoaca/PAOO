#include "Bus.hpp"
#include <iostream>
#include <cstring>

using namespace vehicle;

Bus::Bus(int capacity, const char* agency) {
    this->capacity = capacity;
    strcpy(this->agency, agency);
}

Bus::~Bus() {
    delete[] this->agency;
}

void Bus::displayType() {
    std::cout << "This is a " << this->agency << " bus!" << std::endl;
}

void Bus::startEngine() {
    std::cout << "The engine is on!" << std::endl;
}

void Bus::stopInStation(const char* station) {
    std::cout << "The bus stopped in " << station << "!" << std::endl;
}
