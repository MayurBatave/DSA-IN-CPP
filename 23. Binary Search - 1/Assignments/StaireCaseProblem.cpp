// You have n coins and you want to build a staircase with these coins. The staircase consists of k
// rows where the ith row has exactly i coins. The last row of the staircase may be incomplete.
// Given the integer n, return the number of complete rows of the staircase you will build.
// Example 1:
// Input: n = 5
// Output: 2
// Explanation: Because the 3rd row is incomplete, we return 2.
// Example 2:
// Input: n = 8
// Output: 3
// Explanation: Because the 4th row is incomplete, we return 3.

#include<iostream>
using namespace std ;

int main (){
    int n = 8;

    long long lo = 0;
    long long hi = n;
    bool flag = false ;
    while( lo <= hi ){
        long long mid = lo + ( hi - lo )/2 ;
        long long coinused = mid * ( mid + 1)/2;

        if( coinused == n ) {
            flag = true ;
            cout<<mid;
            break;
        }

        else if ( coinused > n ){
            hi = mid - 1 ;
        }
        else lo = mid + 1;
    }
    if( !flag )  cout<<hi;
    return 0;

}