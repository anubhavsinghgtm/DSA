#include<iostream>
using namespace std;

class MyClass{
  private:
    int age;

  public:
    void setAge(int x){
        age = x;
    }


    int getAge(){
        return age;
    }
};


int main(){

    MyClass obj;
    obj.setAge(18);
    cout << obj.getAge() ;

    return 0;
}