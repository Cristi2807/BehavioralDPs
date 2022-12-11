//
// Created by cristi on 12/8/22.
//

#include "Request.h"

#include <utility>

Request::Request(std::string username, std::string password, int expiresAt) : username(std::move(username)),
                                                                              password(std::move(password)),
                                                                              ExpiresAt(expiresAt) {}

const std::string &Request::getUsername() const {
    return username;
}

const std::string &Request::getPassword() const {
    return password;
}

int Request::getExpiresAt() const {
    return ExpiresAt;
}
