#include<iostream>
using namespace std;

class FirstClass {
    public:
        int x; 
        int y; //attributes

};

int main(){
    FirstClass fl;

    fl.x = 10;
    fl.y = 15;

    cout << fl.y <<" "<<fl.x;

    return 0;
}