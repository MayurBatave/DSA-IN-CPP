#include<iostream>
#include<vector>
using namespace std ;

void sort ( vector<int> &v ){
    int n=v.size();
    int count1=0;
    int count2=0;
    for( int i=0 ; i<n ; i++ ){
        if(v[i]==0) count1++;
        if ( v[i]==1) count2++;
        
    }
    count2+=count1;

    for ( int i=0 ; i<n ; i++){
        if(i<count1) v[i]=0;
        else if(i<count2 ) v[i]=1;
        else v[i]=2;
    }
        
    
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

    sort(v);

    for (int i=0 ; i<n ; i++){
        cout<<v[i]<<" ";
    }
 return 0;
}