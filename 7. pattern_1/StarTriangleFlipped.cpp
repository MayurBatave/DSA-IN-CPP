//  Enter the number of rows : 5
//                 *
//              *  *
//           *  *  * 
//        *  *  *  *
//     *  *  *  *  *

#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<" Enter the number of rows : ";
    cin>>n;
   // int a=n ; // extra varible 

    for( int i=1 ; i<=n ; i++){
        for ( int j =1 ; j<=n-i/*j<=a*/ ; j++){
            cout<<"   ";
        }
        // a--;  --> for extra varible 
         for ( int k =1 ; k<=i ; k++){
            cout<<" * ";
        }
        
        cout<<endl;
    }

//  METHOD - 2
    // for( int i=1 ; i<=n ; i++){
    //     for ( int j =1 ; j<=n ; j++){
    //         if (i+j>=n+1){
    //             cout<<" * ";
    //         }
    //         else{
    //             cout<<"   ";
    //         }


    //     }
    //     cout<<endl;
    // }


    
}