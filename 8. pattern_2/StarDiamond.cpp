//  Enter the number  : 4
//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *


//  METHOD - > 1

// #include<iostream>
// using namespace std;
// int main(){
//     int n ;
//     cout<<" Enter the number  : ";
//     cin>>n;
    
//     int nsp=n-1;
//     int nst=1;
//     for ( int i =1 ; i<=n ; i++){
//         for ( int j =1 ; j<=nsp ; j++){
//             cout<<" ";
//         }
//         nsp--;
//         for(int k=1 ; k<=nst ;k++){
//             cout<<"*";
//         }
//         nst+=2;
//         cout<<endl;
        


//     }
//         int a=n+1;
//         for ( int i =1 ; i<=n-1 ; i++){
//             for ( int j =1 ; j<=i ; j++){
//                 cout<<" ";
//             }
            
//             for(int k=1 ; k<=a ;k++){
//                 cout<<"*";
//             }
//             a-=2;
            
//             cout<<endl;
        


//     }
    
// }   


// METHOD - > 2

#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<" Enter the number  : ";
    cin>>n;
    int nst =1;
    int nsp =n-1;


    for ( int i=1 ; i<=2*n-1 ; i++){

        // spaces
        for (int j=1 ; j<=nsp ; j++){
            cout<<" ";
        }
        if (i<=n-1){
            nsp--;
        }
        else{
            nsp++;
        }

        // stars

        for(int k=1 ; k<=nst ;k++){
            cout<<"*";
        }
        if (i<=n-1){
            nst+=2;
        }
        else{
            nst-=2;
        }
        cout<<endl;
    }
}       