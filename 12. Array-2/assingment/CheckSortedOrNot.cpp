// Check if the given array is sorted or not

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int n;
    cout<<" Enter the size of the Array : ";
    cin>>n;
    cout<<" Enter the elements of array : ";
    for ( int i=0 ; i<n ; i++ ){
        int a;
        cin>>a;
        v.push_back(a);
    }
    bool flag=true;
    for ( int i=0 ; i<v.size()-1 ; i++){
        if(v[i+1]<v[i]){
            flag=false;
            break;
        }
    }
    if(flag) cout<<" Sorted ";
    else cout<<" Not Sorted ";
}
