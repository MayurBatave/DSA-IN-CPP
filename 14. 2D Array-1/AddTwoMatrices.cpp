#include<iostream>
using namespace std;

int main(){
    int m, n ,p,q;
    cout<<" Enter the dimeansion of 1st matrix : ";
    cin>>m>>n;
    int a[m][n];
    cout<<" Enter the elements : "<<endl;
    for( int i=0 ; i<m ; i++){
        for ( int j=0 ; j<n ; j++){
            cin>>a[i][j];
        }
    }
    cout<<" Enter the dimeansion of 2nd matrix : ";
    cin>>p>>q;
    int b[p][q];
    cout<<" Enter the elements : "<<endl;
    for( int i=0 ; i<m ; i++){
        for ( int j=0 ; j<n ; j++){
            cin>>b[i][j];
        }
    }
    int res[m][n];
    if(m==p && n==q ){
        for(int i=0 ; i<m ; i++){
            for ( int j=0 ; j<p ; j++){
                res[i][j]=a[i][j]+b[i][j]; // not use of extra matrix then b[i][j]=b[i][j]+a[i][j];
            }
        }
    }
    else{
        cout<<" Addition not possible ";
    }

    cout<<" Resultant Matrix is : "<<endl;
    for( int i=0 ; i<m ; i++){
        for ( int j=0 ; j<n ; j++){
            cout<<res[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;


}