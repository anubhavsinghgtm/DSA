// Problem from the GFG
// problem link: https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1?page=1&category[]=Arrays&sortBy=submissions
//
// =====================================================================================


#include<bits/stdc++.h>
using namespace std;

int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        sort(arr, arr+r+1);
        return arr[k-1];
        
    }


    /*
    Rahter than this we can have multiple solutions like:
    1. using min or max heap
    2. using set(elements is distinct and set will arrange them in sorted manner)
    3. using quicksort(it places the pivot in right order, if pivot is at kth position we will stop sorting and return the ans.)
    */


int main(){
int S = 6, k =5;
int a[] = {11,5,2,23,7,45};
cout<<kthSmallest(a, 0, S-1, k);

return 0;
}