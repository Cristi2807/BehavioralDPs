//
// Created by cristi on 12/11/22.
//

#ifndef BEHAVIORALDPS_COMPLEXCOMMAND_H
#define BEHAVIORALDPS_COMPLEXCOMMAND_H


#include "Command.h"
#include "Receiver.h"

class ComplexCommand : public Command {
private:
    Receiver *receiver;
    std::string a;
    std::string b;

public:
    ComplexCommand(Receiver *receiver, std::string a, std::string b);

    void Execute() override;
};


#endif //BEHAVIORALDPS_COMPLEXCOMMAND_H
