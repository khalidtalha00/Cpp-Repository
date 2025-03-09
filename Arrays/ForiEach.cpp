//ere is also a "for-each loop" (introduced in C++ version 11 (2011)), which is used exclusively to loop through elements in an array (and other data structures, like vectors and lists)

#include<iostream>
using namespace std;
int main(){
    int mynums[6]={1,12,34,21,44,67};
    for(int i: mynums){
        cout<<i<<endl;
    }
    // we can also use this to loop through a string
    string cars[4]={"Toyota","Honda","Suzuki","Kia"};
    for(string i:cars){
        cout<<i<<endl;
    }
    return 0;
}