//  Enter the number of rows : 5
//     1
//    12
//   123
//  1234
// 12345

#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<" Enter the number of rows : ";
    cin>>n;
 

    for( int i=1 ; i<=n ; i++){
        for ( int j =1 ; j<=n-i/*j<=a*/ ; j++){
            cout<<" ";
        }
        // a--;  --> for extra varible 
         for ( int k =1 ; k<=i ; k++){
            cout<<k;
        }
        
        cout<<endl;
    }
}