//
// Created by cristi on 12/11/22.
//

#ifndef BEHAVIORALDPS_IOBSERVER_H
#define BEHAVIORALDPS_IOBSERVER_H


#include <string>

class IObserver {
public:
    virtual void Update(const std::string &message) = 0;
};


#endif //BEHAVIORALDPS_IOBSERVER_H
