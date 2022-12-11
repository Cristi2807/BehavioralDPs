//
// Created by cristi on 12/11/22.
//

#ifndef BEHAVIORALDPS_CONTEXTSTRATEGY_H
#define BEHAVIORALDPS_CONTEXTSTRATEGY_H


#include "Strategy.h"

class ContextStrategy {
private:
    Strategy *strategy;

public:
    explicit ContextStrategy(Strategy *strategy);

    void setStrategy(Strategy *strategy);

    void doSmth() const;
};


#endif //BEHAVIORALDPS_CONTEXTSTRATEGY_H
