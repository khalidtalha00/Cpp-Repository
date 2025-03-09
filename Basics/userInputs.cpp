// In c++ we use cin to get input from the user
// cin is a predefined variable that reads data from the keyboard with the extraction operator (>>)

#include <iostream>
using namespace std;
int main()
{
    int x;
    cout << "Input any number ";
    cin >> x;
    cout << "Your number is:" << x << endl;

    // adding  two nums using user input
    int a, b, sum;

    cout << "Enter first number ";
    cin >> a;
    cout << "Enter second number ";
    cin >> b;
    sum = a + b;
    cout << "Sum:" << sum << endl;
}
