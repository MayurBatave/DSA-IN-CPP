// #include<iostream>
// using namespace std ;
// int main (){
//     int m,n;
//     cout<<" Enter the m and n : ";
//     cin>>m>>n;
//     int hcf=1;
//     for (int i=2 ; i<min(m,n); i++ ){
//         if(m%i==0 && n%i==0) hcf=i;
//     }
//     cout<<hcf;
// }

#include<iostream>
using namespace std ;
int main (){
    int m,n;
    cout<<" Enter the m and n : ";
    cin>>m>>n;
    int hcf=1;
    for (int i=min(m,n) ; i>=1; i-- ){
        if(m%i==0 && n%i==0) {
            hcf=i;
            break;
        }
    }
    cout<<hcf;
}