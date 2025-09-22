#ifndef GAME_H
#define GAME_H
#include <Move/Move.h>
#include<vector>
#include <iostream>
class  Game
{
public:
    Game();
    void StartPlay();
    void Right();
    void Left();
    void Up();
    void Down();
 std::vector<std::vector< int> > GetUpdatedBoard();
private:
 Move _Move;
 std::vector<std::vector< int> > _Board;

};

#endif // GAME_H
