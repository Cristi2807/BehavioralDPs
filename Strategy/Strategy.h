//
// Created by cristi on 12/11/22.
//

#ifndef BEHAVIORALDPS_STRATEGY_H
#define BEHAVIORALDPS_STRATEGY_H


#include <string>

class Strategy {
public:
    virtual std::string doAlgorithm(std::string data) const = 0;
};


#endif //BEHAVIORALDPS_STRATEGY_H
