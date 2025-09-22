#ifndef LEFTACTION_H
#define LEFTACTION_H
#include <Action/Actions.h>
class LeftAction :public Actions{
public:
    void OprateAction(std::vector<std::vector<int>>& Board)override;
};
#endif // LEFTACTION_H
