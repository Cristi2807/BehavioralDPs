//
// Created by cristi on 12/8/22.
//

#include "UsernameHandler.h"
#include <iostream>

std::string UsernameHandler::Handle(Request request) {
    if (request.getUsername() == "cristi") {
        std::cout << "UsernameHandler passed." << std::endl;
        return AbstractHandler::Handle(request);
    } else {
        return "Check for username failed.";
    }
}
