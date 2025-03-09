#include<iostream> 
using namespace std;
int main(){

// The while loop loops through a block of code as long as the condition is true;

    int num =5;
    while(num>=0){
        cout<<num<<"\n";
        num=num-1;
    }
    

// The do while loop is a variation of the while loop however it will execute the code block at lest even before checking if the condition is true
int i=0;
do{
    cout<<i<<"\n";
    i++;
}
while(i<5);

return 0;

}