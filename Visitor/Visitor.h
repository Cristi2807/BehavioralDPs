//
// Created by cristi on 12/11/22.
//

#ifndef BEHAVIORALDPS_VISITOR_H
#define BEHAVIORALDPS_VISITOR_H

class ConcreteComponentA;

class ConcreteComponentB;

class Visitor {
public:
    virtual void VisitConcreteComponentA(const ConcreteComponentA *element) const = 0;

    virtual void VisitConcreteComponentB(const ConcreteComponentB *element) const = 0;
};


#endif //BEHAVIORALDPS_VISITOR_H
