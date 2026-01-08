#include<iostream>
using namespace std;

// Use only when array of [0,n] or [1,n] and required O(n) T.C. and O(1) S.C.

int main(){
    int arr [] = { 1 ,5, 6 ,3, 8, 2, 7 , 4 };
    int n = sizeof( arr) / sizeof( arr[0]);

    for( int i = 0 ; i<n ; i++ ){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int i = 0;
    while( i<n ){
        int correctIndex = arr[i] - 1;
        if( correctIndex == i ) i++;
        else swap( arr[i] , arr[correctIndex]);
    }
    for( int i = 0 ; i<n ; i++ ){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}