#include "RightAction.h"

void RightAction::OprateAction(std::vector<std::vector< int>>& Board){
    for (int i = 0; i < 4; i++) {
        int c = 3;
        for (int j = 3; j >= 0; j--) {
            if (Board[i][j] != 0) {
                Board[i][c] = Board[i][j];
                if (c != j) Board[i][j] = 0;
                c--;
            }
        }
        for (int j = c; j >= 0; --j) Board[i][j] = 0;


        for (int j = 3; j > 0; j--) {
            if (Board[i][j] != 0 && Board[i][j] == Board[i][j-1]) {
                Board[i][j] *= 2;
                Board[i][j-1] = 0;
            }
        }

        c = 3;
        for (int j = 3; j >= 0; j--) {
            if (Board[i][j] != 0) {
                Board[i][c] = Board[i][j];
                if (c != j) Board[i][j] = 0;
                c--;
            }
        }
        for (int j = c; j >= 0; --j) Board[i][j] = 0;
    }
}
