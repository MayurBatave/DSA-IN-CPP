// Q1 : Write a function to print squares of first n natural numbers, taking n as argument to the function

#include<iostream>
using namespace std;

int square(int a ){
    return a*a ;
}
int main(){
    int n;
    cout<<" Enter the value of n : ";
    cin>>n;
    for( int i=1 ; i<=n ; i++){
        cout<<square(i)<<" ";
        cout<<endl;
    }
    
}