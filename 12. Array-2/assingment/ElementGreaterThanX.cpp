// Count the number of elements strictly greater than x.

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
    int count=0;
    cout<<" Enter the value of X : ";
    int x;
    cin>>x;
    for ( int i=0 ; i<v.size() ; i++){
        if(v[i]>x){
            count++;
        }
    }
    cout<<count;

}
