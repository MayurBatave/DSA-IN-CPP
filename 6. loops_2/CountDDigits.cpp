// WORK UPTO 10 DIGITS NUMBERS


#include<iostream>
using namespace std;
int main () {
    
   int n , count=0 ;
    
    cout<<" Enter the number : ";
    cin>>n;
   
    int a=n; //due to when we enter 0 its say 0 digits 
    
    while(n)// ALSO GIVE (n>0)
    {
        n=n/10; //  n/=10
        count+=1;  //  count++

    }

    if(a==0) cout<<" Number of digits is 1 ";
    else cout<<" Number of digits  in "<<a<<" is "<<count;
    
    return 0;
}