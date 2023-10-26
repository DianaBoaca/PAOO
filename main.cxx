#include <iostream>
#include "Dreptunghi.h.in"

int main(int argc, char* argv[]) {
    char c[] = "albastru";
    Dreptunghi dr(2,3,c);
    Dreptunghi d(dr); //copy constructor
    //sau Dreptunghi d = dr;
    Dreptunghi dd;

    std::cout << "Aria primului dreptunghi " << dr.getCuloare() << " este: " << dr.aria() << std::endl;
    std::cout << "Aria celui de-al doilea dreptunghi " << d.getCuloare() << " este: " << d.aria() << std::endl;
    std::cout << "Aria celui de-al treilea dreptunghi " << dd.getCuloare() << " este: " << dd.aria() << std::endl;

    Dreptunghi drt(std::move(dr)); //move constructor

    std::cout << "Aria primului dreptunghi " << dr.getCuloare() << " este: " << dr.aria() << std::endl;
    std::cout << "Aria celui de-al patrulea dreptunghi " << drt.getCuloare() << " este: " << drt.aria() << std::endl;
}
