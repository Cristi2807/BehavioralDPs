//
// Created by cristi on 12/11/22.
//

#ifndef BEHAVIORALDPS_STATE_H
#define BEHAVIORALDPS_STATE_H

#include "Context.h"

class Context;

class State {
protected:
    Context *context;

public:
    void setContext(Context *context);

    virtual void Handle1() = 0;

    virtual void Handle2() = 0;
};


#endif //BEHAVIORALDPS_STATE_H
