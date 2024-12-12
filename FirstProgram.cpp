#include <iostream>  // header file library for working with input and output objects such as cout
using namespace std;  // using namespace std meand we can use names for objects and variables.
int main(){
    cout << "Hello World ";  //cout (pronounced "see-out") is an object used together with the insertion operator (<<) to output/print text.
    cout <<"Have a nice day"<<endl; // endl is used to end a line 
    cout << 3 << endl; 
    cout << 3+4 <<endl;
    cout << 3*5 <<endl;
    return 0;  // this ends the main function
}

// another way we can avoid using namespace

// # include <iostream>
// int main(){
//     std::cout<<"Hello World";
//     return 0;
// }