//
// Created by cristi on 12/11/22.
//

#include "SimpleCommand.h"

#include <utility>
#include <iostream>

SimpleCommand::SimpleCommand(std::string payLoad) : payLoad(std::move(payLoad)) {}

void SimpleCommand::Execute() {
    std::cout << "Printing " << this->payLoad << std::endl;
}
