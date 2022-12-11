//
// Created by cristi on 12/11/22.
//

#ifndef BEHAVIORALDPS_MEMENTO_H
#define BEHAVIORALDPS_MEMENTO_H


#include <string>

class Memento {
public:
    virtual std::string getName() const = 0;

    virtual std::string getDate() const = 0;

    virtual std::string getState() const = 0;
};


#endif //BEHAVIORALDPS_MEMENTO_H
