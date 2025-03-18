// Write a program to rotate the matrix by 90 degrees anti-clockwise.
// Input 1:
// 1 2 3
// 4 5 6
// 7 8 9

// Output 1:
// 3 6 9
// 2 5 8
// 1 4 7

#include<iostream>
using namespace std;

int main(){
    int m,n;
    cout<<" Enter the Number of rows : ";
    cin>>m;
    cout<<" Enter the Number of Columns : ";
    cin>>n;

    int arr[m][n];

    cout<<" Enter the Elements Of the Matrix : ";
    for( int i=0 ; i<m ; i++){
        for( int j=0 ; j<n ; j++){
            cin>>arr[i][j];
        }
    }

    // Transpose of the matrix
    int trans[n][m];

    for( int i=0 ; i<n ; i++){
        for( int j=0 ; j<m ; j++){
            trans[i][j]=arr[j][i];
        }
    }

    // Reverse Each Colume 
    int i,j;
    for( int k=0 ; k<m ; k++){
        i=0;
        j=n-1;

        while(i<=j){
            swap( trans[i][k] , trans[j][k]);
            i++;
            j--;
        }
        
    }

    // Print Resultant Matrix
    for( int i=0 ; i<n ; i++){
        for( int j=0 ; j<m ; j++){
            cout<<trans[i][j]<<" ";
        }
        cout<<endl;
    }



}