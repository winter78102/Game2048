#include <Game/game.h>
Game::Game():_Board(4, std::vector< int>(4, 0)){}

void Game::StartPlay(){
    _Move.Random(_Board);
    _Move.Random(_Board);

}
void Game::Up(){
    _Move.UpAction(_Board);
    _Move.Random(_Board);
}
void Game::Down(){
    _Move.DownAction(_Board);
    _Move.Random(_Board);
}
void Game::Left(){
    _Move.LeftAction(_Board);
    _Move.Random(_Board);

}
void Game::Right(){
    _Move.RightAction(_Board);
    _Move.Random(_Board);
}
std::vector<std::vector< int> >  Game::GetUpdatedBoard(){
    return _Board;
}
