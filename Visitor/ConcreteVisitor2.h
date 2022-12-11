//
// Created by cristi on 12/12/22.
//

#ifndef BEHAVIORALDPS_CONCRETEVISITOR2_H
#define BEHAVIORALDPS_CONCRETEVISITOR2_H


#include "Visitor.h"

class ConcreteVisitor2 : public Visitor {
public:
    void VisitConcreteComponentA(const ConcreteComponentA *element) const override;

    void VisitConcreteComponentB(const ConcreteComponentB *element) const override;
};


#endif //BEHAVIORALDPS_CONCRETEVISITOR2_H
