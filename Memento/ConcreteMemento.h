//
// Created by cristi on 12/11/22.
//

#ifndef BEHAVIORALDPS_CONCRETEMEMENTO_H
#define BEHAVIORALDPS_CONCRETEMEMENTO_H


#include "Memento.h"

class ConcreteMemento : public Memento {

private:
    std::string state;
    std::string date;

public:
    explicit ConcreteMemento(std::string state);

    [[nodiscard]] std::string getState() const override;

    [[nodiscard]] std::string getDate() const override;

    [[nodiscard]] std::string getName() const override;
};


#endif //BEHAVIORALDPS_CONCRETEMEMENTO_H
