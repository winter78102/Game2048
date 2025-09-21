#include "UpActions.h"

void UpAction::OprateAction(std::vector<std::vector<int>>& Board){
    for (int i = 0; i < 4; i++) {

        int c = 0;
        for (int j = 0; j < 4; j++) {
            if (Board[j][i] != 0) {
                Board[c][i] = Board[j][i];
                if (c != j) Board[j][i] = 0;
                c++;
            }
        }
        for (int j = c; j < 4; ++j) Board[j][i] = 0;


        for (int j = 0; j < 3; j++) {
            if (Board[j][i] != 0 && Board[j][i] == Board[j+1][i]) {
                Board[j][i] *= 2;
                Board[j+1][i] = 0;
            }
        }

        c = 0;
        for (int j = 0; j < 4; ++j) {
            if (Board[j][i] != 0) {
                Board[c][i] = Board[j][i];
                if (c != j) Board[j][i] = 0;
                c++;
            }
        }
        for (int j = c; j < 4; j++) Board[j][i] = 0;
    }
}
