#include<iostream>
using namespace std;
int main(){
   char ch;
   cout<<"Enter the character :  ";
   cin>>ch;
   int ascii= (int)ch;
   if((ascii>=65 && ascii<=90) || (ascii>=97 && ascii<=122)){
    cout<<"the character is Alphabeat ";
   }
   else{
    cout<<"the character is not Alphabeat "; 
   }
}