#include <iostream>
#include "Dreptunghi.h"

Dreptunghi::Dreptunghi() {
    x = 1;
    y = 1;
    buffer = new char[20];
}

Dreptunghi::Dreptunghi(int x, int y, int dim) {
    this->x = x;
    this->y = y;
    buffer = new char[dim];
}

Dreptunghi::Dreptunghi(Dreptunghi &dr) {
    this->x = dr.x;
    this->y = dr.y;
    this->buffer = dr.buffer;
}

Dreptunghi::Dreptunghi(Dreptunghi &&dr) {
    this->x = dr.x;
    this->y = dr.y;
    this->buffer = dr.buffer;

    dr.x = 0;
    dr.y = 0;
    dr.buffer = nullptr;
}

Dreptunghi::~Dreptunghi() {
    delete []buffer;
}

int Dreptunghi::aria() {
    return x*y;
}
