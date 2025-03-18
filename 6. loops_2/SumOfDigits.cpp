#include<iostream>
using namespace std;
int main () {
    
   int n , lastdigit, sum=0 ,recover;
    
    cout<<" Enter the number : ";
    cin>>n;
   
   recover=n;  
    
    while(n>0)
    {
        lastdigit=n%10; 
        sum+=lastdigit;  
        n/=10;
        

    }
    cout<<" Sum of digits of "<<recover<<" is "<<sum;
}