//  Write a function to count the number of digits in a number and then print the square of this number.

#include<iostream>
using namespace std;

int no_of_digits( int n ){
    int count=0;
    while(n>0){
        n/=10;
        count++;
    }
    return count;

}

int square( int digits ){
    digits*=digits;
    return digits;
}

int main(){
    int n;
    cout<<" Enter the number : ";
    cin>>n;
    int digits=no_of_digits(n);
    cout<<square(digits);
    return 0;
}