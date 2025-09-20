#ifndef DOWNACTION_H
#define DOWNACTION_H
#include "Actions.h"
class DownAction :public Actions{
public:
    void OprateAction(unsigned int (* Board[4][4]))override;
};

#endif // DOWNACTION_H
