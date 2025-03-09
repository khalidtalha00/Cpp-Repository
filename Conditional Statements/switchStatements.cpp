#include<iostream>
using namespace std;
int main(){
    // C++ Switch Statements
    // the switch statement are used to select one of many code blocks to be executed.
    int day=6;
    // int day=8;
    switch (day)
    {
        case 1: 
        cout<<"Monday";
        break;          //When C++ reaches a break keyword, it breaks out of the switch block.

        case 2:
        cout<<"Tuesday";
        break;

        case 3:
        cout<<"Wednesday";
        break;

        case 4:
        cout<<"Thursday";
        break;

        case 5:
        cout<<"Friday";
        break;

        case 6:
        cout<<"Saturday";
        break;

        case 7:
        cout<<"Sunday";
        break;
        
// The default Keyword
// The default keyword specifies some code to run if there is no case match:
        default:
        cout<<"No day with that number";

    
    }
    return 0;
}