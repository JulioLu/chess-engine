#include "../inc/board.hpp"
#include <iostream>

Board::Board(){
    for(int i=0; i<8; i++)
        for(int j=0; j<8; j++)
            for(int k=0; k<2; k++)
                board[i][j][k]='_';
    // for(int i=0; i<2; i++){
        players[0] = Player(0);
        players[1] = Player(1);
        for(int j=0; j<8; j++){
            // board[players[0].getCoordinates()[0]][players[0].getCoordinates()[1]][0]='W';
            // board[players[0].getCoordinates()[0]][players[0].getCoordinates()[1]][1]='P';
            // board[players[1].getCoordinates()[0]][players[1].getCoordinates()[1]][0]='B';
            // board[players[1].getCoordinates()[0]][players[1].getCoordinates()[1]][1]='P';
        // }
    }
}

void Board::fillBoard(){
    for(int j=0; j<8; j++){
            board[players[0].getPawns()[j].getCoordinates()[0]][players[0].getPawns()[j].getCoordinates()[1]][0]='W';
            board[players[0].getPawns()[j].getCoordinates()[0]][players[0].getPawns()[j].getCoordinates()[1]][1]='P';
            board[players[1].getPawns()[j].getCoordinates()[0]][players[1].getPawns()[j].getCoordinates()[1]][0]='B';
            board[players[1].getPawns()[j].getCoordinates()[0]][players[1].getPawns()[j].getCoordinates()[1]][1]='P';
        }
}


//  void Board::movePiece(Pawn pawn, movePiece(Pawn pawn, std::array<uint8_t,2> newCoordinates)){
//     board[pawn.getCoordinates()[0]][pawn.getCoordinates()[1]][0]='W';
//     board[pawn.getCoordinates()[0]][pawn.getCoordinates()[1]][1]='P';
//     board[pawn.getCoordinates()[0]][pawn.getCoordinates()[1]][0]='W';
//     board[pawn.getCoordinates()[0]][pawn.getCoordinates()[1]][1]='P';
// }
