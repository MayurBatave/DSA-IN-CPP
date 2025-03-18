#include<iostream>
#include<vector>
using namespace std ;
void reverse( int i, int j , vector<int>&v){
    while(i<j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;

    }
}

void display( vector<int> & a){
    for ( int i=0 ; i<a.size() ; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int>v;
    int n;
    cout<<" Enter the size :";
    cin>>n;
    
    for (int i=0 ; i<n ; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    display(v);

    cout<<" Enter the value of k: ";
    int k;
    cin>>k;
    if(k>n){
        k=k%n;
    }
    if(k==n){
        display(v);
    }
    else{

    reverse(0, v.size()-k-1 , v );
    reverse(v.size()-k, v.size()-1 , v);
    reverse(0, v.size()-1 , v);

    
    display(v);
    }

}