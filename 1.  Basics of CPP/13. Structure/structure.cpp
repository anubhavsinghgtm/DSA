#include<iostream>
using namespace std;

// struct {
//   string brand;
//   string model;
//   int year;
// } myCar1, myCar2; // We can add variables by separating them with a comma here

// // Put data into the first structure
// myCar1.brand = "BMW";
// myCar1.model = "X5";
// myCar1.year = 1999;

// // Put data into the second structure
// myCar2.brand = "Ford";
// myCar2.model = "Mustang";
// myCar2.year = 1969;

// // Print the structure members
// cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
// cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";



// naming structure

struct DataType1{
    int x;
    string y;
};


int main(){
    DataType1 dt;
    dt.x = 10;
    dt.y = "hello";

    DataType1 dy;
    dy.x = 20;
    dy.y = "Bye";

    cout << dt.x << " " << dy.y<< endl;
}



