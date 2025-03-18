// Display this GP - 3,12,48,.. upto ‘n’ terms.
#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<" Enter the how many term you can display : ";
    cin>>n;
    int a=3;
    for (int i=1 ; i<=n ; i++){
        cout<<a<<"\t";
        a=a*4;
    }
}