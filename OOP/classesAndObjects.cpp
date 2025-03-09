#include<iostream>
using namespace std;
//define a class
class Car{
    public:
    string brand;
    string model;
    int year;

    void display(){ // member function
        cout<<"Brand:"<<brand<<endl;
        cout<<"model:"<<model<<endl;
        cout<<"year:"<<year<<endl;
    }

};


int main(){
    // creating objects of car
    Car car1;
    Car car2;
    car1.brand="Toyota";
    car1.model="Hilux";
    car1.year=2020;
    car1.display(); // call the member function

    car2.brand="Ford";
    car2.model="Endevor";
    car2.year=2023;
    car2.display();



    return 0;
}