//
// Created by cristi on 12/12/22.
//

#ifndef BEHAVIORALDPS_CONCRETECOMPONENTB_H
#define BEHAVIORALDPS_CONCRETECOMPONENTB_H


#include <string>
#include "Component.h"

class ConcreteComponentB : public Component {
public:
    void Accept(Visitor *visitor) const override;

    [[nodiscard]] std::string ExclusiveMethodConcrCompB() const;
};


#endif //BEHAVIORALDPS_CONCRETECOMPONENTB_H
