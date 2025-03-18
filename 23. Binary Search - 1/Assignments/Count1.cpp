// Given a sorted binary array, efficiently count the total number of 1’s in it.
// Input 1 : a = [0,0,0,0,1,1]
// Output 1: 2

#include<iostream>
using namespace std ;

int main (){
    int arr[] = {0,0,0,0,0,1,1,1,1,1,1,1,1,1};
    int n= 14;
    int target = 1;

    int lo = 0;
    int hi = n-1;
    int count = 0;
    
    while( lo <= hi){
        int mid = (lo + hi)/2;
        // also used mid = lo + (hi-lo)/2

        if( arr[mid]==target){
           count++;
           int i = mid;
           while( i >=0 && arr[i-1] == target ){
                count++;
                i--;
                if(arr[i-1] != target) break;
           }
           i=mid;
           while( i <n && arr[i+1] == target ){
                count++;
                i++;
                if(arr[i+1] != target) break;
            }
            break;
        }
        else if ( arr[mid] > target ) hi = mid -1 ;
        else lo = mid + 1;
    }
    cout<<count;
    

}

// #include <bits/stdc++.h>
// using namespace std;
// int firstOccurrence(vector<int>&a , int n , int tgt){
// int low = 0 , high = n - 1;
// int ans = -1;
// while(low <= high){
// int mid = low + (high - low)/2;
// if(a[mid] == tgt){
// ans = mid;
// high = mid - 1;
// }
// else low = mid + 1;
// }
// return low;
// }
// int main() {
// int n;
// cin>>n;
// vector<int>a(n);
// for(int i=0;i<n;i++)cin>>a[i];
// cout<<n - firstOccurrence(a , n , 1);