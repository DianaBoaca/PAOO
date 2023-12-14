#include "Car.hpp"
#include <iostream>
#include <cstring>
#include <unistd.h>
#include <mutex>

using namespace vehicle;
using std::mutex;

pthread_mutex_t mutex;
int Car::carsStarted;

Car::Car(int year, const char* brand, const char* color) {
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
    std::cout << "copy constr" << std::endl;

    this->year = otherCar.year;

    this->brand = new char[strlen(otherCar.brand) + 1];
    strcpy(this->brand, otherCar.brand);

    this->color = new char[strlen(otherCar.color) + 1];
    strcpy(this->color, otherCar.color);

}

Car::Car(Car &&otherCar) {
    std::cout << "move constr" << std::endl;

    this->year = otherCar.year;
    this->brand = otherCar.brand;
    this->color = otherCar.color;

    otherCar.year = 0;
    otherCar.brand = nullptr;
    otherCar.color = nullptr;
}

Car& Car::operator=(const Car &otherCar) {
    std::cout << "copy assig" << std::endl;

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
    std::cout << "move assig" << std::endl;

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
    if(this->color == nullptr) {
        std::cout << "This car has been deleted!" <<std::endl;
        return;
    }
        
    std::cout << "This is a " << this->color << " car!" << std::endl;
}

void *Car::startEngine(void* arg) {
    pthread_mutex_lock(&mutex);
    carsStarted++;
    std::cout << "The engine is on! - thread " << *(int*)arg << std::endl;
    std::cout << carsStarted << " cars started!" <<std::endl;
    pthread_mutex_unlock(&mutex);
    pthread_exit(NULL);
}

void Car::paintCar(const char* color) {
    delete[] this->color;
    this->color = new char[strlen(color) + 1];
    strcpy(this->color, color);
}
