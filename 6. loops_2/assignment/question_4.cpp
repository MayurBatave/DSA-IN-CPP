// Print first ‘n’ fibonacci numbers.
// Sample Input : 10
// Output :
// 1 1 2 3 5 8 13 21 34 55

#include<iostream>
using namespace std;
int main () {
    
   int n ;
    
    cout<<" Enter the number : ";
    cin>>n;

    int a1=1 , a2=1 , a3;
    cout<<a1<<"\t"<<a2;  

    for(int i=1 ;i<=n-2 ; i++){
        a3=a1+a2;
        a1=a2;
        a2=a3;
        cout<<"\t"<<a3; 
    }
     
    return 0;
}