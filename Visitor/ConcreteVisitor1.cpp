//
// Created by cristi on 12/12/22.
//

#include <iostream>
#include "ConcreteVisitor1.h"
#include "ConcreteComponentA.h"
#include "ConcreteComponentB.h"

void ConcreteVisitor1::VisitConcreteComponentA(const ConcreteComponentA *element) const {
    std::cout << element->ExclusiveMethodConcrCompA() << " + ConcreteVisitor1\n";
}

void ConcreteVisitor1::VisitConcreteComponentB(const ConcreteComponentB *element) const {
    std::cout << element->ExclusiveMethodConcrCompB() << " + ConcreteVisitor1\n";
}
