//
// Created by cristi on 12/11/22.
//

#ifndef BEHAVIORALDPS_COMPONENT_H
#define BEHAVIORALDPS_COMPONENT_H

#include "Visitor.h"

class Component {
public:
    virtual void Accept(Visitor *visitor) const = 0;
};


#endif //BEHAVIORALDPS_COMPONENT_H
