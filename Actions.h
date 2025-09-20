#ifndef ACTIONS_H
#define ACTIONS_H
#include <cstdlib>
#include <ctime>

class Actions{
public:
     virtual ~Actions() = default;
    virtual void OprateAction(unsigned int (* Board[4][4]))=0;
     void Random(unsigned int( *Board[4][4]));
};

#endif // ACTIONS_H
