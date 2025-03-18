#include<iostream>
using namespace std ;

int main (){
    int arr[] = { 1,5,6,8,9,10,35,64,90};
    int n= 9;
    int target = 35;

    int lo = 0;
    int hi = n-1;
    bool flag = false ;
    while( lo <= hi){
        int mid = (lo + hi)/2;
        // also used mid = lo + (hi-lo)/2

        if( arr[mid]==target){
            cout<<" Key Found At : "<<mid;
            flag = true ;
            break;
        }
        else if ( arr[mid] > target ) hi = mid -1 ;
        else lo = mid + 1;
    }
    if ( flag == false )
        cout<<" Key is Not Found ";

}