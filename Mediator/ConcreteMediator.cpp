//
// Created by cristi on 12/11/22.
//

#include <iostream>
#include "ConcreteMediator.h"

ConcreteMediator::ConcreteMediator(Component1 *component1, Component2 *component2) : component1(component1),
                                                                                     component2(component2) {
    this->component1->setMediator(this);
    this->component2->setMediator(this);
}

void ConcreteMediator::Notify(BaseComponent *sender, std::string event) {

    if (event == "A") {
        std::cout << "Mediator reacts on A ..." << std::endl;
        component2->DoC();
    }

    if (event == "D") {
        std::cout << "Mediator reacts on D ..." << std::endl;
        component1->DoB();
        component2->DoC();
    }
}
