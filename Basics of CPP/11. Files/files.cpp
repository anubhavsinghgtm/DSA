#include<iostream>
#include<fstream>
#include<string>
using namespace std;


// to create a file
/*
int main(){
    
    ofstream MyFile("filename.txt");

    MyFile << "This is the textual data of my file.";

    MyFile.close();

    return 0;
}
*/

int main(){

    string myText;
    ifstream MyReadFile("filename.txt");
    while(getline(MyReadFile, myText)){
        cout<< myText<<"\n";
    }

    return 0;
}