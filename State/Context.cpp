//
// Created by cristi on 12/11/22.
//

#include <iostream>
#include "Context.h"

void Context::transitionTo(State *state1) {
    std::cout << "Context: Transition to " << typeid(*state1).name() << ".\n";
    this->state = state1;
    this->state->setContext(this);
}

Context::Context(State *state) : state(nullptr) {
    this->transitionTo(state);
}

void Context::Request1() {
    this->state->Handle1();
}

void Context::Request2() {
    this->state->Handle2();
}
