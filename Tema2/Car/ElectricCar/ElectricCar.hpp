#include "Car.hpp"
#include <iostream>
#include <string>

namespace vehicle {
    class ElectricCar : public Car {
        bool isCharged;

        public:
        ElectricCar(int year, const char* brand, const char* color); 

        void displayType() override;
        void startEngine() override;
        //void paintCar(const char* color) override;

        void chargeCar();
    };
}
