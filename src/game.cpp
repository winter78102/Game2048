#include <Game/game.h>
Game::Game()
    : _Board(4, std::vector<int>(4, 0))
{}

void Game::StartPlay(std::vector<std::vector< int>>& Board)
{
    _Move.Random(Board);
    _Move.Random(Board);
}
void Game::Up(std::vector<std::vector< int>>& Board)
{
    _Move.UpAction(Board);
    _Move.Random(Board);
}
void Game::Down(std::vector<std::vector< int>>& Board)
{
    _Move.DownAction(Board);
    _Move.Random(Board);
}
void Game::Left(std::vector<std::vector< int>>& Board)
{
    _Move.LeftAction(Board);
    _Move.Random(Board);
}
void Game::Right(std::vector<std::vector< int>>& Board)
{
    _Move.RightAction(Board);
    _Move.Random(Board);
}
