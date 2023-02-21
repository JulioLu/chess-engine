#ifndef BOARD_H
#define BOADR_H


#include <array>
#include <cstdint>
#include "player.hpp"

#define boardSize 8

class Board{
private:
    std::array<Player,2> players;
public:

    char board[boardSize][boardSize][3];

    Board();
    void fillBoard();
    void movePiece(std::array<uint8_t,2> oldCoordinates, std::array<uint8_t,2> newCoordinates);   
};

#endif
