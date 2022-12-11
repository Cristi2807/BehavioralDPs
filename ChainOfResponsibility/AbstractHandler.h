//
// Created by cristi on 12/8/22.
//

#ifndef BEHAVIORALDPS_ABSTRACTHANDLER_H
#define BEHAVIORALDPS_ABSTRACTHANDLER_H


#include "Handler.h"

class AbstractHandler : public Handler {
private:
    Handler *nextHandler;

public:
    explicit AbstractHandler();

    Handler * SetNext(Handler *handler) override;

    std::string Handle(Request request) override;

};


#endif //BEHAVIORALDPS_ABSTRACTHANDLER_H
