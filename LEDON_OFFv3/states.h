#pragma once
#ifndef STATES_H
#define STATES_H

#include "finitestate.h"

class LedOn: public State {
  public:
    // string cqueue[5];
    // int front = -1, rear = -1, n=5,count=0;
    void enter();
    void update();
    void exit();
    // void insertCQ(string val);
    // void displayCQ();
};
class LedOff : public State
{
public:
    void enter();
    void update();
    void exit();
    

    // void insertCQ(string val);
    // void displayCQ();

};
 

#endif