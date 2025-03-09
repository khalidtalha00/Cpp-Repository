#include<iostream>
using namespace std;
int main(){
        int mynumbers[]={1,12,32,45,6,78,6};
        cout<<sizeof(mynumbers)<<endl;
        // it will show the result 28 instead of 7 because sixe of one character if 4 bytes
        //To find out how many elements an array has, you have to divide the size of the array by the size of the first element in the array
        int getlength=sizeof(mynumbers)/sizeof(mynumbers[0]);
        cout<<getlength<<endl;
    return 0;
}