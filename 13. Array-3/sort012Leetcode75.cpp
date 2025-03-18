#include<iostream>
#include<vector>
using namespace std ;

void sort ( vector<int> &v ){
    int n=v.size();
    int lo=0;
    int mid =0 ;
    int hi= n-1 ;
    while(mid<= hi) {
        if( v[mid]==2){
            int temp = v[mid];
            v[mid]=v[hi];
            v[hi]=temp;
            hi--;
        }
        else if ( v[mid]==0){
            int temp= v[mid];
            v[mid]=v[lo];
            v[lo]=temp;
            lo++;
            mid++;
        }
        else {
            mid++;
        }
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