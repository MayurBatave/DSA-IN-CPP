// Print index of a given element in an array. If not present, print -1.

#include<iostream>
using namespace std;

int print( int arr[] , int idx , int target){
    if( idx <0 ){
        return -1;
    }
    if( arr[idx] == target ) return idx;
    print( arr , idx-1 , target );
}

int main(){

    int arr[] = { 1 ,3, 4, 7,2, 6,9};
    int n = 7;
    int target = 6;
    int idx ;
    idx = print( arr , n , target);
    cout<<idx;

    return 0;
}