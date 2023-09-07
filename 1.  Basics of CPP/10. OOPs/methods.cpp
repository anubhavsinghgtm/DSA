
#include<iostream>
using namespace std;

// ================= Inside the class ======================


// class MyClass {        // The class
//   public:              // Access specifier
//     void myMethod() {  // Method/function defined inside the class
//       cout << "Hello World!";
//     }
// };

// int main() {
//   MyClass myObj;     // Create an object of MyClass
//   myObj.myMethod();  // Call the method
//   return 0;
// }






// ======================= Outside the class ====================

// class MyClass {        // The class
//   public:              // Access specifier
//     void myMethod();   // Method/function declaration
// };

// // Method/function definition outside the class
// void MyClass::myMethod() {
//   cout << "Hello World!";
// }

// int main() {
//   MyClass myObj;     // Create an object of MyClass
//   myObj.myMethod();  // Call the method
//   return 0;
// }

// ============== passing the parameters ====================

class Sum {        // The class
  public:              // Access specifier
    int add(int a, int b);   // Method/function declaration with parameters
};


int  Sum::add(int a, int b) {
  return a+b;
}

int main() {
  Sum myObj;     
  int ans = myObj.add(5,8);
  cout << ans;
  return 0;
}