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
    
    // insertion Sort 

    for( int i = 1 ; i<n ; i++){
        int j=i ;
        while( j>=0 && arr[j-1] > arr[j] ){
            swap( arr[j] , arr[j-1]);
            j--;
        }
    }
    cout<<" After Sorting : ";
    for( int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }

}