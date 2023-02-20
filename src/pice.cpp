#include "../inc/pice.hpp"



Pice::Pice(uint8_t pawnID, char color, uint8_t coordinateX, uint8_t coordinateY){
    this->pawnID = pawnID;
    coordinates[0]= x;
    coordinates[1]= y;
    this->color =color;
}

uint8_t Pice::getPiceID(){
    return piceID;
}

 std::array<uint8_t, 2> Pice::getCoordinates(){
    return coordinates;
}

char Pice::getColor(){
    return color;
}

void Pice::setCoordinates(uint8_t x, uint8_t y){
    // board[posision[0]][posision[1]][0]='_';
    // board[posision[0]][posision[1]][1]'_';
    coordinates[0]= x;
    coordinates[1]= y;
    // board[x][y][0] = color;
    // board[x][y][1]='P';
}
