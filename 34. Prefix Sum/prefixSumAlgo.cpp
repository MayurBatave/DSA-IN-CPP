#include<iostream>
using namespace std;

int main(){
    int arr[] ={ 2 , 4, 5,1 ,5, 7, 8 , 9 ,40 ,3};
    int n = sizeof(arr)/sizeof( arr[0]);
    int preffixSum[n];
    int suffixSum[n];


    // Prefix Sum 
    preffixSum[0] = arr[0];
    for( int i = 1 ; i<n ; i++){
        preffixSum[i] = arr[i] + preffixSum[i-1];
    }
    cout<<"PreffixSum : "<<endl;
    for( int i = 0 ; i<n ; i++){
        cout<<preffixSum[i] << " ";
    }
    cout<<endl;

    // Suffix Sum 
    cout<<" Suffix Sum : "<<endl;
    suffixSum[n-1] = arr[n-1];
    for( int i = n-2 ; i>=0 ; i--){
        suffixSum[i] = suffixSum[i+1] + arr[i];
    }

    for( int i = 0 ; i<n ; i++){
        cout<<suffixSum[i] << " ";
    }
    cout<<endl;
}