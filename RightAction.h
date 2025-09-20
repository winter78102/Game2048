#ifndef RIGHTACTION_H
#define RIGHTACTION_H
#include "Actions.h"
class RightAction :public Actions{
public:
    void OprateAction(unsigned int (* Board[4][4]))override;
};

#endif // RIGHTACTION_H
