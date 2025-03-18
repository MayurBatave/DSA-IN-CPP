// Given a number ‘n’. Predict whether ‘n’ is a valid perfect square or not.
// Input 1: n = 36
// Output 1: yes
// Input 2: n = 45
// Output 2: no

#include<iostream>
using namespace std ;

int main (){
    
    int target = 45;

    int lo = 0;
    int hi = target ;
    bool flag = false ;
    while( lo <= hi){
        int mid = (lo + hi)/2;
        // also used mid = lo + (hi-lo)/2

        if( mid * mid == target ){
            flag = true;
            cout<<" Yes ";
            break;
        }
        else if ( mid * mid > target  ) hi = mid -1 ;
        else lo = mid + 1;
    }
    if ( flag == false )
        cout<<" No ";

}