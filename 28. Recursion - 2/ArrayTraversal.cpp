// Print all the elements of an array in reverse order

#include<iostream>
using namespace std;

void print( int arr[] , int n){
    if( n<0 ) return ;
    cout<<arr[n]<<"\t";
    print( arr , n-1 );
}

int main(){
    int arr[] = { 1 ,2 ,3, 4, 5, 7, 8};
    int n = 6 ;
    print( arr , n );
    return 0;
}