//  Q3: Given two numbers a and b, write a function to print all odd numbers between them

#include<iostream>
using namespace std;



int main(){
    int a,b;
    cout<<" Enter the value of a & b : ";
    cin>>a>>b;
    // for( int i=a+1 ; i<b ; i++){
    //     if(i%2==1) cout<<i;

    //     cout<<endl;
    // }
    int i=a;
    if(a%2==1) i+=2;
    else i++;
    while(i<b){
        
        cout<<i<<" ";
        i+=2;
    }
    
}