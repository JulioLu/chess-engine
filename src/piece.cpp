#include "../inc/piece.hpp"



Piece::Piece(uint8_t pieceID, char color, uint8_t coordinateX, uint8_t coordinateY){
    this->pieceID = pieceID;
    coordinates[0]= coordinateX;
    coordinates[1]= coordinateY;
    this->color =color;
}

uint8_t Piece::getPieceID(){
    return pieceID;
}

 std::array<uint8_t, 2> Piece::getCoordinates(){
    return coordinates;
}

char Piece::getColor(){
    return color;
}

void Piece::setCoordinates(uint8_t x, uint8_t y){
    coordinates[0]= x;
    coordinates[1]= y;
}
