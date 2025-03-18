#include<iostream>
#include<vector>
using namespace std ;
int main(){
    vector<int>v1;
    int n;
    cout<<" Enter the size :";
    cin>>n;
    for (int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }
    vector<int>v2(v1.size());
    int z=v1.size()-1;
    for ( int i=0 ; i<v1.size() ; i++){
        v2.at(z)=v1.at(i);
        z--;
    }
    for( int i=0 ; i<v2.size(); i++){
        cout<<v2[i]<<" ";
    }
}