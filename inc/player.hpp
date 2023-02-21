#ifndef PLAYER_H
#define PLAYER_H

#include <cstdint>
#include "pawn.hpp"

#define numOfPowns 8

class Player {
private:
    uint8_t playerID;
    std::array<Pawn,numOfPowns> pawns;

public:
    Player(){};
    Player(uint8_t playerID);
    uint8_t getPlayerID();
    std::array<Pawn,numOfPowns> getPawns();
    void movePiece(Piece piece,std::array<uint8_t,2> newCoordinates){
        //board.movePiece(piece.getCoordinates(), newCoordinates);
    }

};

#endif