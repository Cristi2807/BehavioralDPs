//
// Created by cristi on 12/12/22.
//

#include "ConcreteComponentA.h"

std::string ConcreteComponentA::ExclusiveMethodConcrCompA() const {
    return "A";
}

void ConcreteComponentA::Accept(Visitor *visitor) const {
    visitor->VisitConcreteComponentA(this);
}
