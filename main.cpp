#include<iostream>
#include"inc/board.hpp"
#include"inc/pawn.hpp"

void printBoard(Board b){
     for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            for(int k=0; k<2; k++)
                std::cout << b.board[i][j][k];
            std::cout << "\t";
        }
        std::cout << std::endl<<std::endl;
    }
}
int main(){
    Board b;
    b.fillBoard();
    printBoard(b);
}
