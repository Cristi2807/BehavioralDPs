//
// Created by cristi on 12/11/22.
//

#include "Originator.h"
#include "ConcreteMemento.h"

#include <utility>
#include <iostream>

std::string Originator::generateRandomString(int length) {
    const char alphanum[] =
            "0123456789"
            "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
            "abcdefghijklmnopqrstuvwxyz";
    int stringLength = sizeof(alphanum) - 1;

    std::string random_string;
    for (int i = 0; i < length; i++) {
        random_string += alphanum[std::rand() % stringLength];
    }
    return random_string;
}

Originator::Originator(std::string state) : state(std::move(state)) {
    std::cout << "Initial state: " << this->state << std::endl;
}

void Originator::doSmth() {
    this->state = this->generateRandomString(30);
    std::cout << "State changed to: " << this->state << std::endl;
}

Memento *Originator::Save() {
    return new ConcreteMemento(this->state);
}

void Originator::Restore(Memento *memento) {
    this->state = memento->getState();
    std::cout << "State changed to: " << this->state << std::endl;
}
