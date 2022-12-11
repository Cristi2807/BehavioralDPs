//
// Created by cristi on 12/11/22.
//

#ifndef BEHAVIORALDPS_CARETAKER_H
#define BEHAVIORALDPS_CARETAKER_H


#include "Memento.h"
#include "Originator.h"
#include <vector>

class Caretaker {
private:
    std::vector<Memento *> mementos;
    Originator *originator;

public:
    explicit Caretaker(Originator *originator);

    void backUp();

    void undo();

    void showHistory();
};


#endif //BEHAVIORALDPS_CARETAKER_H
