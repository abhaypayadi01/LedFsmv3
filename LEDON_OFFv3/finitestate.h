#ifndef FINITESTATE_H
#define FINITESTATE_H

#include <iostream>
#include <conio.h>

using namespace std;
class Fsm;
 


class State
{
    public:
   
   protected:
       Fsm * fsm;

   public:
        void set_FSM(Fsm *xFSM)
    {
        fsm = xFSM;
    }

    virtual void enter() = 0;
    virtual void update()=0;
    virtual void exit()=0;
};

class Fsm
{
private:
    State *xstate;

public:
    // string presentstate;

public:
    Fsm(State *state) : xstate(nullptr)
    {
        Change_State(state);
    }
    
    ~Fsm()
    {
        if (xstate)
        {
            delete xstate;
        }
    }

    void Change_State(State *state)
    {
        if (xstate)
        {
            xstate->exit();
            delete xstate;
        }

        xstate = state;
        xstate->set_FSM(this);
    }

    inline void run() { 
        xstate->enter(); 
        }
    
};

#endif