//
// Created by cristi on 12/11/22.
//

#include <iostream>
#include "Observer.h"

Observer::Observer(Subject *subject) : subject(subject) {
    this->subject->Attach(this);
    this->number = ++Observer::staticNumber;
}

void Observer::PrintInfo() {
    std::cout << "Observer \"" << this->number << "\": a new message is available --> " << this->message
              << "\n";
}

void Observer::Update(const std::string &message) {
    this->message = message;
    PrintInfo();
}

void Observer::removeMeFromList() {
    this->subject->Detach(this);
}
