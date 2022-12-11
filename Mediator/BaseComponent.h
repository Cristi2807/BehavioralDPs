//
// Created by cristi on 12/11/22.
//

#ifndef BEHAVIORALDPS_BASECOMPONENT_H
#define BEHAVIORALDPS_BASECOMPONENT_H


#include "Mediator.h"

class Mediator;

class BaseComponent {
protected:
    Mediator *mediator;

public:
    void setMediator(Mediator *mediator);
};


#endif //BEHAVIORALDPS_BASECOMPONENT_H
