#include<iostream>
using namespace std;

void printPermutaion( string ans , string str ){
    if( str.size() == 0){
        cout<<ans<<" ";
        return ;
    }

    for( int i = 0 ; i<str.size() ; i++){
        string rem = str;

        printPermutaion( ans+str[i] , rem.erase( i , 1));
    }
}

int main(){
    string str = "abc";
    printPermutaion("" , str);
    return 0;
}