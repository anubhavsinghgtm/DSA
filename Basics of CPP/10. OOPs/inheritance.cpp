#include<iostream>
using namespace std;


// parent class(encapsulated)
class ParentClass{
    private:
        int x;
        int y;

    public:    

        void setX(int a){
            x = a;
        }

        void setY(int b){
            y = b;
        }

        int getX(){
            return x;
        }

        int getY(){
            return y;
        }

        int sum(){
            return x+y;
        }
};


// derived class
class ChildClass: public ParentClass {
    public:
        int z;

    void printZ(){
        cout<<" "<<z;
    }

};


class SecondParent{
    public:
     int s;
};


// multiple inheritance 
class SecondClass : public ParentClass, public SecondParent{

};


// protected element access
class ProtectedClass {
    protected:
        int pr;

       
    
    public:

        void setPr(int x){
            pr = x;
        }

        int getPr(){
            return pr;
        }
};


// child class 
class Class2: public ProtectedClass{

    public:
        int sqr(){
            return pr * pr;
        }

};

// main function
int main(){
    // ChildClass childObj;
    // childObj.setX(20);
    // childObj.setY(10);

    // cout << childObj.sum();

    // SecondClass obj;
    // obj.setX(10);
    // obj.setY(16);
    
    // obj.s = 20;


    Class2 obj2;

    obj2.setPr(12);

    cout << obj2.sqr();


    return 0;
}