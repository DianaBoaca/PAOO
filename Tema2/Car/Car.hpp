#pragma once
#include "Auto.hpp"
#include <pthread.h>

namespace vehicle {
    class Car : public Auto {
        protected:
        int year;
        char* brand;
        char* color;
        static int carsStarted;

        public:
        Car(int year, const char* brand, const char* color);
        ~Car();
        Car(const Car &otherCar);
        Car(Car &&otherCar);

        Car& operator=(const Car &otherCar);
        Car& operator=(Car &&otherCar);

        void displayType() override;

        static void *startEngine(void* arg);
        virtual void paintCar(const char* color);
    };
}
