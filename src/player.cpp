#include "../inc/player.hpp"

Player::Player(uint8_t playerID){
    this->playerID = playerID;
    char pieceColor;
    if(playerID == 0){
        pieceColor = 'w';
        for(int i = 0; i<numOfPowns; i++)
            pawns[i] = Pawn(i,pieceColor,1,i);
    }
    else if (playerID == 1){
        pieceColor = 'b';
        for(int i = 0; i<numOfPowns; i++)
            pawns[i] = Pawn(i,pieceColor,6,i);
    }
}

uint8_t Player::getPlayerID(){
    return playerID;
}

std::array<Pawn,numOfPowns> Player::getPawns(){
    return pawns;
}
