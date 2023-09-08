
// Problem from the GFG
// problem link: https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1?page=1&category[]=Arrays&sortBy=submissions
//
// =====================================================================================



#include<bits/stdc++.h>
using namespace std;

vector<int> subarraySum(vector<int>arr, int n, long long s)
{
    vector<int> ans = {0,0};
    int sum = 0, li=0, ri=0;
    if(s==0) return {-1};
    while(ri<=n){
        if(sum == s){
            return {li+1,ri};
        }
        else if(sum<s){
            sum += arr[ri++];
        }
        else{
            sum -= arr[li++];
        }
    }
    return {-1};
}


int main(){
int N = 5, S = 12;
vector<int> a = {1,2,3,7,5};
vector<int> v = subarraySum(a, N, S);
return 0;
}