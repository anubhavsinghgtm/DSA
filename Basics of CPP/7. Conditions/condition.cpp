#include<iostream>
using namespace std;

int main(){
int day = 2;
switch (day) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    
  default:
    cout << "Friday";
}
}