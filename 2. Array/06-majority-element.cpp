// Problem from the GFG
// problem link: https://practice.geeksforgeeks.org/problems/majority-element-1587115620/1?page=1&category[]=Arrays&sortBy=submissions
//
// =====================================================================================


#include<bits/stdc++.h>
using namespace std;

 int majorityElement(int a[], int size)
    {
        
        // your code here
        int i=0, candidate = -1, vote = 0;
        for(int i=0; i<size; i++){
            if(vote == 0){
                candidate = a[i];
                vote = 1;
            }
            else{
                if(candidate == a[i]){
                    vote++;
                }
                else{
                    vote--;
                }
            }
        }
        
        // check if candidate is right or not
        int count=0;
        for(int i=0; i<size; i++){
            if(candidate == a[i]) 
            count++;
        }
        
       if(size/2 < count){
           return candidate;
       }
       else{
           return -1;
       }
       
        
    }



int main(){
int S = 6;
int a[] = {1,2,0,2,0,1};
int v = majorityElement(a, S);
cout<<v<<" ";
return 0;
}