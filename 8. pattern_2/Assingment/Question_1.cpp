//  Enter the number  : 5
//    1
//   123
//  12345
// 1234567

#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<" Enter the number  : ";
    cin>>n;

    for ( int i=1 ; i<n ; i++){

        // spaces 
        for (int j =1 ; j<n-i ; j++){
            cout<<" ";
        }

        // numbers
        int a=1;
        for (int k=1 ; k<=2*i-1 ;k++){
            cout<<a;
            a++;
        }
        
        cout<<endl;
    }
}