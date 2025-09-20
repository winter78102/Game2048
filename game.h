#ifndef GAME_H
#define GAME_H
#include"Actions.h"
#include "UpActions.h"
#include "DownAction.h"
#include "LeftAction.h"
#include "RightAction.h"
class  Game
{
public:

    void StartPlay();
    void Right();
    void Left();
    void Up();
    void Down();
 auto  GetUpdatedBoard();
private:
    unsigned int _Board[4][4]={0};
};

#endif // GAME_H
