#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<" Enter the number : ";
    cin>>n;
    for (int i=2 ; i<=n-1 ; i++){
        if(n%i==0){
            cout<<n<<" is a composite number "<<endl;
            break;
        }
    
       else if( n==1) cout<<" 1 is nor composite nither prime "<<endl;
     
       else {
        cout<<n<<" is a not composite number "<<endl;
        break;
       }
    }
    if (n==2) cout<<" 2 is  not composite number "<<endl;
}