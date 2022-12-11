//
// Created by cristi on 12/12/22.
//

#include "ConcreteComponentB.h"

std::string ConcreteComponentB::ExclusiveMethodConcrCompB() const {
    return "B";
}

void ConcreteComponentB::Accept(Visitor *visitor) const {
    visitor->VisitConcreteComponentB(this);
}
