// vectors are resizable arrays
//its size is dynamic meaning it can grow and shrink

#include<iostream>
using namespace std;
int main() {
    // A vector with 3 elements
    vector<string> cars = {"Volvo", "BMW", "Ford"};
    
    // Adding another element to the vector
    cars.push_back("Tesla");
    
    for (string car : cars) {
      cout << car << "\n";
    }
    return 0;
}