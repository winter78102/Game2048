#ifndef ACTIONS_H
#define ACTIONS_H
#include <cstdlib>
#include <ctime>
#include<vector>

class Move{
public:
    void UpAction(std::vector<std::vector< int>>& Board);
    void DownAction(std::vector<std::vector< int>>& Board);
    void RightAction(std::vector<std::vector< int>>& Board);
    void LeftAction(std::vector<std::vector< int>>& Board);
    void Random(std::vector<std::vector< int>>& Board);
};

#endif // ACTIONS_H
