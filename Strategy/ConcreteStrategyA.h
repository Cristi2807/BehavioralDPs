//
// Created by cristi on 12/11/22.
//

#ifndef BEHAVIORALDPS_CONCRETESTRATEGYA_H
#define BEHAVIORALDPS_CONCRETESTRATEGYA_H


#include "Strategy.h"

class ConcreteStrategyA : public Strategy {
public:
    std::string doAlgorithm(std::string data) const override;
};


#endif //BEHAVIORALDPS_CONCRETESTRATEGYA_H
