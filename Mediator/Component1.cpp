//
// Created by cristi on 12/11/22.
//

#include <iostream>
#include "Component1.h"

void Component1::DoA() {
    std::cout << "Component 1 does A." << std::endl;
    this->mediator->Notify(this, "A");
}

void Component1::DoB() {
    std::cout << "Component 1 does B." << std::endl;
    this->mediator->Notify(this, "B");
}
