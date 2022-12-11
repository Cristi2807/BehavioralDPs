//
// Created by cristi on 12/11/22.
//

#include "ConcreteMemento.h"

#include <utility>
#include <ctime>

ConcreteMemento::ConcreteMemento(std::string state) : state(std::move(state)) {
    std::time_t now = std::time(nullptr);
    this->date = std::ctime(&now);
}

std::string ConcreteMemento::getState() const {
    return this->state;
}

std::string ConcreteMemento::getDate() const {
    return this->date;
}

std::string ConcreteMemento::getName() const {
    return this->date + " / (" + this->state.substr(0, 9) + "...)";
}


