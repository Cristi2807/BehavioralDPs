//
// Created by cristi on 12/11/22.
//

#ifndef BEHAVIORALDPS_SUBJECT_H
#define BEHAVIORALDPS_SUBJECT_H


#include <list>
#include "ISubject.h"

class Subject : public ISubject {
private:
    std::string message;
    std::list<IObserver *> listObservers;

public:
    void Attach(IObserver *iObserver) override;

    void Detach(IObserver *iObserver) override;

    void Notify() override;

    void createMessage(std::string message1 = "Empty");
};


#endif //BEHAVIORALDPS_SUBJECT_H
