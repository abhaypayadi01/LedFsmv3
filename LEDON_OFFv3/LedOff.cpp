#include "states.h"
#include<ctime>
using namespace std;

void LedOff::enter(){
     printf("led state: off \n");
    update();
    // fsm->presentstate="OFF";

}

void LedOff::update(){
    char c;
    std::cin>>c;
    if (c=='c')
    {
      printf(" Turning on the LED\n");
      fsm->Change_State(new LedOn);
    }
    else
    {
      printf("Press c to on the LED.\n");
    }
     
    

}
void LedOff :: exit(){


}

