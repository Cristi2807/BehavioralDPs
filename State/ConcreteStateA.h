//
// Created by cristi on 12/11/22.
//

#ifndef BEHAVIORALDPS_CONCRETESTATEA_H
#define BEHAVIORALDPS_CONCRETESTATEA_H


#include "State.h"

class ConcreteStateA : public State {
public:
    void Handle1() override;

    void Handle2() override;
};


#endif //BEHAVIORALDPS_CONCRETESTATEA_H
