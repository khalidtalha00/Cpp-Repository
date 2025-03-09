#include<iostream>
using namespace std;
int main(){
    if(20>18){
        cout<<"20 is greater than 18"<<endl;
    }
    else{
        cout<<"20 is not greater than 18"<<endl;
    }

    // else if statements


    int time =22;
    if(time<10){
        cout<<"Good Morning!"<<endl;
    }
    else if(time<20){
        cout<<"Good Day"<<endl;
    }
    else{
        cout<<"Good evening"<<endl; 
    }


    // short hand if else

    int myAge =18;
    string result =(myAge>=18)?"You can vote":"You cannot vote";
    cout<<result<<endl;



    return 0;
}