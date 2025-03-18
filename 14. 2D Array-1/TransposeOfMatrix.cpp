#include<iostream>
using namespace std;

int main(){
    int m, n;
    cout<<" Enter the dimeansion of matrix : ";
    cin>>m>>n;
    int a[m][n];
    cout<<" Enter the elements : "<<endl;
    for( int i=0 ; i<m ; i++){
        for ( int j=0 ; j<n ; j++){
            cin>>a[i][j];
        }
    }
    int trans[n][m];
    for( int i=0 ; i<n ; i++){
        for( int j=0 ; j<m ; j++){
            trans[i][j]=a[j][i];
        }
    }

    cout<<" Transpose of the matrix is : "<<endl;
    for( int i=0 ; i<n ; i++){
        for ( int j=0 ; j<m ; j++){
            cout<<trans[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}