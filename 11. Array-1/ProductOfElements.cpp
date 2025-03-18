// Calculate the product of all the elements in the given array

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout<<" Enter the size of the array : ";
    cin>>n;
    int arr[n];
    int product=1;
    cout<<" Enter the elements of array : \t";
    for (int i=0 ; i<n ; i++){
        cin>>arr[i];
        product*=arr[i];
    }
    cout<<"\n Product of the elements is : "<<product;
    
}