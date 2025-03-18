// only for positive numbers

// #include<iostream>
// using namespace std;
// int main () {
//         float a , b , power=1;
//         cout<<" Enter the base : ";
//         cin>>a;
//         cout<<" Enter the exponent : ";
//         cin>>b;
//         for(int i=1 ; i<=b ; i++){
//             power*=a;
//         }
//         cout<<a<<" raise to power "<<b<<" is "<<power;

// }



// for all numbers

#include<iostream>
using namespace std;
int main () {
        float a , b , power=1;
        cout<<" Enter the base : ";
        cin>>a;
        cout<<" Enter the exponent : ";
        cin>>b;
        bool flag =true;

        if(b<0){
            b=-b;
            flag=false;
        }


        for(int i=1 ; i<=b ; i++){
            power*=a;
        }
        
        if(flag==false){
            power=1/power;
            b=-b;
        }
        if(a==0 && b==0){
            cout<<" Not define ";
        }
        else{
            cout<<a<<" raise to power "<<b<<" is "<<power;

        }
        return 0;
}