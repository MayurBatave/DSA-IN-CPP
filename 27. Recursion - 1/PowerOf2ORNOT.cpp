// Given a positive integer, return true if it is a power of 2

#include<iostream>
using namespace std;

bool check( int n ){
    if( n == 1) return true;
    if( n%2 == 0 ) return check(n/2);
    return false;
}

int main(){
    int n = 64;
    if( check(n)) cout<<"YES";
    else cout<<"NO";
    return 0;
}