#include<iostream>
using namespace std;

int main(){
    int arr[]={ 3,5,6,2,1,9,4};
    int n=7;
    cout<<" Before Sorting : ";
    for( int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    // Selection Sort 

    for( int i=0 ; i<n-1 ; i++){
        int min = i ;
        for( int j =i ; j<n ; j++){
            if ( arr[min] > arr[j]) min = j;
        }
        swap( arr[min] , arr[i]);
    }
    cout<<" After Sorting : ";
    for( int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }

}