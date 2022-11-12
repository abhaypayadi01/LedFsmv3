#include "states.h"
#include<ctime>
using namespace std;

void LedOn::enter(){
    printf("led state: on \n");
    update();
    // fsm->presentstate="ON";

}

void LedOn::update(){
    char c;
    std::cin>>c;
    if (c=='p')
    {
      printf(" turning off the LED\n");
     fsm->Change_State(new LedOff);
    }
    
    

}
void LedOn :: exit(){


}
