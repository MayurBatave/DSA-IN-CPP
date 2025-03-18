// Input: n = 4
// Output:
// A
// A B
// A B C
// A B C D

#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<" Enter the number  : ";
    cin>>n;
    

    for ( int i=65 ; i<=n+64 ; i++){
        for ( int j=65 ; j<=i ; j++){
            cout<<(char)j;
            
        }
        cout<<endl;
    }
}