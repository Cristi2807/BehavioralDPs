//
// Created by cristi on 12/11/22.
//

#include <iostream>
#include "ConcreteStateA.h"

void ConcreteStateA::Handle1() {
    std::cout << "ConcreteStateA handles request1.\n";
}

void ConcreteStateA::Handle2() {
    std::cout << "ConcreteStateA handles request2.\n";
}
