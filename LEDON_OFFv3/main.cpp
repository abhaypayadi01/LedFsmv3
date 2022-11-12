#include "states.h"
#include<ctime>
using std::cout;
string cqueue[5];
int front = -1, rear = -1, n=5,count=0;
void insertCQ();
void displayCQ();
// string state;
int main()
{
    Fsm fsm(new LedOff);
    
    
    // for(int i=0;i<5;i++){
    //     std::cout<<"HI";
    //  fsm.run();
    // }
    for(int i=0;i<5;i++){
        fsm.run();
        insertCQ();
    }
        displayCQ();
    // int choice=1;
    // while(choice!=0){
    //     fsm.run();
    //     // state=fsm.presentstate;
    //     // insertCQ(state);
    //     // std::cout<<"Do you want to change state press 1 to continue, press 2 to display the buffer, press 0 to exit";
    //     // std::cin>>choice;
    //     // if(choice==2)
    //     // displayCQ();

    // } 
    return 0;
}
 void insertCQ() {
    time_t tmNow = time(0);
    string dt = ctime(&tmNow);
    string val=dt;
   if(count>n) count=n;
   rear=(rear+1)%n;
   cqueue[rear]=val;
   count++;
}
void displayCQ() {
   int f = front, r = rear;
   f=(r+1)%n;
   cout<<"The Buffer stored is:"<<endl;
   for(int i=1;i<=count;i++){
      cout<<cqueue[f]<<endl;
      f=(f+1)%n;
   }
}