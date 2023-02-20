#include "../inc/pawn.hpp"


Pawn::Pawn():(uint8_t pawnID, char color, uint8_t coordinateX, uint8_t coordinateY){
    this->pawnID = pawnID;
    posision[0] = posisionX;
    if(color=='w')
        posision[1] = 1;
    else
        posision[1] = 6;
}

