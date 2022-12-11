//
// Created by cristi on 12/11/22.
//

#include "Invoker.h"

void Invoker::setOnStart(Command *onStart1) {
    Invoker::onStart = onStart1;
}

void Invoker::setOnFinish(Command *onFinish1) {
    Invoker::onFinish = onFinish1;
}

void Invoker::DoSmthImportant() {
    this->onStart->Execute();
    this->onFinish->Execute();
}
