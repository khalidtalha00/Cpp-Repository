// a program that calculates the average of different ages:
#include<iostream>
using namespace std;
int main(){
    int ages[] ={20, 22, 18, 35, 48, 26, 87, 70};
    int sum=0;
    for(int i:ages){
        sum=sum+i;
    }
    int len=sizeof(ages)/sizeof(ages[0]);
    float avgAge=sum/len;
    cout<<"Average age is:"<<avgAge<<endl;
    
    // to get the lowest age
    int lowestAge=ages[0];
    for(int i:ages){
        if(ages[i]>ages[i+1]){
            lowestAge=ages[i+1];
            cout<< lowestAge<<endl;
        }
    }
    return 0;

}