//
// Created by cristi on 12/8/22.
//

#ifndef BEHAVIORALDPS_USERNAMEHANDLER_H
#define BEHAVIORALDPS_USERNAMEHANDLER_H


#include "AbstractHandler.h"

class UsernameHandler : public AbstractHandler {
public:
    std::string Handle(Request request) override;
};


#endif //BEHAVIORALDPS_USERNAMEHANDLER_H
