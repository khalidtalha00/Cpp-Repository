// C++ Operators

// Operators are used to perform operations on variables and values
#include<iostream>
using namespace std;
int main(){
int x=100+5;  // here = is the assignment operator and + is the arithmetic operator


/*
C++ divides the operators into the following groups:

    Arithmetic operators
    Assignment operators
    Comparison operators
    Logical operators
    Bitwise operators

*/

// comparison operator

int a=5;
int b=9;
cout<< (a>b) <<endl;  //returns 0 because b>a



/*


Operator	      Name	                        Example	
==	              Equal to	                    x == y	
!=	              Not equal	                    x != y	
>	              Greater than	                x > y	
<	              Less than	                    x < y	
>=	              Greater than or equal to	    x >= y	
<=	              Less than or equal to	        x <= y

*/



/*
Logical Operators
As with comparison operators, you can also test for true (1) or false (0) values with logical operators.

Logical operators are used to determine the logic between variables or values.


Operator	  Name	             Description	                                    Example	
&& 	        Logical and	        Returns true if both statements are true	     x < 5 &&  x < 10	
|| 	        Logical or	        Returns true if one of the statements is true	 x < 5 || x < 4	
!	        Logical not	        Reverse the result, returns false if the result  !(x < 5 && x < 10)
                                is true
*/


return 0;
}