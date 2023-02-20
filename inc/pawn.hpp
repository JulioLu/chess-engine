
// #pragma once
#ifndef PAWN_H
#define PAWN_H

#include "pice.hpp"
class Pawn : public Pice{
public:
  Pawn();
  // Pawn():Pice(uint8_t pawnID, char color, uint8_t coordinateX, uint8_t coordinateY){};
  // Pawn(uint8_t pawnID, char color, uint8_t posisionX);



  uint8_t posibleMoves[4][2];
  //virtual
  uint8_t **calculatePosibleMoves(){
    uint8_t **posibleMoves = new uint8_t*[4];
    for(int i=0; i<4; i++){
      posibleMoves[i] = new uint8_t[2];
    }
    if(getCoordinates()[1]==1){
      // if(posisionX==0)
      posibleMoves[0][0] = this->getCoordinates()[0];
      posibleMoves[0][1] = this->getCoordinates()[1]+1;
      posibleMoves[1][0] = this->getCoordinates()[0];
      posibleMoves[1][1] = this->getCoordinates()[1]+2;
      return posibleMoves;
    }else{
      posibleMoves[0][0] = this->getCoordinates()[0];
      posibleMoves[0][1] = this->getCoordinates()[1]+1;
      return posibleMoves;
    }
  }


};

#endif