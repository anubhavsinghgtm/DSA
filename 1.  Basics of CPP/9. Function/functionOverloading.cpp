#include <iostream>
using namespace std;

int sum(int a, int b){
    cout<< " inside int function";
    return a + b;
}

double sum(double a, double b){
    cout << "inside the double function";
    return a + b;
}

int main(){


    cout << sum(10,12) <<" "<<sum(12.1, 10.34);

    return 0;


}