#include<iostream>
#include"inc/board.hpp"
#include"inc/pawn.hpp"

int main(){
    Board b;
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            // std::cout << "|";
            for(int k=0; k<2; k++)
                std::cout << b.board[i][j][k];
            // std::cout << "| ";
            std::cout << "\t";
        }
        std::cout << std::endl<<std::endl;
    }

}
