/*
Variables in C++

ariables are containers for storing data items


*/

#include<iostream>
using namespace std;
int main(){
    cout<<"Variables in Cpp:"<<endl;
    int myNum=15;
    cout<<myNum<<endl;

    bool isTrue=true;
    cout<<isTrue<<endl;

    double mydecimalnum=99.99;
    cout<<mydecimalnum<<endl;

    string myname ="Talha";
    cout<<myname<< endl;

    char myletter ='d';
    cout<<myletter<<endl;


    // Declaring and using multiple variables

        int x =5,y=8,z=10;
        cout<<x+y+z<<endl;

     //C++ Identifiers

    // All C++ variables must be identified with unique names.

    // These unique names are called identifiers.

    // Identifiers can be short names (like x and y) or more descriptive names (age, sum, totalVolume).

    int minutesPerhour=60; //here minutesPerhour is an identifier



    // CONSTANTS IN C++
      //when we do not want others to change the value of a variable we declare that variable as const

      const string myName="Talha Khalid"; 

        //string myName="Danny"; this will give error


    // PRACTICAL APPLICATION FOR VARIABLES

    //However, for a practical example of using variables, we have created a program that stores different data about a college student:
    string studentName="Talha Khalid";
    int studentId=22013;
    int studentAge=22;
    float studentFee=45.56;
    char studentGrade ='B';

    cout<<"---STUDENT DETAILS---"<<endl;

    cout<<"Student Name:"<<studentName<<endl;
    cout<<"Student Id:"<<studentId<<endl;
    cout<<"Student Age:"<<studentAge<<endl;
    cout<<"Student Fee:"<<studentFee<<endl;
    cout<<"Student Grade:"<<studentGrade<<endl;



    // calculate area of a rectangle

    int length =50;
    int breadth=200;

    int area =length*breadth;

    cout<<"Area of rectangle:"<<area<<endl;




    return 0;
} 
