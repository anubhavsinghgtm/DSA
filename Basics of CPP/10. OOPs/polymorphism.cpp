#include<iostream>
using namespace std;

class Vehicals{
    public:
        virtual void getWheel(){
            cout << "The vehical has wheels \n";
        }
};

class Bike: public Vehicals {
    public:
        void getWheel() override {
            cout << "The vehical has two wheels \n";
        }
};

class Car: public Vehicals{
    public:
        void getWheel() override {
            cout << "The vehical has four wheels \n";
        }
};


int main (){
    Bike Yamaha;
    Yamaha.getWheel();


    Car Suzuki;
    Suzuki.getWheel(); 


    return 0;
}