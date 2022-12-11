//
// Created by cristi on 12/11/22.
//

#include "Subject.h"

#include <utility>

void Subject::Attach(IObserver *iObserver) {
    listObservers.push_back(iObserver);
}

void Subject::Detach(IObserver *iObserver) {
    listObservers.remove(iObserver);
}

void Subject::Notify() {
    for (auto observer: this->listObservers) {
        observer->Update(this->message);
    }
}

void Subject::createMessage(std::string message1) {
    this->message = std::move(message1);
    Notify();
}
