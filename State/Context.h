//
// Created by cristi on 12/11/22.
//

#ifndef BEHAVIORALDPS_CONTEXT_H
#define BEHAVIORALDPS_CONTEXT_H


#include "State.h"

class State;

class Context {
private:
    State *state;
public:
    void transitionTo(State *state1);

    explicit Context(State *state);

    void Request1();

    void Request2();

};


#endif //BEHAVIORALDPS_CONTEXT_H
