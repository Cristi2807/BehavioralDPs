//
// Created by cristi on 12/12/22.
//

#ifndef BEHAVIORALDPS_CONCRETECOMPONENTA_H
#define BEHAVIORALDPS_CONCRETECOMPONENTA_H


#include <string>
#include "Component.h"

class ConcreteComponentA : public Component {
public:
    void Accept(Visitor *visitor) const override;

    [[nodiscard]] std::string ExclusiveMethodConcrCompA() const;
};


#endif //BEHAVIORALDPS_CONCRETECOMPONENTA_H
