#include<iostream>
using namespace std;
int main(){
    int m , n , p, q;
    cout<<" Enter the row and Column of 1st Matrix : ";
    cin>>m>>n;
    cout<<" Enter the row and Column of 2nd Matrix : ";
    cin>>p>>q;
    

    if(n==p){
        // inputs
        int a[m][n];
        cout<<" Enter the elemet of 1st Matrix : ";
        for( int i=0 ; i<m ; i++){
            for( int j=0 ; j<n ; j++){
                cin>>a[i][j];
            }
        }
        cout<<endl;
        int b[p][q];
        cout<<" Enter the elemet of 2st Matrix : ";
        for( int i=0 ; i<p ; i++){
            for( int j=0 ; j<q ; j++){
                cin>>b[i][j];
            }
        }
        cout<<endl;
        // Multiplication

        int res[m][q];
        for( int i=0 ; i<m ; i++){
            for ( int j =0 ; j<q ; j++){
                res[i][j]=0;
                for( int k=0 ; k<q ; k++){
                    res[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        cout<<endl;

        // display the result 
        for( int i=0 ; i<m ; i++){
            for( int j=0 ; j<q ; j++){
                cout<<res[i][j]<<"\t";

            }
            cout<<endl;
        }

    }
    else{
        cout<<" Cannot Multiply "<<endl;
    }

}