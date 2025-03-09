//  C++ has a bool data type, which can take the values true (1) or false (0).

#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int y=20;
    cout<<(x>y)<<endl;//returns 0 because the statement is false
    cout<<(x<y)<<endl;//returns 1 because the statement is true


    int myAge=21;
    int votingAge=18;

    if(myAge>=votingAge){  // here the condition is true
        cout<<"You are allowed to vote"<<endl;
    }
    else{
        cout<<"You are not allowed to vote"<<endl;
    }
}