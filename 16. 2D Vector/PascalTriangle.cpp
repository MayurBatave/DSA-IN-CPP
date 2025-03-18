#include<iostream>
#include<vector>
using namespace std ;

int main (){
    int m;
    cout<<" Enter the Number of Rows : ";
    cin>>m;

    vector< vector<int> >v;
    // Creating vector of Variable Length
    for( int i=1 ; i<=m ; i++){
        vector<int>a(i);
        v.push_back(a);

    }

    // Generaring the pascal Trinagle

    for( int i=0 ;i<m ; i++){
        for( int j=0 ; j<=i ; j++){
            if( j==0 || i==j ){
                v[i][j]=1;  // storing 1 At 1st and last loacation of 2D Vector
            }
            else{
                v[i][j]=v[i-1][j]+v[i-1][j-1]; // Adding the sum Of the Above elements
            }
        }
    }

    // printing the 2D Vector

    for( int i=0 ;i<m ; i++){
        for( int j=0 ; j<=i ; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

}