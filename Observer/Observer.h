//
// Created by cristi on 12/11/22.
//

#ifndef BEHAVIORALDPS_OBSERVER_H
#define BEHAVIORALDPS_OBSERVER_H


#include "IObserver.h"
#include "Subject.h"

class Observer : public IObserver {
private:
    std::string message;
    static int staticNumber;
    int number;
    Subject *subject;

public:
    explicit Observer(Subject *subject);

    void PrintInfo();

    void Update(const std::string &message) override;

    void removeMeFromList();

};


#endif //BEHAVIORALDPS_OBSERVER_H
