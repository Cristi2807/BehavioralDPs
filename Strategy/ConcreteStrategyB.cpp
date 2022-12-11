//
// Created by cristi on 12/11/22.
//

#include "ConcreteStrategyB.h"

std::string ConcreteStrategyB::doAlgorithm(std::string data) const {
    std::sort(std::begin(data), std::end(data), std::greater<>());
    return data;
}
