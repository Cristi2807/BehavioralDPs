//
// Created by cristi on 12/8/22.
//

#ifndef BEHAVIORALDPS_HANDLER_H
#define BEHAVIORALDPS_HANDLER_H


#include <string>
#include "Request.h"

class Handler {
public:
    virtual Handler *SetNext(Handler *handler) = 0;

    virtual std::string Handle(Request request) = 0;
};


#endif //BEHAVIORALDPS_HANDLER_H
