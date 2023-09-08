// Problem from the GFG
// problem link: https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1?page=1&category[]=Arrays&sortBy=submissions
//
// =====================================================================================


#include<bits/stdc++.h>
using namespace std;

 void sort012(int a[], int n)
    {
        // code here 
        // int li = -1, ri = -1;
        // for(int i=0; i<n; i++){
        //     if(arr[i]==0){
        //         if(i - li > 1){
        //             arr[li+1]--;
        //             arr[i]++;
        //         }
        //         li++;
                
        //         if(i - ri<=1){
        //             ri++;
        //         }
        //     }
            
        //     if(arr[i] == 1 ){
        //         if(i - ri > 1){
        //         arr[ri+1]--;
        //         arr[i]++;
        //         }
        //         ri++;
                
        //     }
        
        // }
        
        // ============== TLE ====================
        
        // int start = 0, mid = 0, end = n-1;
        // while(mid<=end){
        //     if(a[mid]==0){
        //         swap(a[start++], a[mid++]);
        //     }
        //     else if(a[mid] == 1){
        //         mid++;
        //     }
        //     else{
        //         swap(a[mid], a[end--]);
        //     }
        // }
        
        
        int arr[3] = {0};
        for(int i=0; i<n; i++){
            arr[a[i]]++;
        }
        
        
        int j=0;
        while(arr[0]--){
            a[j++] = 0; 
            
        }
        
        while(arr[1]--){
            a[j++] = 1;
        }
        
        while(arr[2]--){
            a[j++] = 2;
        }
        
        
    }
    
int main(){
int S = 6;
int a[] = {1,2,0,2,0,1};
sort012(a, S);

return 0;
}