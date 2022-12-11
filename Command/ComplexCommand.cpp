//
// Created by cristi on 12/11/22.
//

#include "ComplexCommand.h"

#include <utility>
#include <iostream>

ComplexCommand::ComplexCommand(Receiver *receiver, std::string a, std::string b) : receiver(receiver),
                                                                                   a(std::move(a)), b(std::move(b)) {}

void ComplexCommand::Execute() {
    std::cout << "Complex Command is sending to receiver object." << std::endl;
    this->receiver->DoSmth(this->a);
    this->receiver->DoSmthElse(this->b);
}
