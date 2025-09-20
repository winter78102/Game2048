#ifndef LEFTACTION_H
#define LEFTACTION_H
#include"Actions.h"
class LeftAction :public Actions{
public:
    void OprateAction(unsigned int (* Board[4][4]))override;
};
#endif // LEFTACTION_H
