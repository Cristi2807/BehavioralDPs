//
// Created by cristi on 12/11/22.
//

#include <iostream>
#include "ContextStrategy.h"

ContextStrategy::ContextStrategy(Strategy *strategy) : strategy(strategy) {}

void ContextStrategy::setStrategy(Strategy *strategy1) {
    ContextStrategy::strategy = strategy1;
}

void ContextStrategy::doSmth() const {
    if (strategy) {
        std::cout << "ContextStrategy: Sorting data using the strategy (not sure how it'll do it)\n";
        std::string result = this->strategy->doAlgorithm("aecbd");
        std::cout << result << "\n";
    } else {
        std::cout << "ContextStrategy: Strategy isn't set\n";
    }
}
