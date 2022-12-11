//
// Created by cristi on 12/11/22.
//

#include <iostream>
#include "Component2.h"

void Component2::DoC() {
    std::cout << "Component 2 does C." << std::endl;
    this->mediator->Notify(this, "C");
}

void Component2::DoD() {
    std::cout << "Component 2 does D." << std::endl;
    this->mediator->Notify(this, "D");
}
