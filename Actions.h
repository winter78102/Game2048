#ifndef ACTIONS_H
#define ACTIONS_H
#include <cstdlib>
#include <ctime>
#include<vector>

class Actions{
public:
     virtual ~Actions() = default;
    virtual void OprateAction(std::vector<std::vector< int>>& Board)=0;
     void Random(std::vector<std::vector< int>>& Board);
};

#endif // ACTIONS_H
