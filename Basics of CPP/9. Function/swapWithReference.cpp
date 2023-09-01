#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int x = a;
    a = b;
    b = x;
}

int main(){
    int first = 10;
    int second = 20;
    swap(first,second);

    cout << first <<" "<<second;
    return 0;
}