//  Write a program to find the product of two numbers using pointers

#include<iostream>
using namespace std;

int product( int *p1 , int *p2 ){
    return (*p1)*(*p2);
}

int main(){
    int a , b;
    cout<<" Enter the value of a & b :";
    cin>>a>>b;
    int *p1=&a;
    int *p2=&b;
   // cout<<" Product of the no is : "<<(*p1)*(*p2)<<endl;
    cout<<" Product of the no is : "<<product(p1 , p2);
}