//
// Created by cristi on 12/11/22.
//

#include <iostream>
#include "Caretaker.h"

Caretaker::Caretaker(Originator *originator) : originator(originator) {}

void Caretaker::backUp() {
    this->mementos.push_back(this->originator->Save());
}

void Caretaker::undo() {
    if (this->mementos.empty()) {
        return;
    }
    Memento *memento = this->mementos.back();
    this->mementos.pop_back();

    this->originator->Restore(memento);
}

void Caretaker::showHistory() {
    std::cout << "List of mementos:\n";
    for (auto memento: this->mementos) {
        std::cout << memento->getName() << std::endl;
    }
    std::cout << std::endl;
}
