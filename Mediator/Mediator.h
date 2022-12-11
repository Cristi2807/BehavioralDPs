//
// Created by cristi on 12/11/22.
//

#ifndef BEHAVIORALDPS_MEDIATOR_H
#define BEHAVIORALDPS_MEDIATOR_H


#include <string>
#include "BaseComponent.h"

class BaseComponent;

class Mediator {
public:
    virtual void Notify(BaseComponent *sender, std::string event) = 0;
};


#endif //BEHAVIORALDPS_MEDIATOR_H
