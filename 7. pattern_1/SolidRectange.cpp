// *****
// *****
// *****
// *****



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
            cout<<"*";
        }
        cout<<endl;
    }
}