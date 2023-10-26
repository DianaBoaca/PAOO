#include <iostream>
#include <cstring>
#include "Dreptunghi.h.in"

Dreptunghi::Dreptunghi() {
    x = 1;
    y = 1;
    culoare = new char[4];
    strcpy(culoare, "alb");
}

Dreptunghi::Dreptunghi(int x, int y, char* culoare) {
    this->x = x;
    this->y = y;
    this->culoare = new char[strlen(culoare) + 1];
    strcpy(this->culoare, culoare);
}

Dreptunghi::Dreptunghi(const Dreptunghi &dr) {
    this->x = dr.x;
    this->y = dr.y;
    int l = strlen(dr.culoare) + 1;
    this->culoare = new char[l];
    memcpy(this->culoare, dr.culoare, l);
    
}

Dreptunghi::Dreptunghi(Dreptunghi &&dr) {
    this->x = dr.x;
    this->y = dr.y;
    this->culoare = new char[strlen(dr.culoare) + 1];
    strcpy(this->culoare, dr.culoare);

    dr.x = 0;
    dr.y = 0;
    strcpy(dr.culoare, " ");
}

Dreptunghi::~Dreptunghi() {
    delete[] culoare;
}

int Dreptunghi::aria() {
    return x*y;
}

char* Dreptunghi::getCuloare() {
    return culoare;
}
