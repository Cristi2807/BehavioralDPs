//
// Created by cristi on 12/8/22.
//

#include "TimeHandler.h"
#include <iostream>

std::string TimeHandler::Handle(Request request) {
    if (request.getExpiresAt() > 14353) {
        std::cout << "TimeHandler passed." << std::endl;
        return AbstractHandler::Handle(request);
    } else {
        return "Check for time expiration failed.";
    }
}
