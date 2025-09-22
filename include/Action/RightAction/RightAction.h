#ifndef RIGHTACTION_H
#define RIGHTACTION_H
#include <Action/Actions.h>
class RightAction :public Actions{
public:
    void OprateAction(std::vector<std::vector<int>>& Board)override;
};

#endif // RIGHTACTION_H
