#include<iostream>
#include<string>
using namespace std;

// Sort the string In Decreasing order and string is greater than 'X'
int main(){
    string s= "AZYZXBDJKX";
    string str="";
    for( int i=0 ; i<s.length() ; i++){
        if( s[i] >= 'X') str.push_back(s[i]);
    } 

    // Sort using the bubble Sort 

    for( int i=0 ; i<str.length()-1; i++){
        for( int j=0 ; j<str.length()-1-i ;j++){
            if( str[j]<str[j+1]){
                swap( str[j] , str[j+1]);
            }
        }
    }
    cout<<str;

    return 0;
}