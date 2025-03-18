// Question -- >

//  Enter the number  : 4
//     4444444
//     4333334
//     4322234
//     4321234
//     4322234
//     4333334
//     4444444



#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<" Enter the number  : ";
    cin>>n;


    //  Enter the number  : 4
    // 1111
    // 1222
    // 1233
    // 1234
    // for ( int i=1 ; i<=n ; i++){
    //     for ( int j=1 ;j<=n ; j++){
    //         if(i<=j){
    //             cout<<i;   // also used for to get min teram    min(i,j)
    //         }
    //         else{
    //             cout<<j;
    //         }
    //     }
    //     cout<<endl;
    // }


//  Enter the number  : 4
//     4444444
//     4333334
//     4322234
//     4321234
//     4322234
//     4333334
//     4444444

    for ( int i=1 ; i<=2*n-1 ; i++){
        for ( int j=1 ;j<=2*n-1 ; j++){
            int a=i ;  
            int b=j;   
            if(a>n) a=2*n-i;  // Psuedo variable   change the value of i and j
            if(b>n) b=2*n-j;  // Psuedo variable
            int x=min(a,b);
            cout<<n-x+1;
        }
        cout<<endl;
    }
    
}