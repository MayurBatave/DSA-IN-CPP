// Enter the number : 4
// A B C D E F G
// A B C   E F G
// A B       F G
// A           G 

#include<iostream>
using namespace std ;
int main (){
    int n;
    cout<<" Enter the number : ";
    cin>>n;
    for ( int i=1 ; i<=2*n-1 ; i++){
        cout<<(char)(i+64)<<" ";
    }
    cout<<endl;
    
    int loop=1;
    for ( int i=1 ; i<=n-1 ; i++){
        int a=65;
        for ( int j =1 ; j<=n-i ; j++ ){
            cout<<(char)a<<" ";
            a++;
        }
        for ( int k=1 ; k<=loop ; k++){
            cout<<"  ";
            a++;
        }
        loop+=2;
        for (int l=1 ; l<=n-i ; l++){
            cout<<(char)a<<" ";
            a++;
        }
        cout<<endl;
    }
    return 0;
}