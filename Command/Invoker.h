//
// Created by cristi on 12/11/22.
//

#ifndef BEHAVIORALDPS_INVOKER_H
#define BEHAVIORALDPS_INVOKER_H


#include "Command.h"

class Invoker {

private:
    Command *onStart;
    Command *onFinish;

public:
    void setOnStart(Command *onStart1);

    void setOnFinish(Command *onFinish);

    void DoSmthImportant();
};


#endif //BEHAVIORALDPS_INVOKER_H
