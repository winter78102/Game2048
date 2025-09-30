// Move.cpp
#include <Move/Move.h>
#include <cstdlib> // rand()
#include <ctime>   // optional if you seed elsewhere
#include <vector>


void Move::DownAction(std::vector<std::vector<int>> &Board)
{
    for (int i = 0; i < 4; i++) {
        int c = 3;
        for (int j = 3; j >= 0; j--) {
            if (Board[j][i] != 0) {
                Board[c][i] = Board[j][i];
                if (c != j)
                    Board[j][i] = 0;
                c--;
            }
        }
        for (int j = c; j >= 0; j--)
            Board[j][i] = 0;

        for (int j = 3; j > 0; j--) {
            if (Board[j][i] != 0 && Board[j][i] == Board[j - 1][i]) {
                Board[j][i] *= 2;
                Board[j - 1][i] = 0;
                --j;
            }
        }

        c = 3;
        for (int j = 3; j >= 0; j--) {
            if (Board[j][i] != 0) {
                Board[c][i] = Board[j][i];
                if (c != j)
                    Board[j][i] = 0;
                c--;
            }
        }
        for (int j = c; j >= 0; j--)
            Board[j][i] = 0;
    }
}

void Move::LeftAction(std::vector<std::vector<int>> &Board)
{
    for (int i = 0; i < 4; i++) {
        int c = 0;
        for (int j = 0; j < 4; j++) {
            if (Board[i][j] != 0) {
                Board[i][c] = Board[i][j];
                if (c != j)
                    Board[i][j] = 0;
                c++;
            }
        }
        for (int j = c; j < 4; j++) {
            Board[i][j] = 0;
        }
    }

    // merge left (fixed)
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if (Board[i][j] != 0 && Board[i][j] == Board[i][j + 1]) {
                Board[i][j] *= 2;
                Board[i][j + 1] = 0;
                ++j;
            }
        }

        int c = 0;
        for (int j = 0; j < 4; j++) {
            if (Board[i][j] != 0) {
                Board[i][c] = Board[i][j];
                if (c != j)
                    Board[i][j] = 0;
                c++;
            }
        }
        for (int j = c; j < 4; j++) {
            Board[i][j] = 0;
        }
    }
}

void Move::RightAction(std::vector<std::vector<int>> &Board)
{
    for (int i = 0; i < 4; i++) {
        int c = 3;
        for (int j = 3; j >= 0; j--) {
            if (Board[i][j] != 0) {
                Board[i][c] = Board[i][j];
                if (c != j)
                    Board[i][j] = 0;
                c--;
            }
        }
        for (int j = c; j >= 0; --j)
            Board[i][j] = 0;

        for (int j = 3; j > 0; j--) {
            if (Board[i][j] != 0 && Board[i][j] == Board[i][j - 1]) {
                Board[i][j] *= 2;
                Board[i][j - 1] = 0;
                --j;
            }
        }

        c = 3;
        for (int j = 3; j >= 0; j--) {
            if (Board[i][j] != 0) {
                Board[i][c] = Board[i][j];
                if (c != j)
                    Board[i][j] = 0;
                c--;
            }
        }
        for (int j = c; j >= 0; --j)
            Board[i][j] = 0;
    }
}

void Move::UpAction(std::vector<std::vector<int>> &Board)
{
    for (int i = 0; i < 4; i++) {
        int c = 0;
        for (int j = 0; j < 4; j++) {
            if (Board[j][i] != 0) {
                Board[c][i] = Board[j][i];
                if (c != j)
                    Board[j][i] = 0;
                c++;
            }
        }
        for (int j = c; j < 4; ++j)
            Board[j][i] = 0;

        for (int j = 0; j < 3; j++) {
            if (Board[j][i] != 0 && Board[j][i] == Board[j + 1][i]) {
                Board[j][i] *= 2;
                Board[j + 1][i] = 0;
                ++j;
            }
        }

        c = 0;
        for (int j = 0; j < 4; ++j) {
            if (Board[j][i] != 0) {
                Board[c][i] = Board[j][i];
                if (c != j)
                    Board[j][i] = 0;
                c++;
            }
        }
        for (int j = c; j < 4; j++)
            Board[j][i] = 0;
    }
}

void Move::Random(std::vector<std::vector<int>> &Board)
{
    int Row = 0, Col = 0;
    do {
        Row = rand() % 4;
        Col = rand() % 4;
    } while (Board[Row][Col] != 0);
    Board[Row][Col] = 2;
}
