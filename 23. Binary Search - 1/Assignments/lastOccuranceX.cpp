// Given a sorted array of n elements and a target ‘x’. Find the last occurrence of ‘x’ in the array. If ‘x’
// does not exist return -1.
// Input 1: arr[] = {1,2,3,3,4,4,4,5} , x = 4
// Output 1: 6

#include<iostream>
using namespace std ;

int main (){
    int arr[] = {1,1,2,2,2,3,3,3,3,3,5,5,6,6,7,8};
    int n= 16;
    int target = 8;

    int lo = 0;
    int hi = n-1;
    bool flag = false;
    while( lo <= hi){
        int mid = (lo + hi)/2;
        // also used mid = lo + (hi-lo)/2

        if( arr[mid]==target){
           if( mid == n-1 || arr[mid+1] != target ){
                cout<<mid;
                flag = true;
                break;
           }
           else lo = mid + 1;
        }
        else if ( arr[mid] > target ) hi = mid -1 ;
        else lo = mid + 1;
    }
    if( flag == false ) cout<<" -1 ";
    

}