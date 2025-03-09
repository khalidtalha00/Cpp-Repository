# include<iostream>
using namespace std;
int main(){
    // for loop is used to execute a statement for a specified number of times

    for(int i=1;i<=5;i++){
        cout<<i<<" ";
    }
 
    // even values between 0 to 10
    for(int i=0;i<=10;i=i+2){
        cout<<i<<" ";
    }

    // For each Loop--The for each loop is used exclusively to loop through an array in c++

    int myarr[5]={10,23,3,32,1};
    for(int i:myarr){
        cout<<i<<"\n";
    }

    return 0;
}