// Enter odd row number : 5
//  *           *
//     *     *
//        *
//     *     *
//  *           *

#include<iostream>
using namespace std ;
int main (){
    int n ;
    cout<< " Enter odd row number : ";
    cin>>n;
    

    for ( int i =1 ; i<=n ; i++){
        for ( int j=1 ; j<=n ; j++){
            if (i==j || i+j==n+1 )
            {
                cout<< " * ";
                }
            else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }
}