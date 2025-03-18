// Input: n = 4
// Output:
// 1
// A B
// 1 2 3
// A B C D
// 1 2 3 4 5


#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<" Enter the number  : ";
    cin>>n;
    

    for ( int i=65 ; i<=n+65 ; i++){
        int a=1;
        for ( int j=65 ; j<=i ; j++){
         if(i%2==1){
            cout<<a;
            a++;
         }    
         else cout<<(char)j;
        
        }
        cout<<endl;
    }
}