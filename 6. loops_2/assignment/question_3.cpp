// Print the factorials of first ‘n’ numbers
// Sample Input : 10
// Output :
// 1
// 2
// 6
// 24
// 120
// 720
// 5040
// 40320
// 362880
// 3628800

#include<iostream>
using namespace std;
int main () {
    
    int n , fact=1;
    
    cout<<" Enter the number : ";
    cin>>n;

    for (int i=1 ; i<=n ; i++){
        for( int j=1 ; j<=i ; j++){
            fact*=j;
        }
        cout<<fact<<endl;
        fact=1;
    }

}