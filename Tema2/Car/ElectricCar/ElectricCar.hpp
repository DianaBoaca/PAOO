#include "Car.hpp"
#include <iostream>
#include <string>

namespace vehicle {
    class ElectricCar : public Car {
        bool isCharged;

        public:
        ElectricCar(int year, char* brand, char* color); 

        void displayType() override;
        void startEngine() override;
        void paintCar(char* color) override;

        void chargeCar();
    };
}
