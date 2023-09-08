/*
 Problem from the GFG
 problem link: 
 https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1?page=1&category[]=Arrays&sortBy=submissions
 =====================================================================================
*/

#include<bits/stdc++.h>
using namespace std;

  vector<int> duplicates(int arr[], int n) {
        // code here
        unordered_map<int, int> freq;
        vector<int> v;
        for(int i=0; i<n; i++){
            
             unordered_map<int, int> :: iterator it = freq.find(arr[i]);
            
            if(it == freq.end()){
                freq[arr[i]] = 1;
            }
            else if(freq[arr[i]] < 2){
                freq[arr[i]]++;
                v.push_back(arr[i]);
            }
        }
        
        if(v.empty())
        return { -1 };
        else{
            sort(v.begin(), v.end());
            return v;
        }
        
    }

int main(){
int S = 6;
int a[] = {11,5,2,23,7,45};
vector<int> ans = duplicates(a, S);
for(int x:ans) cout<<x<<" ";
return 0;
}