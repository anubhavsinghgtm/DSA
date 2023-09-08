/*
 Problem from the GFG
 problem link: 
 https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1?page=1&category[]=Arrays&sortBy=submissions
 =====================================================================================
*/

#include<bits/stdc++.h>
using namespace std;

 int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        
        if(n==1) return 1;
        
        int li=0, ri = n-1;
        long long ls=0, rs=0;
        
        // two pointer approach 
        while(li<=ri){
            if(ls<=rs){
                ls += a[li++];
            }
            else{
                rs += a[ri--];
            }
            
        }
        
        // cout<<ri<<" "<<rs<<"\n";
        if(ls - a[li-1] == rs) 
            return li;
        return -1;
    }

 

int main(){
int S = 6;
long long a[] = {11,5,2,23,7,45};
int ans = equilibriumPoint(a, S);
cout << ans;
return 0;
}