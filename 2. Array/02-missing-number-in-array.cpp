// Problem from the GFG
// problem link: https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1?page=1&category[]=Arrays&sortBy=submissions
//
// =====================================================================================

#include<iostream>
#include<vector>
using namespace std;

int missingNumber(vector<int>& array, int n) {
        
        // Your code goes here
        int ts = n * (n + 1) / 2;
        int cs = 0;
        for(int x: array){
            cs += x;
        }
        return ts - cs;
        
    }

int main(){
int S = 5;
vector<int> a = {1,2,3,7,5};
int v = missingNumber(a, S);
cout<<v<<"\n";
return 0;
}