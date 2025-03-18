//  Enter the number : 4
// 1 2 3 4 3 2 1
// 1 2 3   3 2 1
// 1 2       2 1 
// 1           1

#include<iostream>
using namespace std ;
int main (){
    int n;
    cout<<" Enter the number : ";
    cin>>n;
    int a=1;
    for ( int i=1 ; i<=2*n-1 ; i++){
        if(i<=n){
            cout<<a<<" ";
            a++;
            if(i==n) a--;
        }
        else{
            a--;
            cout<<a<<" ";
        }
    }
    cout<<endl;

    
    int loop=1;
    for ( int i=1 ; i<=n-1 ; i++){
        a=1;
        for ( int j =1 ; j<=n-i ; j++ ){
            cout<<a<<" ";
            a++;
        }
        for ( int k=1 ; k<=loop ; k++){
            cout<<"  ";
            
        }
        loop+=2;
        for (int l=1 ; l<=n-i ; l++){
            a--;
            cout<<a<<" ";
            
        }
        cout<<endl;
    }
    return 0;
}