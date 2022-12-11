//
// Created by cristi on 12/11/22.
//

#ifndef BEHAVIORALDPS_CONCRETESTRATEGYB_H
#define BEHAVIORALDPS_CONCRETESTRATEGYB_H


#include "Strategy.h"

class ConcreteStrategyB : public Strategy {
public:
    std::string doAlgorithm(std::string data) const override;
};


#endif //BEHAVIORALDPS_CONCRETESTRATEGYB_H
