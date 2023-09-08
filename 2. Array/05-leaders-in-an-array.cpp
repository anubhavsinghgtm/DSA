// Problem from the GFG
// problem link: https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1?page=1&category[]=Arrays&sortBy=submissions
// =====================================================================================


#include<bits/stdc++.h>
using namespace std;

 vector<int> leaders(int a[], int n){
        // Code here
        int leader = a[n-1];
        vector<int> v;
        for(int i=n-2; i>=0; i--){
            if(a[i]>=leader){
                v.push_back(leader);
                leader = a[i];
                
            }
            
            
        }
        v.push_back(leader);
        reverse(v.begin(), v.end());
        return v;
    }



int main(){
int S = 6;
int a[] = {1,2,0,2,0,1};
vector<int>v = leaders(a, S);
for(int x:v) cout<<x<<" ";
return 0;
}