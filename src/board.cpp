#include "../inc/board.hpp"


Board::Board(){
    for(int i=0; i<8; i++)
        for(int j=0; j<8; j++)
            for(int k=0; k<2; k++)
                board[i][j][k]='_';

    for(int i=0; i<numOfPowns; i++){
        whitePawns[i] = Pawn(i,'w',i,1);
        blackPawns[i] = Pawn(i,'b',i,6);
    }

    for(int j=0; j<8; j++){
        board[1][j][0]='W';
        board[1][j][1]='P';
        board[6][j][0]='B';
        board[6][j][1]='P';
    }



}
