// Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of
// each digit of the number is equal to the number itself, then the number is called an Armstrong
// number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )
// Output :
// 1
// 153
// 370
// 371
// 407

#include<iostream>
using namespace std;
int main () {
    
   int  lastdigit, sum=0 ;
    
    

    for ( int i =1 ; i<=500 ; i++){
        int recover=i;
        sum=0;
        while(recover>0){
        lastdigit=recover%10;
       
        sum+=(lastdigit*lastdigit*lastdigit);
        
        recover/=10;
        
        }

        if (i==sum){
        cout<<i<<endl;
        }
        
    
        
    }
    

   
}

// TO CHECK NUMBER IS ARMSTRONG OR NOT

// #include<iostream>
// using namespace std;
// int main () {
    
//    int n , lastdigit, sum=0 ;
    
//     cout<<" Enter the number : ";
//     cin>>n;
//     int recover=n;

//     while(n>0){
//         lastdigit=n%10;
       
//         sum+=(lastdigit*lastdigit*lastdigit);
        
//         n/=10;
        
//         }
        

//     if (recover==sum){
//         cout<<" Number is Armstrong ";
//     }
//     else{
//          cout<<" Number is not Armstrong ";
//     }
// }

