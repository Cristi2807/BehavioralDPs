//
// Created by cristi on 12/11/22.
//

#ifndef BEHAVIORALDPS_SIMPLECOMMAND_H
#define BEHAVIORALDPS_SIMPLECOMMAND_H


#include <string>
#include "Command.h"

class SimpleCommand : public Command {
private:
    std::string payLoad;

public:
    explicit SimpleCommand(std::string payLoad);

    void Execute() override;
};


#endif //BEHAVIORALDPS_SIMPLECOMMAND_H
