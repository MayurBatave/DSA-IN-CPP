// WAP to print the sum of a given number and its reverse.
// Sample Input : 12
// Sample Output : 33 [12+21]

#include<iostream>
using namespace std;
int main () {
    
    int n ,  sum, lastdigit , reverse=0 ;
    
    cout<<" Enter the number : ";
    cin>>n;
    int recover =n;

    while(n>0){
        reverse*=10;
        lastdigit=n%10;
        reverse+=lastdigit;
        n/=10;
    }

    sum=recover+reverse;


    cout<<" Sum of number and its reverse number is : "<<sum;


}