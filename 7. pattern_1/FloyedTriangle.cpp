// Enter the number of rows : 4
// 1
// 23
// 456
// 78910

#include<iostream>
using namespace std;
int main(){
    int n ;
    cout<<" Enter the number of rows : ";
    cin>>n;
    int a=1 ; // extra varible

    for ( int i=1 ; i<=n ; i++){
        for ( int j=1 ; j<=i ; j++){
            cout<<a;
            a++;
        }
        cout<<endl;
       
    }
    return 0;
}