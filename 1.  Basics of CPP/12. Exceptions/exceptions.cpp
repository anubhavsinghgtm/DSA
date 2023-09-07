#include<iostream>
using namespace std;

int main(){


    // try {
    // int age = 15;
    // if (age >= 18) {
    //     cout << "Access granted - you are old enough.";
    // } else {
    //     throw (age);
    // }
    // }
    // catch (int myNum) {
    // cout << "Access denied - You must be at least 18 years old.\n";
    // cout << "Age is: " << myNum;
    // }


    // try{
    //     int age = 15;
    //     if(age >= 18){
    //         cout << "Access granted - you are old enough";
    //     }
    //     else{
    //         throw 505;
    //     }

    // }

    // catch(...){
    //     cout << "Access denied - You must have atleast 18 year old";
    // }



  try {
  int age = 75;
  if (age >= 18 && age <60) {
    cout << "Access granted - you are old enough.";
  } else if(age < 18) {
    throw 505;
  }
  else{
    throw 400;
  }

    

}
catch (int s) {
  if(s == 505){
    cout<<"You are really young";
  }
  else if(s == 400){
    cout<<"You are too old";
  }
}

    return 0;
}