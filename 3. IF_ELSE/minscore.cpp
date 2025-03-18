// If the marks of A, B and C are input through the keyboard, write a program to determine the student
// scoring the least marks.
#include<iostream>
using namespace std;
int main (){
    int a, b, c;
    cout<<" Enter the Marks of students :  ";
    cin>>a>>b>>c;
    if(a<=b){
        if(a<=c){
            cout<<a<<" min marks in exam ";
        }
        else{
            cout<<c<<" min marks in exam ";
        }
    }
    else{
       if(b<=c){
         cout<<b<<" min marks in exam ";
       }
       else{
         cout<<c<<" min marks in exam ";
       }
    }
}       