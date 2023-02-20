#ifndef PICE_H
#define PICE_H

#include <cstdint>
#include <array>

class Pice{
private:
    uint8_t piceID;
    std::array<uint8_t,2> coordinates;
    char color;
public:
    Pice();
    uint8_t getPiceID();
    std::array<uint8_t, 2>  getCoordinates();
    char getColor();

    void setCoordinates(uint8_t x, uint8_t y);

};


#endif