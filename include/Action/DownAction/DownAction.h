#ifndef DOWNACTION_H
#define DOWNACTION_H
#include <Action/Actions.h>
class DownAction :public Actions{
public:
    void OprateAction(std::vector<std::vector<int>>& Board)override;
};

#endif // DOWNACTION_H
