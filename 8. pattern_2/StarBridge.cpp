//  Enter the number : 4
// *******
// *** ***
// **   **
// *     *

#include<iostream>
using namespace std ;
int main (){
    int n ;
    cout<<" Enter the number : ";
    cin>>n;
    int nst=n-1;
    int nsp=1;
    for ( int i =1 ; i<=2*n-1 ; i++){
        cout<<"*";
    }
    cout<<endl;

    for ( int i=1 ; i<= n-1 ; i++){
        // stars
        for (  int j =1 ; j<=nst ; j++ ){
            cout<<"*";
        }
        nst--;

        // sapces

        for ( int j=1 ; j<=nsp ; j++){
            cout<<" ";
        }
        nsp+=2;

        // stars

        for (int k=1 ; k<=nst+1 ; k++){
            cout<<"*";
        }
        cout<<endl;
    }
}