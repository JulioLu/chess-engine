#include "../inc/board.hpp"


Board::Board(){
    for(int i=0; i<8; i++)
        for(int j=0; j<8; j++)
            for(int k=0; k<2; k++)
                board[i][j][k]='_';

    for(int i=0; i<numOfPowns; i++){
        whitePawns[i] = Pawn(i,'w',1,i);
        blackPawns[i] = Pawn(i,'b',6,i);
    }

    for(int j=0; j<numOfPowns; j++){
        board[whitePawns[j].getCoordinates()[0]][whitePawns[j].getCoordinates()[1]][0]='W';
        board[whitePawns[j].getCoordinates()[0]][whitePawns[j].getCoordinates()[1]][1]='P';
        board[blackPawns[j].getCoordinates()[0]][whitePawns[j].getCoordinates()[1]][0]='B';
        board[blackPawns[j].getCoordinates()[0]][whitePawns[j].getCoordinates()[1]][1]='P';
    }
}

// void Board::MovePiece(Pawn pawn){
//     board[pawn.getCoordinates()[0]][pawn.getCoordinates()[1]][0]='W';
//     board[pawn.getCoordinates()[0]][pawn.getCoordinates()[1]][1]='P';
//     board[pawn.getCoordinates()[0]][pawn.getCoordinates()[1]][0]='W';
//     board[pawn.getCoordinates()[0]][pawn.getCoordinates()[1]][1]='P';
// }

// Board::Board(){
//     for(int i=0; i<8; i++)
//         for(int j=0; j<8; j++)
//             for(int k=0; k<2; k++)
//                 board[i][j][k]='_';

//     for(int i=0; i<numOfPowns; i++){
//         whitePawns[i] = Pawn(i,'w',1,i);
//         blackPawns[i] = Pawn(i,'b',6,i);
//     }
//     for(int j=0; j<8; j++){
//         std::vector<std::array<uint8_t,2>> coordinatesOfTheWPawns = whitePawns[j].getCoordinates();
//         std::vector<std::array<uint8_t,2>> coordinatesOfTheBPawns = blackPawns[j].getCoordinates();

//         board[coordinatesOfTheWPawns[coordinatesOfTheWPawns.size()-1][0]][coordinatesOfTheWPawns[coordinatesOfTheWPawns.size()-1][1]][0]='W';
//         board[coordinatesOfTheWPawns[coordinatesOfTheWPawns.size()-1][0]][coordinatesOfTheWPawns[coordinatesOfTheWPawns.size()-1][1]][1]='P';
//         board[coordinatesOfTheWPawns[coordinatesOfTheBPawns.size()-1][0]][coordinatesOfTheWPawns[coordinatesOfTheBPawns.size()-1][1]][0]='B';
//         board[coordinatesOfTheWPawns[coordinatesOfTheBPawns.size()-1][0]][coordinatesOfTheWPawns[coordinatesOfTheBPawns.size()-1][1]][1]='P';
//     }
// }

// void Board::MovePiece(Pawn pawn){
//     std::vector<std::array<uint8_t,2>> coordinatesOfThePawn = pawn.getCoordinates();
    
//     board[coordinatesOfThePawn[coordinatesOfThePawn.size()-1][0]][coordinatesOfThePawn[coordinatesOfThePawn.size()-1][1]][0]='W';
//     board[coordinatesOfThePawn[coordinatesOfThePawn.size()-1][0]][coordinatesOfThePawn[coordinatesOfThePawn.size()-1][1]][1]='P';
//     board[coordinatesOfThePawn[coordinatesOfThePawn.size()-2][0]][coordinatesOfThePawn[coordinatesOfThePawn.size()-2][1]][0]='W';
//     board[coordinatesOfThePawn[coordinatesOfThePawn.size()-2][0]][coordinatesOfThePawn[coordinatesOfThePawn.size()-2][1]][1]='P';
// }
