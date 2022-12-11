//
// Created by cristi on 12/8/22.
//

#ifndef BEHAVIORALDPS_REQUEST_H
#define BEHAVIORALDPS_REQUEST_H

#include "string"

class Request {
    std::string username;
    std::string password;
    int ExpiresAt;
public:
    Request(std::string username, std::string password, int expiresAt);

    [[nodiscard]] const std::string &getUsername() const;

    [[nodiscard]] const std::string &getPassword() const;

    [[nodiscard]] int getExpiresAt() const;
};


#endif //BEHAVIORALDPS_REQUEST_H
