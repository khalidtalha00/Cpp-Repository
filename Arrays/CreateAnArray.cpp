#include <iostream>
using namespace std;
int main(){
    string cars[]={"Suzuki","Toyota","Honda","Tata"}; 

    // acess array element 
    cout<<cars[0]<<endl; // elemetn at index 0

    // change element
    cars[0]="Ford";
    cout<<cars[0]<<endl;

  // loop throug array
cout<<"Looping through the elements:"<<endl;
  for(int i=0;i<4;i++){
    cout<<i<<"="<<cars[i]<<endl;
  }


    return 0;
}