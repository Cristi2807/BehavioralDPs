//
// Created by cristi on 12/11/22.
//

#ifndef BEHAVIORALDPS_ORIGINATOR_H
#define BEHAVIORALDPS_ORIGINATOR_H


#include <string>
#include "Memento.h"

class Originator {

private:
    std::string state;

    static std::string generateRandomString(int length = 10);

public:
    explicit Originator(std::string state);

    void doSmth();

    Memento *Save();

    void Restore(Memento *memento);
};


#endif //BEHAVIORALDPS_ORIGINATOR_H
