#include <iostream>
#include "Dreptunghi.h"

int main(int argc, char* argv[]) {
    Dreptunghi dr(2,3,17);
    Dreptunghi d(dr);

    std::cout << "Aria primului dreptunghi este: " << dr.aria() << std::endl;
    std::cout << "Aria celui de-al doilea dreptunghi este: " << d.aria() << std::endl;

    Dreptunghi drt(std::move(dr));

    std::cout << "Aria primului dreptunghi este: " << dr.aria() << std::endl;
    std::cout << "Aria celui de-al treilea dreptunghi este: " << drt.aria() << std::endl;
}