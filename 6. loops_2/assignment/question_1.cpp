// WAP to print the sum of all the even digits of a given number
#include<iostream>
using namespace std;
int main () {
    
    int n ,  sum=0 , lastdigit;
    
    cout<<" Enter the number : ";
    cin>>n;

    while( n>0 ){
        lastdigit=n%10;
        if( lastdigit%2==0){
            sum+=lastdigit;
        }
        n/=10;
    }
    cout<<" Sum of even digits is "<< sum;
}