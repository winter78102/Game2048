#include "game.h"

void Game::StartPlay(){
    UpAction* Action = new UpAction();
    Action->Random(&_Board);
    delete Action;
}
void Game::Up(){
    UpAction* Action = new UpAction();
    Action->OprateAction(&_Board);
    delete Action;
}
void Game::Down(){
    DownAction* Action = new DownAction();
    Action->OprateAction(&_Board);
    delete Action;
}
void Game::Left(){
    LeftAction* Action = new LeftAction();
    Action->OprateAction(&_Board);
    delete Action;

}
void Game::Right(){
    RightAction* Action = new RightAction();
    Action->OprateAction(&_Board);
    delete Action;
}

