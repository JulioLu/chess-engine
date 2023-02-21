#ifndef PIECE_H
#define PIECE_H

#include <cstdint>
#include <array>

class Piece{
private:
    uint8_t pieceID;
    std::array<uint8_t,2> coordinates;
    char color;
public:
    Piece() {}
    Piece(uint8_t pawnID, char color, uint8_t coordinateX, uint8_t coordinateY);
    uint8_t getPieceID();
    std::array<uint8_t, 2>  getCoordinates();
    char getColor();

    void setCoordinates(uint8_t x, uint8_t y);

};


#endif