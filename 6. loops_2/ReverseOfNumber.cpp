#include<iostream>
using namespace std;
int main () {
    
   int n , lastdigit, reverse =0 ,recover;
    
    cout<<" Enter the number : ";
    cin>>n;
   
   recover=n;  
    
    while(n>0)
    {   
        reverse*=10;
        lastdigit=n%10; 
        reverse += lastdigit;
        
        n/=10;
        

    }
    cout<<" Reverse of the "<<recover<<" is "<<  reverse;
}