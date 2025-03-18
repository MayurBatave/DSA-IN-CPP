// Sample Input : m = 4, n = 6
// Sample Output :
// ******
// *    *
// *    *
// ******

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" Enter the number of row : ";
    cin>>n;
    int m;
    cout<<" Enter the number of colume : ";
    cin>>m;

    for ( int i=1 ; i<=n ; i++ ){
        for ( int j=1 ; j<=m ; j++){
            if(i==1 || j==1 || i==n || j==m){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
}