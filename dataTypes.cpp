/*
    Basic Data Types
The data type specifies the size and type of information the variable will store:

Data Type	 Size	         Description
boolean	    1 byte	        Stores true or false values

char	    1 byte	        Stores a single character/letter/number, or ASCII values

int	        2 or 4 bytes	Stores whole numbers, without decimals

float	    4 bytes	        Stores  fractional numbers, containing one or more decimals.
                            Sufficient for storing 6-7 decimal digits.

double	    8 bytes         Stores fractional numbers, containing one or more
                            Sufficient for storing 15 decimal digits.

*/

#include <iostream>
#include<string>
using namespace std;
int main()
{
    int mynum = 12;
    bool isTrue = true;
    char myChar = 'C';
    double muDouble = 99.99;
    float myFloat = 9.86;

    // BOOLEAN DATATYPES

    // A boolean data type is declared with the bool keyword and can only take the values true or false.

    // When the value is returned, true = 1 and false = 0.

    bool isCodingFun = true;
    bool isFishTasty = false;
    cout << "Is coding Fun:" << isCodingFun << endl; // output:1
    cout << "Is fish Tasty:" << isFishTasty << endl; // output:0

    //String Types
    // The string type is used to store a sequence of characters (text). This is not a built-in type, but it behaves like one in its most basic usage. String values must be surrounded by double quotes:

    string greeting ="Hello";
    cout<<"greeting:"<<greeting<<endl;

    // To use strings, you must include an additional header file in the source code, the <string> library:


    //REAL LIFE EXAMPLES OF DATA TYPES

    int items =50;
    float cost_per_item=9.99;
    double totalCost=items*cost_per_item;
    char currrency='$';

    cout<<"Number of items:"<<items<<endl;
    cout<<"Cost per item:"<<cost_per_item<<endl;
    cout<<"total cost:"<<totalCost<<currrency<<endl;




    return 0;
}