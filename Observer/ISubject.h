//
// Created by cristi on 12/11/22.
//

#ifndef BEHAVIORALDPS_ISUBJECT_H
#define BEHAVIORALDPS_ISUBJECT_H


#include "IObserver.h"

class ISubject {
public:
    virtual void Attach(IObserver *iObserver) = 0;

    virtual void Detach(IObserver *iObserver) = 0;

    virtual void Notify() = 0;

};


#endif //BEHAVIORALDPS_ISUBJECT_H
