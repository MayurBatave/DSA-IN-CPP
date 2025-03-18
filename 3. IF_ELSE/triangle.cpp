// Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or
// isosceles triangle
#include<iostream>
using namespace std;
int main (){
    int a, b, c;
    cout<<" Enter the sides of triangle :  ";
    cin>>a>>b>>c;
    if(a==b && b==c){
        cout<<" Trianle is Equilateral";
    }
    else if(a==b || a==c || b==c){
        cout<<" Trianle is isosceles ";
    }
    else{
        cout<<" Trianle is scalene";
    }
    return 0;
    
}