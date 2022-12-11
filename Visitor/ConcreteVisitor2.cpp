//
// Created by cristi on 12/12/22.
//

#include <iostream>
#include "ConcreteVisitor2.h"
#include "ConcreteComponentA.h"
#include "ConcreteComponentB.h"

void ConcreteVisitor2::VisitConcreteComponentA(const ConcreteComponentA *element) const {
    std::cout << element->ExclusiveMethodConcrCompA() << " + ConcreteVisitor2\n";
}

void ConcreteVisitor2::VisitConcreteComponentB(const ConcreteComponentB *element) const {
    std::cout << element->ExclusiveMethodConcrCompB() << " + ConcreteVisitor2\n";
}
