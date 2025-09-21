#ifndef GAME_H
#define GAME_H
#include"Actions.h"
#include "UpActions.h"
#include "DownAction.h"
#include "LeftAction.h"
#include "RightAction.h"
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

 std::vector<std::vector< int> > _Board;

};

#endif // GAME_H
