//  Enter the number  : 4
//    A
//   ABC
//  ABCDE
// ABCDEFG

#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<" Enter the number  : ";
    cin>>n;

    for ( int i=1 ; i<=n ; i++){

        // spaces 
        for (int j =1 ; j<=n-i ; j++){
            cout<<" ";
        }

        // numbers
        int a=65;
        for (int k=1 ; k<=2*i-1 ;k++){
            cout<<(char)a;
            a++;
        }
        
        cout<<endl;
    }
}