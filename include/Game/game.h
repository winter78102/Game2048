#ifndef GAME_H
#define GAME_H
#include <Action/Actions.h>
#include <Action/UpAction/UpActions.h>
#include <Action/DownAction/DownAction.h>
#include <Action/LeftAction/LeftAction.h>
#include <Action/RightAction/RightAction.h>
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
