// #pragma once

#ifndef BOARD_H
#define BOADR_H

#include "pawn.hpp"

#define boardSize 8
#define numOfPowns 8
// class Pawn;
class Board{
private:
    Pawn whitePawns[numOfPowns];
    Pawn blackPawns[numOfPowns];

public:

    
    char board[boardSize][boardSize][3];

    Board();

    // void selectMove(uint8_t x, uint8_t y, Pice p){
    // int a=0;
    // for(int i=0; i<4; i++){
    //     if(x==posibleMoves[i][0]){
    //       a++;
    //     }
    //     if(y==posibleMoves[0][i]){
    //       a++;
    //     }
    // } 
    // if(a==2){
    //   setPosition(x,y,board);
    // }
//   }
};

#endif
