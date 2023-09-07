#include <iostream>
using namespace std;

class MyClass{
    public:
        MyClass(){
            cout<<"inside the constructor";
        }
};

int main(){
    MyClass classObj;
    return 0;
}

