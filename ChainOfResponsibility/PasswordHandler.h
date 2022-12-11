//
// Created by cristi on 12/8/22.
//

#ifndef BEHAVIORALDPS_PASSWORDHANDLER_H
#define BEHAVIORALDPS_PASSWORDHANDLER_H


#include "AbstractHandler.h"

class PasswordHandler : public AbstractHandler {
public:
    std::string Handle(Request request) override;
};


#endif //BEHAVIORALDPS_PASSWORDHANDLER_H
