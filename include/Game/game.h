#ifndef GAME_H
#define GAME_H
#include <Move/Move.h>
#include<vector>
#include <iostream>
class  Game
{
public:
    Game();
    void StartPlay(std::vector<std::vector< int>>& Board);
    void Right(std::vector<std::vector< int>>& Board);
    void Left(std::vector<std::vector< int>>& Board);
    void Up(std::vector<std::vector< int>>& Board);
    void Down(std::vector<std::vector< int>>& Board);
private:
 Move _Move;
 std::vector<std::vector< int> > _Board;

};

#endif // GAME_H
