//  Enter odd row number : 5
// 1
// 01
// 101
// 0101
// 10101


#include<iostream>
using namespace std ;
int main (){
    int n ;
    cout<< " Enter odd row number : ";
    cin>>n;
    int a =100;  // for inilization any number use

    for ( int i=1 ; i<=n ; i++){
        if(i%2!=0){
            a=1;
        }
        else {
            a=0;
        }
        for (int j =1 ; j<=i ; j++){
            cout<<a;

            // flipping 
            if(a==1){
                a=0;
            }
            else {
                a=1;
            }
        }
        cout<<endl;
    }

}