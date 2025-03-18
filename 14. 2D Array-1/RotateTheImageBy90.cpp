// Write the program to rotate the matrix by 90 degree by clockwise

#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout<<" Enter the dimeansion of matrix : ";
    cin>>n;
    int a[n][n];
    cout<<" Enter the elements : "<<endl;
    for( int i=0 ; i<n ; i++){
        for ( int j=0 ; j<n ; j++){
            cin>>a[i][j];
        }
    }

    

    // 1. transpose the Squre matrix 

    for( int i=0 ; i<n ; i++){
        for( int j=i+1 ; j<n ; j++){
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    

    // 2. Reverse the each row of Transpose matrix 
    for ( int k=0 ; k<n ; k++){
        int i=0;
        int j=n-1;
        while(i<=j){
            swap( a[k][i] , a[k][j]);
            i++;
            j--;
        }
    }

    cout<<" Resultant Matrix Is  : "<<endl;
    for( int i=0 ; i<n ; i++){
        for ( int j=0 ; j<n ; j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;

}