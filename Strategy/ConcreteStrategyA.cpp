//
// Created by cristi on 12/11/22.
//

#include "ConcreteStrategyA.h"

std::string ConcreteStrategyA::doAlgorithm(std::string data) const {
    std::sort(std::begin(data), std::end(data));
    return data;
}
