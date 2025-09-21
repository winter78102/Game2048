#include "DownAction.h"

void DownAction::OprateAction(std::vector<std::vector<int>>& Board){
    for (int i = 0; i < 4; i++) {
        int c = 3;
        for (int j = 3; j >= 0; j--) {
            if (Board[j][i] != 0) {
                Board[c][i] = Board[j][i];
                if (c != j) Board[j][i] = 0;
                c--;
            }
        }
        for (int j = c; j >= 0; j--) Board[j][i] = 0;

        for (int j = 3; j > 0; j--) {
            if (Board[j][i] != 0 && Board[j][i] == Board[j-1][i]) {
                Board[j][i] *= 2;
                Board[j-1][i] = 0;
            }
        }

        c = 3;
        for (int j = 3; j >= 0; j--) {
            if (Board[j][i] != 0) {
                Board[c][i] = Board[j][i];
                if (c != j) Board[j][i] = 0;
                c--;
            }
        }
        for (int j = c; j >= 0; j--) Board[j][i] = 0;
    }
}
