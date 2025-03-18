#include<iostream>
using namespace std;
int main(){
   int a,b,c;
   cout<<" Enter the first Number : ";
   cin>>a;
   cout<<" Enter the second Number : ";
   cin>>b;
   cout<<" Enter the third Number : ";
   cin>>c;

   if(a>=b){
    if(a>=c){
        cout<<a<<" is greatest";
    }
    else{
        cout<<c<<" is greatest";
    }
   }
   else{
    if(b>=c){
        cout<<b<<" is greatest";
    }
    else{
        cout<<c<<" is greatest";
    }
   }

   
}