#ifndef UPACTIONS_H
#define UPACTIONS_H
#include "Actions.h"
class UpAction :public Actions{
public:
    void OprateAction(std::vector<std::vector<int>>& Board)override;
};

#endif // UPACTIONS_H
