#ifndef UPACTIONS_H
#define UPACTIONS_H
#include "Actions.h"
class UpAction :public Actions{
public:
    void OprateAction(unsigned int (* Board)[4][4])override;
};

#endif // UPACTIONS_H
