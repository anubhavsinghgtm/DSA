// Problem from the GFG
// problem link: https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1?page=1&category[]=Arrays&sortBy=submissions
//
// =====================================================================================


#include<bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long maxSum = INT_MIN;
        
        int sum = 0;
        for(int i=0; i<n; i++){
            
            
            sum += arr[i];
            
            if(maxSum < sum) 
                maxSum = sum;
                
            if(sum<0){
                sum = 0;
            }
            
        }
        
        return maxSum;
    }

int main(){
int S = 5;
int a[] = {1,2,3,7,5};
int v = maxSubarraySum(a, S);
cout<<v<<"\n";
return 0;
}