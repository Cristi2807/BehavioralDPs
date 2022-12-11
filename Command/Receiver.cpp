//
// Created by cristi on 12/11/22.
//

#include <iostream>
#include "Receiver.h"

void Receiver::DoSmth(const std::string &a) {
    std::cout << "Receiver works on " << a<<std::endl;
}

void Receiver::DoSmthElse(const std::string &b) {
    std::cout << "Receiver also works on " << b<<std::endl;
}
