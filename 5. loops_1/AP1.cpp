// Display this AP - 4,7,10,13,16.. upto ‘n’ terms.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" Enter the how many term you can display : ";
    cin>>n;
     int a=4;
    for (int i=1 ; i<=n ; i++ ){
       
        cout<<a<<"\t";
        a+=3;
    }
}