#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int n = 5;

    for( int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    bool flag = true;

    for( int i=0 ; i<n-1 ; i++){
        if( arr[i]>arr[i+1]){
            flag = false;
            break;
        }
    }

    if ( flag == true ) cout<<" Sorted ";
    else cout<<" Not Sorted";

    return 0;
}