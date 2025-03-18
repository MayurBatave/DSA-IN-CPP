//  Find the minimum value out of all elements in the array.

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<" Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<" Enter the elements of array : \t";
    for (int i=0 ; i<n ; i++){
        cin>>arr[i];
        
    }
    int min= INT_MAX;
    for( int i=0 ; i<n ; i++){
        if(min>arr[i]) min=arr[i];
        // min= min (min,arr[i]);
    }
    cout<<" minimum of the array is :"<<min;
    return 0;
    
}