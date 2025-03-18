#include<iostream>
using namespace std ;

int fact( int n ){
    int factorial=1;
    for ( int i=1 ; i<=n ; i++){
        factorial*=i;
        
    }
    return factorial;
}

int combination(int n , int r){
    int combo = fact(n)/(fact(r)*fact(n-r)) ;
    return combo;
}

int main(){
    cout<<" Enter the number : ";
    int n;
    cin>>n;
    for( int i=0 ; i<n ; i++){
        for ( int j=0 ; j<=i ;j++){
            cout<<combination(i , j)<<" ";
        }
        cout<<endl;
    }
    return 0;
    
}