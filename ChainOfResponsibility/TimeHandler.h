//
// Created by cristi on 12/8/22.
//

#ifndef BEHAVIORALDPS_TIMEHANDLER_H
#define BEHAVIORALDPS_TIMEHANDLER_H


#include "AbstractHandler.h"

class TimeHandler : public AbstractHandler {
public:
    std::string Handle(Request request) override;
};


#endif //BEHAVIORALDPS_TIMEHANDLER_H
