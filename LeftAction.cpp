#include"LeftAction.h"
#include <iostream>
void LeftAction::OprateAction(std::vector<std::vector< int>>& Board){

    for (int i = 0; i < 4; i++) {
        int c = 0;
        for (int j = 0; j < 4; j++) {
            if (Board[i][j] != 0) {
                Board[i][c] = Board[i][j];
                if (c != j) Board[i][j] = 0;
                c++;
            }
        }
        for (int j = c; j < 4; j++) {
            Board[i][j] = 0;
        }
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (Board[i][j] == Board[i][j+1] &&j!=3) {
                Board[i][j] *=2;
                for(int k=j+1;k<2;k++){
                    Board[i][k]=Board[i][k+1];
                }

                }
            }
        }
}
