#include "Auto.hpp"
#include "Bus.hpp"
#include "Car.hpp"
#include <iostream>
#include <memory>
#include <pthread.h>

using std::unique_ptr;
using std::shared_ptr;
using std::weak_ptr;
using std::make_shared;

using namespace vehicle;

int main(int argc, char* argv[])
{
    shared_ptr<Car> c1 = make_shared<Car>(2019, "Audi", "black");
    c1->displayType();
    shared_ptr<Car> c2 = c1;
    c2->displayType();
    
    weak_ptr<Car> c3 = c1;
    auto car = c3.lock();
    if(car) {
        car->displayType();
    }

    pthread_t threads[3];
    int id, ids[3] = {1, 2, 3};
    shared_ptr<Car> cars[3] = {c1, c2, car};

    for(id = 0; id < 3; id++)
        pthread_create(&threads[id], nullptr, cars[id]->startEngine, &ids[id]);

    for(id = 0; id < 3; id++)
        pthread_join(threads[id], nullptr);

    return 0;
}

