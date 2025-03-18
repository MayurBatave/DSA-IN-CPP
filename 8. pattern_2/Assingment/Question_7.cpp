#include<iostream>
using namespace std;
int main (){
    int n ;
    cout<<" Enter the nnumber : ";
    cin>>n;
    int a=0;
    for(int i=1 ; i<=n ; i++){
        for( int j=1 ; j<=n ; j++){
            if(i+j==n+1) cout<<"#";
            else cout<<"*";

        }
        for(int j=1 ; j<=n ; j++){
            for ( int k=0 ; k<a ; k++){
                cout<<" ";
                
            }
            a++;
        }
    }
    

}