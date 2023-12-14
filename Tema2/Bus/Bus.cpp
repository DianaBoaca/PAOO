#include "Bus.hpp"
#include <iostream>
#include <cstring>

using namespace vehicle;

Bus::Bus(int capacity, const char* agency) {
    this->capacity = capacity;

    this->agency = new char[strlen(agency) + 1];
    strcpy(this->agency, agency);
}

Bus::~Bus() {
    delete[] this->agency;
}

void Bus::displayType() {
    std::cout << "This is a " << this->agency << " bus!" << std::endl;
}

void Bus::stopInStation(const char* station) {
    std::cout << "The bus stopped at " << station << "!" << std::endl;
}
