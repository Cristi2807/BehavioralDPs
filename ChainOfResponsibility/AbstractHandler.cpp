//
// Created by cristi on 12/8/22.
//

#include "AbstractHandler.h"

AbstractHandler::AbstractHandler() : nextHandler(nullptr) {}

Handler *AbstractHandler::SetNext(Handler *handler) {
    this->nextHandler = handler;
    return handler;
}

std::string AbstractHandler::Handle(Request request) {
    if (this->nextHandler) {
        return this->nextHandler->Handle(request);
    }
    return {};
}
