//
// Created by cristi on 12/8/22.
//

#include "PasswordHandler.h"
#include <iostream>

std::string PasswordHandler::Handle(Request request) {
    if (request.getPassword() == "12345678") {
        std::cout << "PasswordHandler passed." << std::endl;
        return AbstractHandler::Handle(request);
    } else {
        return "Check for password failed.";
    }
}
