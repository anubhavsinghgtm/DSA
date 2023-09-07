#include<iostream>
using namespace std;

int main(){
    int x = 10;
    int* y = &x;
    cout << y <<" "<< &x <<endl;
    cout << *y << endl;
}