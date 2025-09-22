#include <Game/game.h>
Game::Game():_Board(4, std::vector< int>(4, 0)){}

void Game::StartPlay(){
    UpAction* Action = new UpAction();
    Action->Random(_Board);
    delete Action;
}
void Game::Up(){
    UpAction* Action = new UpAction();
    Action->OprateAction(_Board);
    Action->Random(_Board);
    delete Action;
}
void Game::Down(){
    DownAction* Action = new DownAction();
    Action->OprateAction(_Board);
    Action->Random(_Board);
    delete Action;
}
void Game::Left(){
    LeftAction* Action = new LeftAction();
    Action->OprateAction(_Board);
    for (int i = 0; i < 4; i++) {
        for(int j=0;j<4;j++){
            std::cout<<  _Board[i][j]<<"  ";
        }
        std::cout<<std::endl;
    }
    std::cout<<std::endl;
    std::cout<<std::endl;

     Action->Random(_Board);
    delete Action;

}
void Game::Right(){
    RightAction* Action = new RightAction();
    Action->OprateAction(_Board);
     Action->Random(_Board);
    delete Action;
}
std::vector<std::vector< int> >  Game::GetUpdatedBoard(){
    return _Board;
}
