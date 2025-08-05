
#include<iostream>
#include<vector>
using namespace std;

void subset( string ans , string str , int idx ){
    if( idx == str.length()){
        cout<<ans<<" ";
        return;
    }

    char ch = str[idx];
    subset( ans+ch , str , idx+1 );
    subset( ans , str , idx+1);
}

int main(){
    string str = "abc";
    subset( "" , str , 0);
    return 0;
}