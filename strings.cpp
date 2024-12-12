#include<iostream>
#include<string>   //To use strings, you must include an additional header file in the source code, the <string> library:
using namespace std;
int main(){

string name ="Talha";
//Sting concatenation

string firstName="Talha";
string lastName="Khalid";
string fullName=firstName+" "+lastName;
cout<<"full Name:"<<fullName<<endl;

// we can also use the append() function to concatenate two string

cout<<firstName.append(lastName)<<endl;

// however we cannot add numbers to a string


// .length() function

string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

cout<< "length of string txt:"<<txt.length()<<endl;

// .length() and .size() both functions are the same

//Access Strings

// You can access the characters in a string by referring to its index number inside square brackets [].

// This example prints the first character in myString:

string myString ="hello";
cout<<myString[0]<<endl;
cout<<myString[myString.length()-1]<<endl; // this will give the last character of the string

// change string characters

myString[0]='j';
cout<<myString<<endl;


//The at() function
//The <string> library also has an at() function that can be used to access characters in a string:
cout <<myString.at(0)<<endl;


// user input string

// string myFirstname;
// cout<<"Enter your first name:";
// cin>>myFirstname;
// cout<<"Your first name:"<<myFirstname<<endl;



// cin vs getline()
// 
// cin only catches the first parameter however getline gets the full line
// that's why, when working with strings, we often use the getline() function to read a line of text. It takes cin as the first parameter, and the string variable as second:

string myfullName;
  cout << "Type your full name: ";
  getline (cin, myfullName);
  cout << "Your full name is: " << myfullName;

    return 0;
}