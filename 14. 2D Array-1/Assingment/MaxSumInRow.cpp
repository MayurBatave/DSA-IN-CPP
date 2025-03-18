// Write a program to print the row number having the maximum sum in a given matrix.

#include<iostream>
using namespace std;

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

    
    int max=arr[0][0];
    int row=0;

    for( int i=0 ; i<m ; i++){
        int rowsum=0;
        for( int j=0 ; j<n ; j++){
            rowsum+=arr[i][j];
            
        }
        if(max<rowsum) {
            max=rowsum;
            row=i;
        }
    }

    cout<<" Row with Max Sum IS "<<row<<" Having sum is "<<max;
     
}