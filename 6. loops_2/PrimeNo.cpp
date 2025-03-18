#include<iostream>
using namespace std;
int main(){
     int n;
    cout<<" Enter the number : ";
    cin>>n;

    bool flag=true; // true means prime
    for (int i=2 ; i<=n-1 ; i++){
        if(n%i==0)
            flag=false; //this is factocs of number means not prime
            break;
    }
    if( n==1) cout<<" 1 is not prime nor composite "<<endl;
    else if(flag==true)
        cout<<n<<" is prime number"<<endl;
    else 
        cout<<n<<" is not prime number"<<endl;
    


 return 0;   
}