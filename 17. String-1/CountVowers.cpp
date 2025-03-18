#include<iostream>
#include<string>
using namespace std ;

int main (){
    string str = " Mayur";
    int count = 0;

    for ( int i=0 ; i<str.length(); i++){
        if( str[i] == 'a' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'e')
            count++;
    }
    cout<<count;
}