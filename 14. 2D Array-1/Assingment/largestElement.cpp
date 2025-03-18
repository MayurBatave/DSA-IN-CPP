// Write a C++ program to find the largest element of a given 2D array of integers

#include<iostream>
#include<climits>
using namespace std ;

int main(){
    int m , n;
    cout<<" Enter the Dimeansion Of Matrix : ";
    cin>>m>>n;
    int arr[m][n];
    cout<<" Enter the elements : "<<endl;
    
    for( int i=0 ; i<m ; i++){
        for( int j=0 ; j<n ; j++){
            cin>>arr[i][j];
        }
    }
    int max = arr[0][0];
    for( int i=0 ; i<m ; i++){
        for( int j=0 ; j<n ; j++){
            if( max<arr[i][j]) max=arr[i][j];
        }
    }

    cout<<" Largest Elemrent is : "<<max;
}

    