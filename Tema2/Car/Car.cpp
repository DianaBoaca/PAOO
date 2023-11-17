#include "Car.hpp"
#include <iostream>
#include <cstring>

using namespace vehicle;

Car::Car(int year, char* brand, char* color) {
    this->year = year;

    this->brand = new char[strlen(brand) + 1];
    strcpy(this->brand, brand);

    this->color = new char[strlen(color) + 1];
    strcpy(this->color, color);
}

Car::~Car() {
    delete[] this->brand;
    delete[] this->color;
}

Car::Car(const Car &otherCar) {
    this->year = otherCar.year;

    this->brand = new char[strlen(otherCar.brand) + 1];
    strcpy(this->brand, otherCar.brand);

    this->color = new char[strlen(otherCar.color) + 1];
    strcpy(this->color, otherCar.color);

}

Car::Car(Car &&otherCar) {
    this->year = otherCar.year;
    this->brand = otherCar.brand;
    this->color = otherCar.color;

    otherCar.year = 0;
    otherCar.brand = nullptr;
    otherCar.color = nullptr;
}

Car& Car::operator= (const Car &otherCar) {
    this->year = otherCar.year;

    delete[] this->brand;
    this->brand = new char[strlen(otherCar.brand) + 1];
    strcpy(this->brand, otherCar.brand);

    delete[] this->color;
    this->color = new char[strlen(otherCar.color) + 1];
    strcpy(this->color, otherCar.color);

    return *this;
}

Car& Car::operator=(Car &&otherCar) {
    this->year = otherCar.year;

    delete[] this->brand;
    this->brand = otherCar.brand;

    delete[] this->color;
    this->color = otherCar.color;
    
    otherCar.year = 0;
    otherCar.brand = nullptr;
    otherCar.color = nullptr;

    return *this;
}

void Car::displayType() {
    std::cout << "This is a car!" << std::endl;
}

void Car::startEngine() {
    std::cout << "The engine is on!" << std::endl;
}

void Car::paintCar(char* color) {
    this->color = color;
}
