#include<iostream>
using namespace std;
int main () {
    
   int n ;
    
    cout<<" Enter the number : ";
    cin>>n;

    int a1=1 , a2=1 , a3;
    // cout<<a1<<"\t"<<a2;  //print full series upto nth term

    for(int i=1 ;i<=n-2 ; i++){
        a3=a1+a2;
        a1=a2;
        a2=a3;
        // cout<<"\t"<<a3;  //print full series upto nth term
    }
    cout<<a2;  // TAKING a2 INSTEAD OF a3 FOR PRINTING 1 & 2 TERM //print only nth term of series
    return 0;
}