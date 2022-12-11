//
// Created by cristi on 12/11/22.
//

#ifndef BEHAVIORALDPS_CONCRETEMEDIATOR_H
#define BEHAVIORALDPS_CONCRETEMEDIATOR_H


#include "Component2.h"
#include "Component1.h"

class ConcreteMediator : public Mediator {
private:
    Component1 *component1;
    Component2 *component2;

public:
    ConcreteMediator(Component1 *component1, Component2 *component2);

    void Notify(BaseComponent *sender, std::string event) override;
};


#endif //BEHAVIORALDPS_CONCRETEMEDIATOR_H
