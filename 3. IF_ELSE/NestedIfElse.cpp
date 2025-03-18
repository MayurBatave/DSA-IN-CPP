#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<" Enter the Number : ";
   cin>>n;

   if (n%15!=0){
    if(n%5==0 || n%3==0){
        cout<<"Divisible by 5 or 3 ";
    }
    else{
    cout<<" Conndition Not Matching ";
   }
   }
   else{
    cout<<" Conndition Not Matching ";
   }
}