//  Find the second largest element in the given Array in one pass

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
    int f_max= INT_MIN;
    int s_max= INT_MIN;
    for( int i=0 ; i<n ; i++){
        if( f_max<arr[i]){
            s_max=f_max;
            f_max=arr[i];
        }
        else if ( s_max<arr[i] && arr[i]!=f_max){
            s_max=arr[i];
        }
    }
    cout<<" Second Max of the array is :"<<s_max;
    return 0;
    
}