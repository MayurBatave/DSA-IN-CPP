#include<iostream>
using namespace std ;

int fact( int n ){
    int factorial=1;
    for ( int i=1 ; i<=n ; i++){
        factorial*=i;
        
    }
    return factorial;
}

int main (){
    int n ,  r ;
    cout<<" Enter the value of n and r  : ";
    cin>>n>>r;
    int pemutation = fact(n)/fact(n-r);
    int combination = fact(n)/(fact(r)*fact(n-r));
    cout<<" Permutation of the numbers is : "<<pemutation<<endl;
    cout<<" Combination of the numbers is : "<<combination<<endl;
    return 0;
}