#pragma once
#include "Auto.hpp"

namespace vehicle {
    class Car : public Auto {
        protected:
        int year;
        char* brand;
        char* color;

        public:
        Car(int year, const char* brand, const char* color);
        ~Car();
        Car(const Car &otherCar);
        Car(Car &&otherCar);

        Car& operator=(const Car &otherCar);
        Car& operator=(Car &&otherCar);

        void displayType() override;
        void startEngine() override;

        void paintCar(const char* color);
    };
}
